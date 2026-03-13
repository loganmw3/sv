import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer
from cocotb.triggers import RisingEdge, FallingEdge, ClockCycles
import random

k = 1

class Matrix:
    def __init__(self, k):
        # self.a = [[random.getrandbits(8) for _ in range(k)] for _ in range(k)]
        # self.b = [[random.getrandbits(8) for _ in range(k)] for _ in range(k)]
        
        self.a = random.getrandbits(8)
        self.b = random.getrandbits(8)
        self.out = self.a * self.b
        
        pass


# this is probably bad practice. I probably should make this into a class with the dut
# Similarly there are two approaches for the reset function
# 1) pass though a number of clock cycles to reset
# 2) Pass thought a static length of time to reset
# I went with the first option. Seem like better practice 
async def reset_dut(dut, cycles=1):
    dut.rst.value = 1
    for _ in range(cycles):
        await RisingEdge(dut.clk)
        
    dut.rst.value = 0
    # THIS FUCKING BROKE IT. DONT DO THIS
    # await RisingEdge(dut.clk)

    

@cocotb.test()
async def test_mac(dut):
    random.seed(0)
    # generate clock
    clk = Clock(dut.clk, 10, unit='ns')
    cocotb.start_soon(clk.start())

    # send a reset signal
    # await reset_dut(dut)

    for _ in range(100):
        
        # send a reset signal
        await reset_dut(dut)
        
        mat = Matrix(k)
        dut.a_in.value = mat.a
        dut.b_in.value = mat.b

        # I think this might be better practice than the other way
        await ClockCycles(dut.clk, 2)

        expected = mat.out
        got = int(dut.c.value)
        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"
        
    await Timer(10, unit="ns")
