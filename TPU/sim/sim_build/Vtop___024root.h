// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(mem_ren,0,0);
        VL_IN8(mem_rdata,7,0);
        VL_IN8(mem_rvalid,0,0);
        VL_OUT8(mem_wdata,7,0);
        VL_OUT8(mem_wen,0,0);
        VL_OUT8(commit_en,0,0);
        CData/*0:0*/ tpu__DOT__clk;
        CData/*0:0*/ tpu__DOT__rst;
        CData/*0:0*/ tpu__DOT__mem_ren;
        CData/*7:0*/ tpu__DOT__mem_rdata;
        CData/*0:0*/ tpu__DOT__mem_rvalid;
        CData/*7:0*/ tpu__DOT__mem_wdata;
        CData/*0:0*/ tpu__DOT__mem_wen;
        CData/*0:0*/ tpu__DOT__commit_en;
        CData/*3:0*/ tpu__DOT__state;
        CData/*3:0*/ tpu__DOT__state_next;
        CData/*0:0*/ tpu__DOT__meta_mem_wen;
        CData/*2:0*/ tpu__DOT__meta_mem_waddr;
        CData/*0:0*/ tpu__DOT__meta_mem_ren;
        CData/*2:0*/ tpu__DOT__meta_mem_raddr;
        CData/*2:0*/ tpu__DOT__load_spad_reg;
        CData/*7:0*/ tpu__DOT__load_rows_reg;
        CData/*7:0*/ tpu__DOT__load_cols_reg;
        CData/*7:0*/ tpu__DOT__load_data_reg;
        CData/*0:0*/ tpu__DOT__spad_wen;
        CData/*2:0*/ tpu__DOT__spad_wspad;
        CData/*7:0*/ tpu__DOT__spad_waddr;
        CData/*7:0*/ tpu__DOT__spad_wdata;
        CData/*0:0*/ tpu__DOT__spad_ren;
        CData/*2:0*/ tpu__DOT__spad_rspad;
        CData/*7:0*/ tpu__DOT__spad_raddr;
        CData/*7:0*/ tpu__DOT__spad_rdata;
        CData/*0:0*/ tpu__DOT__metadata_regs_i__DOT__clk;
        CData/*0:0*/ tpu__DOT__metadata_regs_i__DOT__rst;
        CData/*0:0*/ tpu__DOT__metadata_regs_i__DOT__meta_mem_ren;
        CData/*2:0*/ tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr;
        CData/*0:0*/ tpu__DOT__metadata_regs_i__DOT__meta_mem_wen;
        CData/*2:0*/ tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr;
        CData/*0:0*/ tpu__DOT__sp_i__DOT__clk;
        CData/*0:0*/ tpu__DOT__sp_i__DOT__rst;
        CData/*0:0*/ tpu__DOT__sp_i__DOT__spad_wen;
        CData/*2:0*/ tpu__DOT__sp_i__DOT__spad_wspad;
        CData/*7:0*/ tpu__DOT__sp_i__DOT__spad_waddr;
        CData/*7:0*/ tpu__DOT__sp_i__DOT__spad_wdata;
        CData/*0:0*/ tpu__DOT__sp_i__DOT__spad_ren;
        CData/*2:0*/ tpu__DOT__sp_i__DOT__spad_rspad;
        CData/*7:0*/ tpu__DOT__sp_i__DOT__spad_raddr;
        CData/*7:0*/ tpu__DOT__sp_i__DOT__spad_rdata;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tpu__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tpu__DOT__metadata_regs_i__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tpu__DOT__sp_i__DOT__clk__0;
        SData/*15:0*/ tpu__DOT__load_total_reg;
        SData/*15:0*/ tpu__DOT__load_idx_reg;
        VL_OUT(mem_raddr,31,0);
        VL_OUT(mem_waddr,31,0);
        IData/*31:0*/ tpu__DOT__mem_raddr;
        IData/*31:0*/ tpu__DOT__mem_waddr;
        IData/*31:0*/ tpu__DOT__load_ptr_reg;
        IData/*31:0*/ tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i;
    };
    struct {
        IData/*31:0*/ tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(instruction,63,0);
        QData/*63:0*/ tpu__DOT__instruction;
        QData/*48:0*/ tpu__DOT__meta_mem_wdata;
        QData/*48:0*/ tpu__DOT__meta_mem_rdata;
        QData/*48:0*/ tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata;
        QData/*48:0*/ tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata;
        VlUnpacked<QData/*48:0*/, 8> tpu__DOT__metadata_regs_i__DOT__meta_mem;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 256>, 8> tpu__DOT__sp_i__DOT__spad_mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<QData/*48:0*/, 8>, false, QData/*48:0*/, 1> __VdlyCommitQueuetpu__DOT__metadata_regs_i__DOT__meta_mem;
    VlNBACommitQueue<VlUnpacked<VlUnpacked<CData/*7:0*/, 256>, 8>, false, CData/*7:0*/, 2> __VdlyCommitQueuetpu__DOT__sp_i__DOT__spad_mem;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*4:0*/ tpu__DOT__OPCODE_CONFIG = 0x11U;
    static constexpr CData/*4:0*/ tpu__DOT__OPCODE_LOAD = 7U;
    static constexpr CData/*4:0*/ tpu__DOT__OPCODE_STORE = 6U;
    static constexpr CData/*4:0*/ tpu__DOT__OPCODE_GEMM = 0x1fU;
    static constexpr IData/*31:0*/ tpu__DOT__NUM_SPADS = 8U;
    static constexpr IData/*31:0*/ tpu__DOT__SPAD_DEPTH = 0x00000100U;
    static constexpr IData/*31:0*/ tpu__DOT__IDLE = 0U;
    static constexpr IData/*31:0*/ tpu__DOT__CONFIGURE = 1U;
    static constexpr IData/*31:0*/ tpu__DOT__LOAD_META_REQ = 2U;
    static constexpr IData/*31:0*/ tpu__DOT__LOAD_META_WAIT = 3U;
    static constexpr IData/*31:0*/ tpu__DOT__LOAD_READ_REQ = 4U;
    static constexpr IData/*31:0*/ tpu__DOT__LOAD_READ_WAIT = 5U;
    static constexpr IData/*31:0*/ tpu__DOT__LOAD_WRITE = 6U;
    static constexpr IData/*31:0*/ tpu__DOT__STORE_READ_SPAD = 7U;
    static constexpr IData/*31:0*/ tpu__DOT__STORE_MEM_WRITE = 8U;
    static constexpr IData/*31:0*/ tpu__DOT__GEMM_PREP = 9U;
    static constexpr IData/*31:0*/ tpu__DOT__GEMM_RUN = 0x0000000aU;
    static constexpr IData/*31:0*/ tpu__DOT__GEMM_WAIT_DONE = 0x0000000bU;
    static constexpr IData/*31:0*/ tpu__DOT__COMMIT = 0x0000000cU;
    static constexpr IData/*31:0*/ tpu__DOT__metadata_regs_i__DOT__NUM_SPADS = 8U;
    static constexpr IData/*31:0*/ tpu__DOT__sp_i__DOT__NUM_SPADS = 8U;
    static constexpr IData/*31:0*/ tpu__DOT__sp_i__DOT__SPAD_DEPTH = 0x00000100U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
