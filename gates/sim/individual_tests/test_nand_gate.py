import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def nand_test(dut):
    a = (0,0,1,1)
    b = (0,1,0,1)
    y = (1,1,1,0)
    
    for i in range(len(a)):
        dut.a.value = a[i]
        dut.b.value = b[i]
        await Timer(1, unit="ns")
        assert int(dut.y.value) == y[i], f"ERROR"
    
    await Timer(10, unit="ns")
    pass