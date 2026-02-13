SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/alu.sv # Replace alu

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: alu, all, clean_all
alu:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_alu \
		COCOTB_TOPLEVEL=alu \
		COCOTB_TEST_MODULES=test_alu \
		EXTRA_ARGS="--trace --trace-fst --top-module alu"

all: alu

clean_all:
	rm -rf sim_build_alu dump.fst