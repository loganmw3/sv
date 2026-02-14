import cocotb
from cocotb.triggers import Timer
import random

MASK8 = 0xFF
MASK16 = 0xFFFF
MASK32 = 0xFFFFFFFF
MASK64 = 0xFFFFFFFFFFFFFFFF

@cocotb.test()
async def test_example(dut):
    random.seed(0) # Used to replicate results
    
    
    for _ in range(100):
        a = random.randint(0,1)
        dut.a.value = a
        
        await Timer(1, unit="ns")
        expected = a
        got = int(dut.y.value)
        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    
    await Timer(10, unit="ns")
    pass