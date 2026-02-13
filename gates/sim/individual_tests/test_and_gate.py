import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_and_gate(dut):
    for a in [0, 1]:
        for b in [0, 1]:
            dut.a.value = a
            dut.b.value = b
            await Timer(1, unit="ns")
            assert int(dut.y.value) == (a & b)
