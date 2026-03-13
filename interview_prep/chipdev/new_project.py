from pathlib import Path
import sys


def write_makefile(sim_dir: Path, name: str) -> Path:
    sim_dir.mkdir(parents=True, exist_ok=True)
    makefile_path = sim_dir / "Makefile"

    content = f"""SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/{name}.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: {name} all clean_all
{name}:
\t$(MAKE) --no-print-directory -f Makefile sim \\
\t\tSIM_BUILD=sim_build_{name} \\
\t\tCOCOTB_TOPLEVEL={name} \\
\t\tCOCOTB_TEST_MODULES=test_{name} \\
\t\tEXTRA_ARGS="--trace --trace-fst --top-module {name}"

all: {name}

clean_all:
\trm -rf sim_build_{name} dump.fst results.xml
"""
    makefile_path.write_text(content, encoding="utf-8")
    return makefile_path


def write_gitignore(sim_dir: Path) -> Path:
    gitignore_path = sim_dir / ".gitignore"
    content = """__pycache__/
sim_build_*/
sim_build/
results.xml
dump.fst
"""
    gitignore_path.write_text(content, encoding="utf-8")
    return gitignore_path


def write_testbench(sim_dir: Path, name: str) -> Path:
    tb_path = sim_dir / f"test_{name}.py"

    content = f"""
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
            f"Trial  mismatch\n"
            f"A=\n"
            f"Expected: ___=\n"
            f"Got:      ___="
        )
"""
    tb_path.write_text(content, encoding="utf-8")
    return tb_path


def write_rtl(rtl_dir: Path, name: str) -> Path:
    rtl_dir.mkdir(parents=True, exist_ok=True)
    rtl_path = rtl_dir / f"{name}.sv"

    content = f"""module {name} (
    input logic a,
    output logic y
);
    assign y = a;
endmodule : {name}
"""
    rtl_path.write_text(content, encoding="utf-8")
    return rtl_path


def create_project(name: str):
    base_dir = Path.cwd()  # current directory (logicode)
    project_dir = base_dir / name
    rtl_dir = project_dir / "rtl"
    sim_dir = project_dir / "sim"

    write_rtl(rtl_dir, name)
    write_makefile(sim_dir, name)
    write_testbench(sim_dir, name)
    write_gitignore(sim_dir)

    print(f"\nCreated project: {project_dir}")
    print(f"Next step:")
    print(f"cd {name}/sim")
    print("make")


def main():
    if len(sys.argv) != 2:
        print("Usage: python new_project.py <project_name>")
        sys.exit(1)

    name = sys.argv[1]
    create_project(name)


if __name__ == "__main__":
    main()
