SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/second_largest.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: second_largest all clean_all
second_largest:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_second_largest \
		COCOTB_TOPLEVEL=second_largest \
		COCOTB_TEST_MODULES=test_second_largest \
		EXTRA_ARGS="--trace --trace-fst --top-module second_largest"

all: second_largest

clean_all:
	rm -rf sim_build_second_largest dump.fst results.xml
