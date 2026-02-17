import cocotb
from cocotb.triggers import Timer
import random


class Candidate:
    def __init__(self, DIN_WIDTH):
        self.din_width = DIN_WIDTH
        self.dout_width = 2**DIN_WIDTH
        mask = (1 << self.dout_width) - 1
        
        din = random.getrandbits(DIN_WIDTH)
        self.din = din
        self.dout = (1 << (self.din + 1)) - 1
        

@cocotb.test()
async def test_bin_to_thermo(dut):
    random.seed(0)

    for _ in range(100):
        c = Candidate(DIN_WIDTH=8)
        dut.din.value = c.din

        await Timer(1, unit="ns")

        expected = c.dout
        got = int(dut.dout.value)

        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
