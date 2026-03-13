SIM = verilator
TOPLEVEL_LANG = verilog

VERILOG_SOURCES += $(PWD)/../rtl/bubble_sort.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: bubble_sort all clean_all
bubble_sort:
	$(MAKE) --no-print-directory -f Makefile sim \
		SIM_BUILD=sim_build_bubble_sort \
		COCOTB_TOPLEVEL=bubble_sort \
		COCOTB_TEST_MODULES=test_bubble_sort \
		EXTRA_ARGS="--trace --trace-fst --top-module bubble_sort"

all: bubble_sort

clean_all:
	rm -rf sim_build_bubble_sort dump.fst results.xml
