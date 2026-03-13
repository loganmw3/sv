
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
        self.din = random.getrandbits(DATA_WIDTH)
        self.dout = self.reverseBits(self.din)
        pass
    
    def reverseBits(self, n: int) -> int: # Thank you google
        result = 0
        # Iterate through all 32 bits
        for i in range(self.DATA_WIDTH):
            # Extract the least significant bit (LSB) of n
            # using bitwise AND operation (n & 1)
            last_bit = n & 1
            
            # Place this bit at its reversed position (31 - i) in the result
            # using left shift (<<) and bitwise OR (|)
            result |= (last_bit << ((self.DATA_WIDTH - 1) - i))
            
            # Right shift n by 1 to process the next bit in the next iteration
            n >>= 1
            
        return result
    
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
        self.dut.din.value = gold.din
        await Timer(1, unit="ns")
                
        assert self.dut.dout.value == gold.dout, (f"Trial  mismatch: {t}, Expected: {gold.dout}, Got: {self.dut.dout.value}")
        pass


@cocotb.test()
async def test_systolic_array(dut):
    random.seed(0)
    
    iterations = 10000
    DATA_WIDTH = 32

    
    tb = TB(dut)


    for t in range(iterations):
        gold = GoldenModel(DATA_WIDTH)
        await tb.run_once(gold, t)



        
    await Timer(100, unit="ns")
