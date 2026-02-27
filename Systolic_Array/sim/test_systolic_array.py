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
    
    def matgen(self, rows, width):
        A = [[random.getrandbits(8) for _ in range(width)] for _ in range(rows)]
        return A

    def matmul(self, A, B):
        # A, B are matricies
        # I made this function to asssure the data types are correct
        A_np = np.array(A, dtype=u8)
        B_np = np.array(B, dtype=u8)
        C = (A_np.astype(u32) @ B_np.astype(u32))

        return C.astype(u32).tolist()
    
class TB:
    def __init__(self, dut, N, K, clk_period_ns=10):
        self.dut = dut
        self.N = N
        self.K = K
        self.expected_cycles = K + 2 * (N - 1)
        self.clk_period_ns = clk_period_ns
        pass
    
    async def start_clock(self):
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())
        
    async def reset(self, cycles=2):
        self.dut.start.value = 0
        self.dut.valid.value = 0
        for i in range(self.N):
            self.dut.a_row[i].value = 0
            self.dut.b_col[i].value = 0


        self.dut.rst.value = 1
        await ClockCycles(self.dut.clk, cycles)
        self.dut.rst.value = 0
        await ClockCycles(self.dut.clk, 1)
        
    def drive_edges(self, A, B, t):
        # dut is the design under test
        # A, B are matricies
        # N is size of systolic array (rows or columns)
        # K is the inner dimension of matrix multiply (N x K) @ (K x N)
        # t is the clock cycle index
        
        # 1) find out what data from A we are driving
        for i in range(self.N):
            k_idx = t - i
            if 0 <= k_idx < self.K:
                self.dut.a_row[i].value = A[i][k_idx]
            else:
                self.dut.a_row[i].value = 0
        
        # 2) find out what data from B we are driving
        for j in range(self.N):
            k_idx = t - j
            if 0 <= k_idx < self.K:
                self.dut.b_col[j].value = B[k_idx][j]
            else:
                self.dut.b_col[j].value = 0

        return
        
    async def run_once(self, A, B):
        self.dut.start.value = 1
        self.dut.valid.value = 0
        await RisingEdge(self.dut.clk)
        self.dut.start.value = 0

        self.dut.valid.value = 1

        for cycle_idx in range(self.expected_cycles):
            self.drive_edges(A, B, cycle_idx)
            await RisingEdge(self.dut.clk)

        self.dut.valid.value = 0
        
        # wait for done pulse
        while True:
            await RisingEdge(self.dut.clk)
            if int(self.dut.done.value) == 1:
                break

        C_got = [[int(self.dut.c[i][j].value) for j in range(self.N)] for i in range(self.N)]
        return C_got


@cocotb.test()
async def test_systolic_array(dut):
    random.seed(0)
    
    iterations = 10000
    N, K = 8, 8

    gold = GoldenModel()
    tb = TB(dut, N, K)

    await tb.start_clock()
    await tb.reset()

    for t in range(iterations):
        A = gold.matgen(N, K)
        B = gold.matgen(K, N)

        C_exp = gold.matmul(A, B)
        
        C_got = await tb.run_once(A, B)

        assert C_got == C_exp, (
            f"Trial {t} mismatch\n"
            f"A={A}\nB={B}\n"
            f"Expected: C={C_exp}\n"
            f"Got:      C={C_got}"
        )