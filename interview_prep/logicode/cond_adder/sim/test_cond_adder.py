import cocotb
from cocotb.triggers import Timer
import random

@cocotb.test()
async def test_cond_adder(dut):
    random.seed(0)

    for _ in range(100):
        A = random.randint(0, 2**32-1)
        B = random.randint(0, 2**32-1)
        C = random.randint(0, 2**32-1)
        D = random.randint(0, 2**32-1)
        dut.A.value = A
        dut.B.value = B
        dut.C.value = C
        dut.D.value = D
        
        s = random.randint(0,1)
        dut.s.value = s

        await Timer(1, unit="ns")

        expected = A+B if s else C+D
        got = int(dut.Z.value)

        assert expected == got, f"ERROR: Expected: {expected}, Got: {got}"

    await Timer(10, unit="ns")
