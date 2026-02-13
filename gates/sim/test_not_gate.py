import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def not_test(dut):
    a = (0, 1)
    y = (1, 0)
    
    for i in range(2):
        dut.a.value = a[i]
        await Timer(1, unit="ns")
        
        assert int(dut.y.value) == y[i], f"Error {y}"
    await Timer(10, unit="ns")
    pass