SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/one_hot.sv # Replace one_hot

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: one_hot all clean_all
one_hot:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_one_hot \
		COCOTB_TOPLEVEL=one_hot \
		COCOTB_TEST_MODULES=test_one_hot \
		EXTRA_ARGS="--trace --trace-fst --top-module one_hot"

all: one_hot

clean_all:
	rm -rf sim_build_one_hot dump.fst results.xml