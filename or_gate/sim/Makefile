TOPLEVEL_LANG = verilog

SIM = verilator

VERILOG_SOURCES = \
  $(PWD)/../rtl/or_gate.sv \
  $(PWD)/../rtl/and_gate.sv

EXTRA_ARGS += --trace --trace-fst

include $(shell cocotb-config --makefiles)/Makefile.sim
