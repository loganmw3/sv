SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/mod_exp.sv # Replace mod_exp

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: mod_exp, all, clean_all
mod_exp:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_mod_exp \
		COCOTB_TOPLEVEL=mod_exp \
		COCOTB_TEST_MODULES=test_mod_exp \
		EXTRA_ARGS="--trace --trace-fst --top-module mod_exp"

all: mod_exp

clean_all:
	rm -rf sim_build_mod_exp dump.fst results.xml
