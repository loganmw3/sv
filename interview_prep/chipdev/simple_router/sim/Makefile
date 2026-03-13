SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/simple_router.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: simple_router all clean_all
simple_router:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_simple_router \
		COCOTB_TOPLEVEL=simple_router \
		COCOTB_TEST_MODULES=test_simple_router \
		EXTRA_ARGS="--trace --trace-fst --top-module simple_router"

all: simple_router

clean_all:
	rm -rf sim_build_simple_router dump.fst results.xml
