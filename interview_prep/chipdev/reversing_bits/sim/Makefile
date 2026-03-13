SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/reversing_bits.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: reversing_bits all clean_all
reversing_bits:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_reversing_bits \
		COCOTB_TOPLEVEL=reversing_bits \
		COCOTB_TEST_MODULES=test_reversing_bits \
		EXTRA_ARGS="--trace --trace-fst --top-module reversing_bits"

all: reversing_bits

clean_all:
	rm -rf sim_build_reversing_bits dump.fst results.xml
