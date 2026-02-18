import cocotb
from cocotb.triggers import Timer
import random

class Candidate:
    def __init__(self):
        din = random.getrandbits(8)
        self.din = din
        transitions = 0
        for i in range(7):
            if ((din >> i) & 1) != ((din >> (i+1)) & 1):
                transitions += 1
            pass
        self.dout = transitions == 1

@cocotb.test()
async def test_thermo_code_detector(dut):
    random.seed(0)

    for _ in range(100):
        c = Candidate()
        dut.codeIn.value = c.din

        await Timer(1, unit="ns")

        expected = c.dout
        got = int(dut.isThermometer.value)

        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
