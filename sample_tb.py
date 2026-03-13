import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles
import random
import numpy as np

u8 = np.uint8
u32 = np.uint32

class GoldenModel:
    def __init__(self):
        pass
    
    
class TB:
    def __init__(self):
        pass
    
    async def start_clock(self):
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())
        
    async def reset(self, cycles=2):
        self.dut.rst.value = 1
        await ClockCycles(self.dut.clk, cycles)
        self.dut.rst.value = 0
        await ClockCycles(self.dut.clk, 1)
        
        
    async def run_once(self):
        pass


@cocotb.test()
async def test_systolic_array(dut):
    random.seed(0)
    
    iterations = 10000

    gold = GoldenModel()
    tb = TB(dut)

    await tb.start_clock()
    await tb.reset()

    for t in range(iterations):


        assert ___ == ___, (
            f"Trial {t} mismatch\n"
            f"A={A}\n"
            f"Expected: ___={}\n"
            f"Got:      ___={}"
        )