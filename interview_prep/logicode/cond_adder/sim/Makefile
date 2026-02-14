SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/cond_adder.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: cond_adder all clean_all
cond_adder:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_cond_adder \
		COCOTB_TOPLEVEL=cond_adder \
		COCOTB_TEST_MODULES=test_cond_adder \
		EXTRA_ARGS="--trace --trace-fst --top-module cond_adder"

all: cond_adder

clean_all:
	rm -rf sim_build_cond_adder dump.fst results.xml
