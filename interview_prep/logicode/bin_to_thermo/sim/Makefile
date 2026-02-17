SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/bin_to_thermo.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: bin_to_thermo all clean_all
bin_to_thermo:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_bin_to_thermo \
		COCOTB_TOPLEVEL=bin_to_thermo \
		COCOTB_TEST_MODULES=test_bin_to_thermo \
		EXTRA_ARGS="--trace --trace-fst --top-module bin_to_thermo"

all: bin_to_thermo

clean_all:
	rm -rf sim_build_bin_to_thermo dump.fst results.xml
