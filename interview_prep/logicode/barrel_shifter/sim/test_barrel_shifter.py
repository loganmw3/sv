import cocotb
from cocotb.triggers import Timer
import random

MASK8 = 0xFF

@cocotb.test()
async def test_barrel_shifter(dut):
    random.seed(0) # Used to replicate results
    
    a_vals = tuple(random.randint(0, 1) for _ in range(100))
    
    for _ in range(100):
        val = random.randint(0, 2**8-1) & MASK8
        ctrl  = random.randint(0, 2**3-1) & MASK8
        dut.val.value = val
        dut.ctrl.value  = ctrl
        
        await Timer(1, unit="ns")
        got = dut.out.value
        expected = (val >> ctrl) & MASK8
        assert got == expected, f"ERROR: Expected: {expected}, Got: {got}"

    
    await Timer(10, unit="ns")
    pass