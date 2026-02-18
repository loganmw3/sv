import cocotb
from cocotb.triggers import Timer
import random
import math

class Candidate:
    def __init__(self):
        din = random.getrandbits(16)
        self.din = din
        sign_bit = (din >> 15) & 1

        if sign_bit or din == 0:
            self.dout = 0
        else:
            self.dout = math.floor(math.log2(din))
            
        pass


@cocotb.test()
async def test_log_int2(dut):
    random.seed(0)

    for _ in range(100):
        c = Candidate()
        dut.in_0.value = c.din

        await Timer(1, unit="ns")

        expected = c.dout
        got = int(dut.out.value)

        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
