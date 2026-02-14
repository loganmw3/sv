import cocotb
from cocotb.triggers import Timer
import random

MASK32 = 0xFFFFFFFF
DATA_WIDTH = 32

def generate_candidate():
    candidate = 0
    loops = random.randint(0,DATA_WIDTH-1)
    for _ in range(loops):
        one_hot = (1 << random.randint(0,DATA_WIDTH-1))
        candidate |= one_hot
    
    return candidate & MASK32
    
def determine_one_hot(candidate):
    return (candidate & (candidate-1) == 0) and (candidate != 0)


@cocotb.test()
async def test_one_hot(dut):
    random.seed(0) # Used to replicate results
    
    
    for _ in range(100):
        din = generate_candidate()
        dut.din.value = din
        
        await Timer(1, unit="ns")
        expected = determine_one_hot(din)
        got = int(dut.onehot.value)
        assert got == int(expected), f"ERROR: Expected: {expected}, Got: {got}"

    
    await Timer(10, unit="ns")
    pass