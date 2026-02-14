import cocotb
from cocotb.triggers import Timer
import random

MASK8 = 0xFF
MASK16 = 0xFFFF
MASK32 = 0xFFFFFFFF
MASK64 = 0xFFFFFFFFFFFFFFFF

@cocotb.test()
async def test_mod_exp(dut):
    random.seed(0) # Used to replicate results
    
    
    for _ in range(100):
        a = random.randint(0,2**3-1) & MASK8
        b = random.randint(0,2**3-1) & MASK8
        m = random.randint(1,2**3-1) & MASK8
        dut.a.value = a
        dut.b.value = b
        dut.m.value = m
        
        await Timer(1, unit="ns")
        expected = (a**b % m )
        got = int(dut.y.value)
        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    
    await Timer(10, unit="ns")
    pass