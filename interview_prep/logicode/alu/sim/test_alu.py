import cocotb
from cocotb.triggers import Timer
import random

MASK32 = 0xFFFFFFFF

@cocotb.test()
async def test_example(dut):
    random.seed(0)

    for _ in range(100):
        a = random.randint(0, MASK32)
        b = random.randint(0, MASK32)

        dut.a.value = a
        dut.b.value = b
        await Timer(1, unit="ns")

        a_plus_b  = (a + b) & MASK32
        a_minus_b = (a - b) & MASK32
        not_a     = (~a)    & MASK32
        a_and_b   = (a & b) & MASK32
        a_or_b    = (a | b) & MASK32
        a_xor_b   = (a ^ b) & MASK32

        assert int(dut.a_plus_b.value)  == a_plus_b,  f"Expected: {a_plus_b} Got: {int(dut.a_plus_b.value)}"
        assert int(dut.a_minus_b.value) == a_minus_b, f"Expected: {a_minus_b} Got: {int(dut.a_minus_b.value)}"
        assert int(dut.not_a.value)     == not_a,     f"Expected: {not_a} Got: {int(dut.not_a.value)}"
        assert int(dut.a_and_b.value)   == a_and_b,   f"Expected: {a_and_b} Got: {int(dut.a_and_b.value)}"
        assert int(dut.a_or_b.value)    == a_or_b,    f"Expected: {a_or_b} Got: {int(dut.a_or_b.value)}"
        assert int(dut.a_xor_b.value)   == a_xor_b,   f"Expected: {a_xor_b} Got: {int(dut.a_xor_b.value)}"

    await Timer(10, units="ns")
