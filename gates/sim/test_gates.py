import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_not_gate(dut):
    a = (0, 1)
    y = (1, 0)
    
    for i in range(2):
        dut.a.value = a[i]
        await Timer(1, unit="ns")
        
        assert int(dut.y.value) == y[i], f"Error {y}"
    await Timer(10, unit="ns")
    pass


@cocotb.test()
async def test_and_gate(dut):
    for a in [0, 1]:
        for b in [0, 1]:
            dut.a.value = a
            dut.b.value = b
            await Timer(1, unit="ns")
            assert int(dut.y.value) == (a & b)
         
            
@cocotb.test()
async def test_or_gate(dut):
    for a in [0, 1]:
        for b in [0, 1]:
            dut.a.value = a
            dut.b.value = b

            # let combinational logic settle
            await Timer(1, unit="ns")

            y = int(dut.y.value)
            expected = a | b
            assert y == expected, f"a={a}, b={b}, got y={y}, expected {expected}"
            
            
@cocotb.test()
async def test_xor_gate(dut):
    a = (0, 0, 1, 1)
    b = (0, 1, 0, 1)
    y = (0, 1, 1, 0)

    for i in range(4):
        dut.a.value = a[i]
        dut.b.value = b[i]
        await Timer(1, unit="ns")

        assert int(dut.y.value) == y[i], f"i={i}: a={a[i]} b={b[i]}"
    await Timer(10, unit="ns")


@cocotb.test()
async def test_nand_gate(dut):
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


@cocotb.test()
async def test_nor_gate(dut):
    a = (0,0,1,1)
    b = (0,1,0,1)
    y = (1,0,0,0)
    
    for i in range(len(a)):
        dut.a.value = a[i]
        dut.b.value = b[i]
        await Timer(1, unit="ns")
        
        assert int(dut.y.value) == y[i], f"ERROR"
    
    await Timer(10, unit="ns")
    pass


@cocotb.test()
async def test_xnor_gate(dut):
    a = (0,0,1,1)
    b = (0,1,0,1)
    y = (1,0,0,1)
    
    for i in range(len(a)):
        dut.a.value = a[i]
        dut.b.value = b[i]
        await Timer(1, unit="ns")
        
        assert int(dut.y.value) == y[i], f"ERROR"
    
    await Timer(10, unit="ns")
    pass


