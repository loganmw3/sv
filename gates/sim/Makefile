SIM = verilator
TOPLEVEL_LANG = verilog

# Compile all RTL sources (so any top can be used)
VERILOG_SOURCES = \
  $(PWD)/../rtl/or_gate.sv \
  $(PWD)/../rtl/and_gate.sv \
  $(PWD)/../rtl/xor_gate.sv \
  $(PWD)/../rtl/not_gate.sv \
  $(PWD)/../rtl/nand_gate.sv \
  $(PWD)/../rtl/nor_gate.sv \
  $(PWD)/../rtl/xnor_gate.sv 

# Default tracing flags (we'll override trace file per target)
EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: or and xor not nand nor xnor all clean_all
or:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_or \
		COCOTB_TOPLEVEL=or_gate \
		COCOTB_TEST_MODULES=test_gates \
		COCOTB_TEST_FILTER=test_or_gate \
		EXTRA_ARGS="--trace --trace-fst --top-module or_gate"

and:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_and \
		COCOTB_TOPLEVEL=and_gate \
		COCOTB_TEST_MODULES=test_gates \
		COCOTB_TEST_FILTER=test_and_gate \
		EXTRA_ARGS="--trace --trace-fst --top-module and_gate"

xor:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_xor \
		COCOTB_TOPLEVEL=xor_gate \
		COCOTB_TEST_MODULES=test_gates \
		COCOTB_TEST_FILTER=test_xor_gate \
		EXTRA_ARGS="--trace --trace-fst --top-module xor_gate"

not:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_not \
		COCOTB_TOPLEVEL=not_gate \
		COCOTB_TEST_MODULES=test_gates \
		COCOTB_TEST_FILTER=test_not_gate \
		EXTRA_ARGS="--trace --trace-fst --top-module not_gate"

nand:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_nand \
		COCOTB_TOPLEVEL=nand_gate \
		COCOTB_TEST_MODULES=test_gates \
		COCOTB_TEST_FILTER=test_nand_gate \
		EXTRA_ARGS="--trace --trace-fst --top-module nand_gate"

nor:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_nor \
		COCOTB_TOPLEVEL=nor_gate \
		COCOTB_TEST_MODULES=test_gates \
		COCOTB_TEST_FILTER=test_nor_gate \
		EXTRA_ARGS="--trace --trace-fst --top-module nor_gate"

xnor:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_xnor \
		COCOTB_TOPLEVEL=xnor_gate \
		COCOTB_TEST_MODULES=test_gates \
		COCOTB_TEST_FILTER=test_xnor_gate \
		EXTRA_ARGS="--trace --trace-fst --top-module xnor_gate"


all: or and xor not nand nor xnor

clean_all:
	rm -rf sim_build_or sim_build_and sim_build_xor sim_build_not sim_build_nand sim_build_nor sim_build_xnor results.xml dump.fst 
