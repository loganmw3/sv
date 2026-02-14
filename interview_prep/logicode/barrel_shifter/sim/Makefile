SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/barrel_shifter.sv # Replace barrel_shifter

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: barrel_shifter, all, clean_all
barrel_shifter:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_barrel_shifter \
		COCOTB_TOPLEVEL=barrel_shifter \
		COCOTB_TEST_MODULES=test_barrel_shifter \
		EXTRA_ARGS="--trace --trace-fst --top-module barrel_shifter"

all: barrel_shifter

clean_all:
	rm -rf sim_build_barrel_shifter dump.fst results.xml
