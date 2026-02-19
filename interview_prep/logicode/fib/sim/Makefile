SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/fib.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: fib all clean_all
fib:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_fib \
		COCOTB_TOPLEVEL=fib \
		COCOTB_TEST_MODULES=test_fib \
		EXTRA_ARGS="--trace --trace-fst --top-module fib"

all: fib

clean_all:
	rm -rf sim_build_fib dump.fst results.xml
