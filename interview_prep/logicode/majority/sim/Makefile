SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/majority.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: majority all clean_all
majority:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_majority \
		COCOTB_TOPLEVEL=majority \
		COCOTB_TEST_MODULES=test_majority \
		EXTRA_ARGS="--trace --trace-fst --top-module majority"

all: majority

clean_all:
	rm -rf sim_build_majority dump.fst results.xml
