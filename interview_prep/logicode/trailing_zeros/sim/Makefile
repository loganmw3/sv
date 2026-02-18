SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/trailing_zeros.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: trailing_zeros all clean_all
trailing_zeros:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_trailing_zeros \
		COCOTB_TOPLEVEL=trailing_zeros \
		COCOTB_TEST_MODULES=test_trailing_zeros \
		EXTRA_ARGS="--trace --trace-fst --top-module trailing_zeros"

all: trailing_zeros

clean_all:
	rm -rf sim_build_trailing_zeros dump.fst results.xml
