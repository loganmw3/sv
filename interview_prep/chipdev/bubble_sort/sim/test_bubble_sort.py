
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, Timer
import random
import numpy as np

u8 = np.uint8
u32 = np.uint32

class GoldenModel:
    def __init__(self, DATA_WIDTH, MEM_DEPTH):
        self.DATA_WIDTH = DATA_WIDTH
        self.MEM_DEPTH = MEM_DEPTH
        self.din = [random.getrandbits(DATA_WIDTH) for _ in range(MEM_DEPTH)]
        self.sorted_vals = sorted(self.din, reverse=True)
        self.dout = 0
        for i, v in enumerate(self.sorted_vals):
            self.dout |= (v << (i * DATA_WIDTH))
        pass

    
    
class TB:
    def __init__(self, dut):
        self.dut = dut
        pass
    
    async def start_clock(self):
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())
        
    async def reset(self, cycles=2):
        self.dut.rst.value = 1
        self.dut.sortit.value = 0
        await ClockCycles(self.dut.clk, cycles)
        self.dut.rst.value = 0
        await ClockCycles(self.dut.clk, 1)
        
        
    async def run_once(self, gold, t):
        for i in range(gold.MEM_DEPTH):
            self.dut.din.value = gold.din[i]
            await RisingEdge(self.dut.clk)
            
        self.dut.sortit.value = 1
        await RisingEdge(self.dut.clk)
        self.dut.sortit.value = 0
        await RisingEdge(self.dut.clk)
        
        assert self.dut.dout.value.to_unsigned() == gold.dout, (f"Trial: {t}, Expected: {gold.dout}, Got: {self.dut.dout.value.to_unsigned()}\n")
            
        pass


@cocotb.test()
async def test_bubble_sort(dut):
    random.seed(0)
    
    iterations = 10000
    DATA_WIDTH = 3
    MEM_DEPTH = 8

    tb = TB(dut)

    await tb.start_clock()
    await tb.reset()

    for t in range(iterations):
        await tb.reset()
        gold = GoldenModel(DATA_WIDTH, MEM_DEPTH)
        await tb.run_once(gold, t)

    await Timer(100, unit="ns")
