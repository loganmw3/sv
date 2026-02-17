import cocotb
from cocotb.triggers import Timer
import random

class Candidate:
    def __init__(self, width):
        self.width = width
        
        count = random.randint(0, width)
        self.count = count
        

        din = 0 
        for b in random.sample(range(width), self.count): 
            din |= (1 << b)
        
        self.din = din & 0xFFFF
        
            

    

@cocotb.test()
async def test_counting_ones(dut):
    random.seed(0)

    for _ in range(100):
        c = Candidate(width = 16)
        dut.din.value = c.din

        await Timer(1, unit="ns")

        expected = c.count
        got = int(dut.dout.value)

        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
