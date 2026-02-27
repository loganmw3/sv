SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += \
  $(PWD)/../rtl/mac.sv \
  $(PWD)/../rtl/systolic_array.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: systolic_array run clean_all
systolic_array:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_systolic_array \
		COCOTB_TOPLEVEL=systolic_array \
		COCOTB_TEST_MODULES=test_systolic_array \
		EXTRA_ARGS="--trace --trace-fst --top-module systolic_array"

run: systolic_array

clean_all:
	rm -rf sim_build_systolic_array dump.fst results.xml
