import cocotb
from cocotb.triggers import Timer
import random

@cocotb.test()
async def test_polynomial_1(dut):
    random.seed(0)
    x_vals = tuple(random.randint(0, 255) for _ in range(100))
    
    for x in x_vals:
        dut.x.value = x
        await Timer(1, unit="ns")
        
        assert int(dut.y.value) == ((x + 1)**2), f"Error. Got: {int(dut.y.value)}. Expected: {((x + 1)**2)}."
        
    
    await Timer(10, unit="ns")
    pass