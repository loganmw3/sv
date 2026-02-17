SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/counting_ones.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: counting_ones all clean_all
counting_ones:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_counting_ones \
		COCOTB_TOPLEVEL=counting_ones \
		COCOTB_TEST_MODULES=test_counting_ones \
		EXTRA_ARGS="--trace --trace-fst --top-module counting_ones"

all: counting_ones

clean_all:
	rm -rf sim_build_counting_ones dump.fst results.xml
