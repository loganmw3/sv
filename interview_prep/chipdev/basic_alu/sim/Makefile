SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/basic_alu.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: basic_alu all clean_all
basic_alu:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_basic_alu \
		COCOTB_TOPLEVEL=basic_alu \
		COCOTB_TEST_MODULES=test_basic_alu \
		EXTRA_ARGS="--trace --trace-fst --top-module basic_alu"

all: basic_alu

clean_all:
	rm -rf sim_build_basic_alu dump.fst results.xml
