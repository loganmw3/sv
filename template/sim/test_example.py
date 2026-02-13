import cocotb
from cocotb.triggers import Timer
import random

@cocotb.test()
async def test_example(dut):
    random.seed(0) # Used to replicate results
    
    a_vals = tuple(random.randint(0, 1) for _ in range(100))
    
    for a in a_vals:
        dut.a.value = a
        
        await Timer(1, unit="ns")
        assert int(dut.y.value) == a, f"ERROR: Expected: {a}, Got: {dut.y.value}"

    
    await Timer(10, unit="ns")
    pass