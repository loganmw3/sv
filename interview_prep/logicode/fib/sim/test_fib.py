import cocotb
from cocotb.triggers import Timer
import random


def fib(n):
    if(n <= 0):
        return 0
    if(n == 1):
        return 1
    
    return fib(n-1) + fib(n-2)



class Candidate:
    def __init__(self):
        self.din = random.getrandbits(4)
        self.dout = Candidate.fib(self.din)
        
    @staticmethod
    def fib(n):
        if n <= 0:
            return 0
        if n == 1:
            return 1
        return Candidate.fib(n-1) + Candidate.fib(n-2)


@cocotb.test()
async def test_fib(dut):
    random.seed(0)

    for _ in range(100):
        c = Candidate()
        dut.in_0.value = c.din

        await Timer(1, unit="ns")

        expected = c.dout
        got = int(dut.out.value)

        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
