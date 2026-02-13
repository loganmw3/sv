import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def xor_test(dut):
    a = (0, 0, 1, 1)
    b = (0, 1, 0, 1)
    y = (0, 1, 1, 0)

    for i in range(4):
        dut.a.value = a[i]
        dut.b.value = b[i]
        await Timer(1, unit="ns")

        assert int(dut.y.value) == y[i], f"i={i}: a={a[i]} b={b[i]}"
    await Timer(10, unit="ns")