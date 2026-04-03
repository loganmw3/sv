import cocotb
import numpy as np
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly

OPCODE_CONFIG = 0b10001
OPCODE_LOAD   = 0b00111
OPCODE_STORE  = 0b00110
OPCODE_GEMM   = 0b11111


def encode_config(target_spad: int, ptr: int, rows: int, cols: int) -> int:
    return (
        (OPCODE_CONFIG << 59)
        | ((target_spad & 0x7) << 56)
        | ((ptr & 0xFFFFFFFF) << 16)
        | ((rows & 0xFF) << 8)
        | (cols & 0xFF)
    )


def encode_load(target_spad: int) -> int:
    return (
        (OPCODE_LOAD << 59)
        | ((target_spad & 0x7) << 56)
    )


def encode_store(target_spad: int) -> int:
    return (
        (OPCODE_STORE << 59)
        | ((target_spad & 0x7) << 56)
    )


def encode_gemm(spad_a: int, spad_b: int, spad_c: int) -> int:
    return (
        (OPCODE_GEMM << 59)
        | ((spad_a & 0x7) << 56)
        | ((spad_b & 0x7) << 53)
        | ((spad_c & 0x7) << 50)
    )


async def wait_for_commit(dut, timeout=200):
    for _ in range(timeout):
        await RisingEdge(dut.clk)
        await ReadOnly()
        if int(dut.commit_en.value) == 1:
            return
    assert False, "Timeout waiting for commit"


async def run_config(dut, target_spad: int, ptr: int, rows: int, cols: int):
    dut.instruction.value = encode_config(target_spad, ptr, rows, cols)
    await wait_for_commit(dut)
    await RisingEdge(dut.clk)
    dut.instruction.value = 0
    await RisingEdge(dut.clk)


async def run_load(dut, target_spad: int, memory: dict[int, int], timeout=300):
    dut.instruction.value = encode_load(target_spad)

    for _ in range(timeout):
        await RisingEdge(dut.clk)

        if int(dut.mem_ren.value) == 1:
            addr = int(dut.mem_raddr.value)
            dut.mem_rdata.value = memory.get(addr, 0)
            dut.mem_rvalid.value = 1
        else:
            dut.mem_rvalid.value = 0

        if int(dut.commit_en.value) == 1:
            break
    else:
        assert False, f"Timeout waiting for LOAD on spad {target_spad}"

    dut.mem_rvalid.value = 0
    dut.mem_rdata.value = 0
    dut.instruction.value = 0
    await RisingEdge(dut.clk)


async def run_gemm(dut, spad_a: int, spad_b: int, spad_c: int, timeout=600):
    dut.instruction.value = encode_gemm(spad_a, spad_b, spad_c)

    for cyc in range(timeout):
        await RisingEdge(dut.clk)
        await ReadOnly()

        commit = int(dut.commit_en.value)
        if commit == 1:
            break
    else:
        assert False, f"Timeout waiting for GEMM {spad_a} x {spad_b} -> {spad_c}"

    await RisingEdge(dut.clk)
    dut.instruction.value = 0
    await RisingEdge(dut.clk)


async def run_store(dut, target_spad: int, written_memory: dict[int, int], timeout=300):
    dut.instruction.value = encode_store(target_spad)

    for _ in range(timeout):
        await RisingEdge(dut.clk)
        await ReadOnly()

        if int(dut.mem_wen.value) == 1:
            addr = int(dut.mem_waddr.value)
            data = int(dut.mem_wdata.value)
            written_memory[addr] = data

        if int(dut.commit_en.value) == 1:
            break
    else:
        assert False, f"Timeout waiting for STORE on spad {target_spad}"

    await RisingEdge(dut.clk)
    dut.instruction.value = 0
    await RisingEdge(dut.clk)


def check_spad_matrix(dut, spad_num: int, expected_flat: list[int], label: str):
    for i, exp in enumerate(expected_flat):
        got = int(dut.sp_i.spad_mem[spad_num][i].value)
        assert got == exp, f"{label} spad[{spad_num}][{i}] expected {exp}, got {got}"


def check_written_matrix(
    written_memory: dict[int, int],
    base_addr: int,
    expected_flat: list[int],
    label: str
):
    for i, exp in enumerate(expected_flat):
        addr = base_addr + i
        assert addr in written_memory, f"{label} missing write to {hex(addr)}"
        got = written_memory[addr]
        assert got == exp, f"{label} at {hex(addr)} expected {exp}, got {got}"


@cocotb.test()
async def test_chain_gemm_no_store_between(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    # A and B chosen so all results stay under 256
    A = np.array([
        [1, 2],
        [3, 4],
    ], dtype=np.uint8)

    B = np.array([
        [2, 0],
        [1, 2],
    ], dtype=np.uint8)

    # First GEMM: A @ B = C
    C = (A.astype(np.uint32) @ B.astype(np.uint32)).astype(np.uint32)

    # Second GEMM: A @ C = D
    D = (A.astype(np.uint32) @ C.astype(np.uint32)).astype(np.uint32)

    C_u8 = (C & 0xFF).astype(np.uint8)
    D_u8 = (D & 0xFF).astype(np.uint8)

    A_flat = A.flatten().tolist()
    B_flat = B.flatten().tolist()
    C_flat = C_u8.flatten().tolist()
    D_flat = D_u8.flatten().tolist()

    memory = {
        # A at 0x100
        0x100: A_flat[0],
        0x101: A_flat[1],
        0x102: A_flat[2],
        0x103: A_flat[3],

        # B at 0x110
        0x110: B_flat[0],
        0x111: B_flat[1],
        0x112: B_flat[2],
        0x113: B_flat[3],
    }

    written_memory = {}

    # Reset
    dut.rst.value = 1
    dut.instruction.value = 0
    dut.mem_rdata.value = 0
    dut.mem_rvalid.value = 0

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)

    # spad0 = A
    # spad1 = B
    # spad2 = C
    # spad3 = D
    await run_config(dut, 0, 0x100, 2, 2)
    await run_config(dut, 1, 0x110, 2, 2)
    await run_config(dut, 2, 0x200, 2, 2)  # C destination
    await run_config(dut, 3, 0x210, 2, 2)  # D destination

    # Load only A and B
    await run_load(dut, 0, memory)
    await run_load(dut, 1, memory)

    check_spad_matrix(dut, 0, A_flat, "A")
    check_spad_matrix(dut, 1, B_flat, "B")

    # First GEMM: A @ B = C into spad2
    await run_gemm(dut, 0, 1, 2)
    check_spad_matrix(dut, 2, C_flat, "C")

    # Second GEMM: A @ C = D into spad3
    # Note: C is reused directly from spad2, no STORE/LOAD in between
    await run_gemm(dut, 0, 2, 3)
    check_spad_matrix(dut, 3, D_flat, "D")

    # Only store final D if you want
    await run_store(dut, 3, written_memory)
    check_written_matrix(written_memory, 0x210, D_flat, "D")

    assert len(written_memory) == 4, f"Expected 4 writes for D, got {len(written_memory)}"

    print("A =")
    print(A)
    print("B =")
    print(B)
    print("C = A @ B =")
    print(C)
    print("D = A @ C =")
    print(D)