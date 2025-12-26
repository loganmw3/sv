import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_or_gate(dut):
    for a in [0, 1]:
        for b in [0, 1]:
            dut.a.value = a
            dut.b.value = b

            # let combinational logic settle
            await Timer(1, unit="ns")

            y = int(dut.y.value)
            expected = a | b
            assert y == expected, f"a={a}, b={b}, got y={y}, expected {expected}"
