import cocotb
from cocotb.triggers import Timer
import random

class Candidate:
    def __init__(self):
        din = random.getrandbits(32)
        self.din = din
        
        i = 0
        while(din >> i & 1 == 0):
            i += 1
        dout = i
        self.dout = dout
        
        pass

@cocotb.test()
async def test_trailing_zeros(dut):
    random.seed(0)

    for _ in range(100):
        c = Candidate()
        dut.din.value = c.din
        
        await Timer(1, unit="ns")
        
        expected = c.dout
        got = int(dut.dout.value)
        
        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
