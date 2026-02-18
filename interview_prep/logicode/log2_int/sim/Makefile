SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/log2_int.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: log2_int all clean_all
log2_int:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_log2_int \
		COCOTB_TOPLEVEL=log2_int \
		COCOTB_TEST_MODULES=test_log2_int \
		EXTRA_ARGS="--trace --trace-fst --top-module log2_int"

all: log2_int

clean_all:
	rm -rf sim_build_log2_int dump.fst results.xml
