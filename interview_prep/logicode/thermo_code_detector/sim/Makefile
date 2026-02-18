SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/thermo_code_detector.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: thermo_code_detector all clean_all
thermo_code_detector:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_thermo_code_detector \
		COCOTB_TOPLEVEL=thermo_code_detector \
		COCOTB_TEST_MODULES=test_thermo_code_detector \
		EXTRA_ARGS="--trace --trace-fst --top-module thermo_code_detector"

all: thermo_code_detector

clean_all:
	rm -rf sim_build_thermo_code_detector dump.fst results.xml
