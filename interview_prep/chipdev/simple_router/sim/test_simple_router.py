
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, Timer
import random
import numpy as np

u8 = np.uint8
u32 = np.uint32

class GoldenModel:
    def __init__(self, DATA_WIDTH):
        self.din = random.getrandbits(DATA_WIDTH)
        self.din_en = random.getrandbits(1)
        self.addr = random.getrandbits(2)
        
        # Expected Outputs
        self.dout0 = 0
        self.dout1 = 0
        self.dout2 = 0
        self.dout3 = 0
        
        if self.din_en:
            if self.addr == 0:
                self.dout0 = self.din
            elif self.addr == 1:
                self.dout1 = self.din
            elif self.addr == 2:
                self.dout2 = self.din
            elif self.addr == 3:
                self.dout3 = self.din

    
    
class TB:
    def __init__(self, dut, DATA_WIDTH):
        self.dut = dut
        self.DATA_WIDTH = DATA_WIDTH
        pass
    
    async def start_clock(self):
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())
        

    async def reset(self, cycles=2):
        self.dut.rst.value = 1
        await ClockCycles(self.dut.clk, cycles)
        self.dut.rst.value = 0
        await ClockCycles(self.dut.clk, 1)
        
        
    async def run_once(self, gold, t):
        self.dut.din.value = gold.din
        self.dut.din_en.value = gold.din_en
        self.dut.addr.value = gold.addr
        
        await Timer(1, unit="ns")
        
        assert gold.dout0 == self.dut.dout0.value, (f"Trial  mismatch {t}, Expected: dout0 = {gold.dout0}, Got: dout0 = {self.dut.dout0.value}")
        assert gold.dout1 == self.dut.dout1.value, (f"Trial  mismatch {t}, Expected: dout1 = {gold.dout1}, Got: dout1 = {self.dut.dout1.value}")
        assert gold.dout2 == self.dut.dout2.value, (f"Trial  mismatch {t}, Expected: dout2 = {gold.dout2}, Got: dout2 = {self.dut.dout2.value}")
        assert gold.dout3 == self.dut.dout3.value, (f"Trial  mismatch {t}, Expected: dout3 = {gold.dout3}, Got: dout3 = {self.dut.dout3.value}")
        
        pass


@cocotb.test()
async def test_systolic_array(dut):
    random.seed(0)
    
    iterations = 10000
    DATA_WIDTH = 32

    tb = TB(dut, DATA_WIDTH)

    for t in range(iterations):
        
        # Generate inputs & expected outputs
        gold = GoldenModel(DATA_WIDTH)
        
        # Drive DUT with values from golden
        await tb.run_once(gold, t)
        

    await Timer(10, unit="ns")
        

