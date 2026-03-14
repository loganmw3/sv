
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, Timer
import random
import numpy as np

u8 = np.uint8
u32 = np.uint32

class GoldenModel:
    def __init__(self, DATA_WIDTH):
        self.DATA_WDITH = DATA_WIDTH
        self.mask = (1 << DATA_WIDTH) - 1
        
        self.a = random.getrandbits(self.DATA_WDITH)
        self.b = random.getrandbits(self.DATA_WDITH)
        self.not_a = ~(self.a) & self.mask
        self.a_and_b = (self.a & self.b) & self.mask
        self.a_nand_b = ~(self.a & self.b) & self.mask
        self.a_or_b = (self.a | self.b) & self.mask
        self.a_nor_b = ~(self.a | self.b) & self.mask
        self.a_xor_b = (self.a ^ self.b) & self.mask
        self.a_xnor_b = ~(self.a ^ self.b) & self.mask
        pass
    

    
    
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
        self.dut.a.value = gold.a
        self.dut.b.value = gold.b
        await Timer(1, unit="ns")
        
        assert gold.not_a == self.dut.not_a.value, (f'Trial: {t}, Expected: {gold.not_a}, Got: {self.dut.not_a.value}')
        assert gold.a_and_b == self.dut.a_and_b.value, (f'Trial: {t}, Expected: {gold.a_and_b}, Got: {self.dut.a_and_b.value}')
        assert gold.a_nand_b == self.dut.a_nand_b.value, (f'Trial: {t}, Expected: {gold.a_nand_b}, Got: {self.dut.a_nand_b.value}')
        assert gold.a_or_b == self.dut.a_or_b.value, (f'Trial: {t}, Expected: {gold.a_or_b}, Got: {self.dut.a_or_b.value}')
        assert gold.a_nor_b == self.dut.a_nor_b.value, (f'Trial: {t}, Expected: {gold.a_nor_b}, Got: {self.dut.a_nor_b.value}')
        assert gold.a_xor_b == self.dut.a_xor_b.value, (f'Trial: {t}, Expected: {gold.a_xor_b}, Got: {self.dut.a_xor_b.value}')
        assert gold.a_xnor_b == self.dut.a_xnor_b.value, (f'Trial: {t}, Expected: {gold.a_xnor_b}, Got: {self.dut.a_xnor_b.value}')
        
        pass


@cocotb.test()
async def test_systolic_array(dut):
    random.seed(0)
    
    iterations = 10000
    DATA_WIDTH = 32

    tb = TB(dut)

    # await tb.start_clock()
    # await tb.reset()

    for t in range(iterations):
        gold = GoldenModel(DATA_WIDTH)
        await tb.run_once(gold, t)
        
    await Timer(100, unit="ns")