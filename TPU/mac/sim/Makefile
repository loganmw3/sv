SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/mac.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: mac all clean_all
mac:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_mac \
		COCOTB_TOPLEVEL=mac \
		COCOTB_TEST_MODULES=test_mac \
		EXTRA_ARGS="--trace --trace-fst --top-module mac"

all: mac

clean_all:
	rm -rf sim_build_mac dump.fst results.xml
