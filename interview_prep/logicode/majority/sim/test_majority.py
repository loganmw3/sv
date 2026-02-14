import cocotb
from cocotb.triggers import Timer
import random

@cocotb.test()
async def test_majority(dut):
    random.seed(0)

    for _ in range(100):
        a = random.randint(0, 1)
        b = random.randint(0, 1)
        c = random.randint(0, 1)
        dut.a.value = a
        dut.b.value = b
        dut.c.value = c

        await Timer(1, unit="ns")

        expected = a&b | a&c | b&c;
        got = int(dut.out.value)

        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
