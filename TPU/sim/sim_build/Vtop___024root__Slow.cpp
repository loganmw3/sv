// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*4:0*/ Vtop___024root::tpu__DOT__OPCODE_CONFIG;
constexpr CData/*4:0*/ Vtop___024root::tpu__DOT__OPCODE_LOAD;
constexpr CData/*4:0*/ Vtop___024root::tpu__DOT__OPCODE_STORE;
constexpr CData/*4:0*/ Vtop___024root::tpu__DOT__OPCODE_GEMM;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__NUM_SPADS;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__SPAD_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__IDLE;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__CONFIGURE;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__LOAD_META_REQ;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__LOAD_META_WAIT;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__LOAD_READ_REQ;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__LOAD_READ_WAIT;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__LOAD_WRITE;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__STORE_READ_SPAD;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__STORE_MEM_WRITE;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__GEMM_PREP;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__GEMM_RUN;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__GEMM_WAIT_DONE;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__COMMIT;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__metadata_regs_i__DOT__NUM_SPADS;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__sp_i__DOT__NUM_SPADS;
constexpr IData/*31:0*/ Vtop___024root::tpu__DOT__sp_i__DOT__SPAD_DEPTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
