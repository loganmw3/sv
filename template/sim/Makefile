SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/example.sv # Replace example

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: example, all, clean_all
example:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_example \
		COCOTB_TOPLEVEL=example \
		COCOTB_TEST_MODULES=test_example \
		EXTRA_ARGS="--trace --trace-fst --top-module example"

all: example

clean_all:
	rm -rf sim_build_example dump.fst results.xml
