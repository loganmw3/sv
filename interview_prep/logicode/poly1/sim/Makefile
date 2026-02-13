SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/polynomial_1.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: polynomial_1, all, clean_all
polynomial_1:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_polynomial_1 \
		COCOTB_TOPLEVEL=polynomial_1 \
		COCOTB_TEST_MODULES=test_polynomial_1 \
		EXTRA_ARGS="--trace --trace-fst --top-module polynomial_1"

all: polynomial_1

clean_all:
	rm -rf sim_build_polynomial_1 dump.fst