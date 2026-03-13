
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, Timer
import random
import numpy as np

u8 = np.uint8
u32 = np.uint32

class GoldenModel:
    def __init__(self, DATA_WIDTH):
        self.DATA_WIDTH = DATA_WIDTH
        self.list = [0, 0]
        self.sorted = sorted(self.list, reverse=True)
        self.second = self.sorted[1]
        pass
    
    def push(self, din):
        self.list.append(din)
        self.sorted = sorted(self.list, reverse=True)
        self.second = self.sorted[1]
    
    
class TB:
    def __init__(self, dut):
        self.dut = dut
        pass
    
    async def start_clock(self):
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())
        
    async def reset(self, cycles=2):
        self.dut.rst.value = 1
        await ClockCycles(self.dut.clk, cycles)
        self.dut.rst.value = 0
        await ClockCycles(self.dut.clk, 1)
        
        
    async def run_once(self, gold, t):
        # Get a new din
        din = random.getrandbits(gold.DATA_WIDTH)
        
        # Drive new din
        self.dut.din.value = din
        await RisingEdge(self.dut.clk)
        
        # Push it to the list and wait for logic to settle
        gold.push(din)
        await Timer(1, unit="ns")
        
        assert self.dut.dout.value == gold.second, (f"Trial mismatch: {t}, Expected: {gold.second}, Got: {self.dut.dout.value}")
        
        pass


@cocotb.test()
async def test_systolic_array(dut):
    random.seed(0)
    
    iterations = 10000
    DATAWIDTH = 32

    gold = GoldenModel(DATAWIDTH)
    tb = TB(dut)

    await tb.start_clock()
    await tb.reset()

    for t in range(iterations):
        await tb.run_once(gold, t)

    await Timer(100, unit="ns")
