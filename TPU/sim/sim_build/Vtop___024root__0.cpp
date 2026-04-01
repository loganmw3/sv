// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_wen = vlSelfRef.tpu__DOT__mem_wen;
    vlSelfRef.mem_waddr = vlSelfRef.tpu__DOT__mem_waddr;
    vlSelfRef.mem_wdata = vlSelfRef.tpu__DOT__mem_wdata;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_ren = vlSelfRef.tpu__DOT__spad_ren;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_rspad = vlSelfRef.tpu__DOT__spad_rspad;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_raddr = vlSelfRef.tpu__DOT__spad_raddr;
    vlSelfRef.tpu__DOT__mem_rdata = vlSelfRef.mem_rdata;
    vlSelfRef.tpu__DOT__meta_mem_rdata = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata;
    vlSelfRef.tpu__DOT__spad_rdata = vlSelfRef.tpu__DOT__sp_i__DOT__spad_rdata;
    vlSelfRef.tpu__DOT__commit_en = 0U;
    vlSelfRef.tpu__DOT__mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_wen = 0U;
    vlSelfRef.tpu__DOT__spad_wen = 0U;
    vlSelfRef.tpu__DOT__spad_wspad = 0U;
    vlSelfRef.tpu__DOT__spad_waddr = 0U;
    vlSelfRef.tpu__DOT__spad_wdata = 0U;
    vlSelfRef.tpu__DOT__mem_raddr = 0U;
    vlSelfRef.tpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tpu__DOT__rst = vlSelfRef.rst;
    vlSelfRef.tpu__DOT__mem_rvalid = vlSelfRef.mem_rvalid;
    vlSelfRef.tpu__DOT__instruction = vlSelfRef.instruction;
    if (((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
               | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
            | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
           | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
          | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state)))) {
        if ((0U != (IData)(vlSelfRef.tpu__DOT__state))) {
            if ((1U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((2U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                if ((6U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__commit_en = 1U;
                                }
                            }
                        }
                        if ((4U == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__mem_ren = 1U;
                        }
                    }
                }
                vlSelfRef.commit_en = vlSelfRef.tpu__DOT__commit_en;
                vlSelfRef.mem_ren = vlSelfRef.tpu__DOT__mem_ren;
                if ((2U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                }
            } else {
                vlSelfRef.commit_en = vlSelfRef.tpu__DOT__commit_en;
                vlSelfRef.mem_ren = vlSelfRef.tpu__DOT__mem_ren;
            }
            vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren 
                = vlSelfRef.tpu__DOT__meta_mem_ren;
            if ((1U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__meta_mem_wen = 1U;
            }
            vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen 
                = vlSelfRef.tpu__DOT__meta_mem_wen;
            if ((1U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((2U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                if ((6U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__spad_wen = 1U;
                                    vlSelfRef.tpu__DOT__spad_wspad 
                                        = vlSelfRef.tpu__DOT__load_spad_reg;
                                    vlSelfRef.tpu__DOT__spad_waddr 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                                    vlSelfRef.tpu__DOT__spad_wdata 
                                        = vlSelfRef.tpu__DOT__load_data_reg;
                                }
                            }
                        }
                        if ((4U == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__mem_raddr 
                                = (vlSelfRef.tpu__DOT__load_ptr_reg 
                                   + (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                        }
                    }
                }
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen 
                    = vlSelfRef.tpu__DOT__spad_wen;
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad 
                    = vlSelfRef.tpu__DOT__spad_wspad;
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr 
                    = vlSelfRef.tpu__DOT__spad_waddr;
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata 
                    = vlSelfRef.tpu__DOT__spad_wdata;
                vlSelfRef.mem_raddr = vlSelfRef.tpu__DOT__mem_raddr;
                vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk 
                    = vlSelfRef.tpu__DOT__clk;
                vlSelfRef.tpu__DOT__sp_i__DOT__clk 
                    = vlSelfRef.tpu__DOT__clk;
                vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst 
                    = vlSelfRef.tpu__DOT__rst;
                vlSelfRef.tpu__DOT__sp_i__DOT__rst 
                    = vlSelfRef.tpu__DOT__rst;
                vlSelfRef.tpu__DOT__state_next = vlSelfRef.tpu__DOT__state;
                vlSelfRef.tpu__DOT__meta_mem_raddr = 0U;
                if ((2U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__meta_mem_raddr 
                        = (7U & (IData)((vlSelfRef.tpu__DOT__instruction 
                                         >> 0x38U)));
                }
            } else {
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen 
                    = vlSelfRef.tpu__DOT__spad_wen;
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad 
                    = vlSelfRef.tpu__DOT__spad_wspad;
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr 
                    = vlSelfRef.tpu__DOT__spad_waddr;
                vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata 
                    = vlSelfRef.tpu__DOT__spad_wdata;
                vlSelfRef.mem_raddr = vlSelfRef.tpu__DOT__mem_raddr;
                vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk 
                    = vlSelfRef.tpu__DOT__clk;
                vlSelfRef.tpu__DOT__sp_i__DOT__clk 
                    = vlSelfRef.tpu__DOT__clk;
                vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst 
                    = vlSelfRef.tpu__DOT__rst;
                vlSelfRef.tpu__DOT__sp_i__DOT__rst 
                    = vlSelfRef.tpu__DOT__rst;
                vlSelfRef.tpu__DOT__state_next = vlSelfRef.tpu__DOT__state;
                vlSelfRef.tpu__DOT__meta_mem_raddr = 0U;
            }
            vlSelfRef.tpu__DOT__meta_mem_waddr = 0U;
            vlSelfRef.tpu__DOT__meta_mem_wdata = 0ULL;
            if ((1U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__meta_mem_waddr 
                    = (7U & (IData)((vlSelfRef.tpu__DOT__instruction 
                                     >> 0x38U)));
                vlSelfRef.tpu__DOT__meta_mem_wdata 
                    = (1ULL | (((QData)((IData)((0x0000ffffU 
                                                 & (IData)(vlSelfRef.tpu__DOT__instruction)))) 
                                << 0x00000021U) | ((QData)((IData)(
                                                                   (vlSelfRef.tpu__DOT__instruction 
                                                                    >> 0x10U))) 
                                                   << 1U)));
            }
        } else {
            vlSelfRef.commit_en = vlSelfRef.tpu__DOT__commit_en;
            vlSelfRef.mem_ren = vlSelfRef.tpu__DOT__mem_ren;
            vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren 
                = vlSelfRef.tpu__DOT__meta_mem_ren;
            vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen 
                = vlSelfRef.tpu__DOT__meta_mem_wen;
            vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen 
                = vlSelfRef.tpu__DOT__spad_wen;
            vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad 
                = vlSelfRef.tpu__DOT__spad_wspad;
            vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr 
                = vlSelfRef.tpu__DOT__spad_waddr;
            vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata 
                = vlSelfRef.tpu__DOT__spad_wdata;
            vlSelfRef.mem_raddr = vlSelfRef.tpu__DOT__mem_raddr;
            vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk 
                = vlSelfRef.tpu__DOT__clk;
            vlSelfRef.tpu__DOT__sp_i__DOT__clk = vlSelfRef.tpu__DOT__clk;
            vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst 
                = vlSelfRef.tpu__DOT__rst;
            vlSelfRef.tpu__DOT__sp_i__DOT__rst = vlSelfRef.tpu__DOT__rst;
            vlSelfRef.tpu__DOT__state_next = vlSelfRef.tpu__DOT__state;
            vlSelfRef.tpu__DOT__meta_mem_raddr = 0U;
            vlSelfRef.tpu__DOT__meta_mem_waddr = 0U;
            vlSelfRef.tpu__DOT__meta_mem_wdata = 0ULL;
        }
        vlSelfRef.tpu__DOT__state_next = (0x0000000fU 
                                          & ((0U == (IData)(vlSelfRef.tpu__DOT__state))
                                              ? ((0x11U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (IData)(
                                                             (vlSelfRef.tpu__DOT__instruction 
                                                              >> 0x3bU))))
                                                  ? 1U
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tpu__DOT__instruction 
                                                               >> 0x3bU))))
                                                   ? 2U
                                                   : 0U))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.tpu__DOT__state))
                                                  ? 0x0cU
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.tpu__DOT__state))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.tpu__DOT__state))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.tpu__DOT__state))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.tpu__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelfRef.tpu__DOT__mem_rvalid)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.tpu__DOT__state))
                                                       ? 
                                                      (((0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tpu__DOT__load_idx_reg))) 
                                                        >= (IData)(vlSelfRef.tpu__DOT__load_total_reg))
                                                        ? 0x0cU
                                                        : 4U)
                                                       : 0U))))))));
    } else {
        vlSelfRef.commit_en = vlSelfRef.tpu__DOT__commit_en;
        vlSelfRef.mem_ren = vlSelfRef.tpu__DOT__mem_ren;
        vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren 
            = vlSelfRef.tpu__DOT__meta_mem_ren;
        vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen 
            = vlSelfRef.tpu__DOT__meta_mem_wen;
        vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen = vlSelfRef.tpu__DOT__spad_wen;
        vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad = vlSelfRef.tpu__DOT__spad_wspad;
        vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr = vlSelfRef.tpu__DOT__spad_waddr;
        vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata = vlSelfRef.tpu__DOT__spad_wdata;
        vlSelfRef.mem_raddr = vlSelfRef.tpu__DOT__mem_raddr;
        vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk 
            = vlSelfRef.tpu__DOT__clk;
        vlSelfRef.tpu__DOT__sp_i__DOT__clk = vlSelfRef.tpu__DOT__clk;
        vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst 
            = vlSelfRef.tpu__DOT__rst;
        vlSelfRef.tpu__DOT__sp_i__DOT__rst = vlSelfRef.tpu__DOT__rst;
        vlSelfRef.tpu__DOT__state_next = vlSelfRef.tpu__DOT__state;
        vlSelfRef.tpu__DOT__meta_mem_raddr = 0U;
        vlSelfRef.tpu__DOT__meta_mem_waddr = 0U;
        vlSelfRef.tpu__DOT__meta_mem_wdata = 0ULL;
        vlSelfRef.tpu__DOT__state_next = 0U;
    }
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr 
        = vlSelfRef.tpu__DOT__meta_mem_raddr;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr 
        = vlSelfRef.tpu__DOT__meta_mem_waddr;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
        = vlSelfRef.tpu__DOT__meta_mem_wdata;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.tpu__DOT__sp_i__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sp_i__DOT__clk__0))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__metadata_regs_i__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tpu__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__clk__0 
        = vlSelfRef.tpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__metadata_regs_i__DOT__clk__0 
        = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sp_i__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sp_i__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vdly__tpu__DOT__load_idx_reg;
    __Vdly__tpu__DOT__load_idx_reg = 0;
    // Body
    __Vdly__tpu__DOT__load_idx_reg = vlSelfRef.tpu__DOT__load_idx_reg;
    if ((1U & (~ (IData)(vlSelfRef.tpu__DOT__rst)))) {
        if ((3U == (IData)(vlSelfRef.tpu__DOT__state))) {
            vlSelfRef.tpu__DOT__load_spad_reg = (7U 
                                                 & (IData)(
                                                           (vlSelfRef.tpu__DOT__instruction 
                                                            >> 0x38U)));
            vlSelfRef.tpu__DOT__load_ptr_reg = (IData)(
                                                       (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                        >> 1U));
            vlSelfRef.tpu__DOT__load_rows_reg = (0x000000ffU 
                                                 & (IData)(
                                                           (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                            >> 0x00000029U)));
            vlSelfRef.tpu__DOT__load_cols_reg = (0x000000ffU 
                                                 & (IData)(
                                                           (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                            >> 0x00000021U)));
            vlSelfRef.tpu__DOT__load_total_reg = (0x0000ffffU 
                                                  & ((0x000000ffU 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                                 >> 0x00000029U))) 
                                                     * 
                                                     (0x000000ffU 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                                 >> 0x00000021U)))));
            __Vdly__tpu__DOT__load_idx_reg = 0U;
        }
        if (((5U == (IData)(vlSelfRef.tpu__DOT__state)) 
             & (IData)(vlSelfRef.tpu__DOT__mem_rvalid))) {
            vlSelfRef.tpu__DOT__load_data_reg = vlSelfRef.tpu__DOT__mem_rdata;
        }
        if ((6U == (IData)(vlSelfRef.tpu__DOT__state))) {
            __Vdly__tpu__DOT__load_idx_reg = (0x0000ffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tpu__DOT__load_idx_reg)));
        }
    }
    vlSelfRef.tpu__DOT__load_idx_reg = __Vdly__tpu__DOT__load_idx_reg;
    vlSelfRef.tpu__DOT__state = ((IData)(vlSelfRef.tpu__DOT__rst)
                                  ? 0U : (IData)(vlSelfRef.tpu__DOT__state_next));
    vlSelfRef.tpu__DOT__commit_en = 0U;
    vlSelfRef.tpu__DOT__mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_wen = 0U;
    vlSelfRef.tpu__DOT__spad_wen = 0U;
    vlSelfRef.tpu__DOT__state_next = vlSelfRef.tpu__DOT__state;
    vlSelfRef.tpu__DOT__meta_mem_raddr = 0U;
    vlSelfRef.tpu__DOT__meta_mem_waddr = 0U;
    vlSelfRef.tpu__DOT__meta_mem_wdata = 0ULL;
    vlSelfRef.tpu__DOT__spad_wspad = 0U;
    vlSelfRef.tpu__DOT__spad_waddr = 0U;
    vlSelfRef.tpu__DOT__spad_wdata = 0U;
    vlSelfRef.tpu__DOT__mem_raddr = 0U;
    if (((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
               | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
            | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
           | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
          | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state)))) {
        if ((0U != (IData)(vlSelfRef.tpu__DOT__state))) {
            if ((1U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((2U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                if ((6U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__commit_en = 1U;
                                }
                                if ((6U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__spad_wen = 1U;
                                    vlSelfRef.tpu__DOT__spad_wspad 
                                        = vlSelfRef.tpu__DOT__load_spad_reg;
                                    vlSelfRef.tpu__DOT__spad_waddr 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                                    vlSelfRef.tpu__DOT__spad_wdata 
                                        = vlSelfRef.tpu__DOT__load_data_reg;
                                }
                            }
                        }
                        if ((4U == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__mem_ren = 1U;
                            vlSelfRef.tpu__DOT__mem_raddr 
                                = (vlSelfRef.tpu__DOT__load_ptr_reg 
                                   + (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                        }
                    }
                }
                if ((2U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                    vlSelfRef.tpu__DOT__meta_mem_raddr 
                        = (7U & (IData)((vlSelfRef.tpu__DOT__instruction 
                                         >> 0x38U)));
                }
            }
            if ((1U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__meta_mem_wen = 1U;
                vlSelfRef.tpu__DOT__meta_mem_waddr 
                    = (7U & (IData)((vlSelfRef.tpu__DOT__instruction 
                                     >> 0x38U)));
                vlSelfRef.tpu__DOT__meta_mem_wdata 
                    = (1ULL | (((QData)((IData)((0x0000ffffU 
                                                 & (IData)(vlSelfRef.tpu__DOT__instruction)))) 
                                << 0x00000021U) | ((QData)((IData)(
                                                                   (vlSelfRef.tpu__DOT__instruction 
                                                                    >> 0x10U))) 
                                                   << 1U)));
            }
        }
        vlSelfRef.tpu__DOT__state_next = (0x0000000fU 
                                          & ((0U == (IData)(vlSelfRef.tpu__DOT__state))
                                              ? ((0x11U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (IData)(
                                                             (vlSelfRef.tpu__DOT__instruction 
                                                              >> 0x3bU))))
                                                  ? 1U
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tpu__DOT__instruction 
                                                               >> 0x3bU))))
                                                   ? 2U
                                                   : 0U))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.tpu__DOT__state))
                                                  ? 0x0cU
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.tpu__DOT__state))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.tpu__DOT__state))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.tpu__DOT__state))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.tpu__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelfRef.tpu__DOT__mem_rvalid)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.tpu__DOT__state))
                                                       ? 
                                                      (((0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tpu__DOT__load_idx_reg))) 
                                                        >= (IData)(vlSelfRef.tpu__DOT__load_total_reg))
                                                        ? 0x0cU
                                                        : 4U)
                                                       : 0U))))))));
    } else {
        vlSelfRef.tpu__DOT__state_next = 0U;
    }
    vlSelfRef.commit_en = vlSelfRef.tpu__DOT__commit_en;
    vlSelfRef.mem_ren = vlSelfRef.tpu__DOT__mem_ren;
    vlSelfRef.mem_raddr = vlSelfRef.tpu__DOT__mem_raddr;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v0;
    __VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v0 = 0;
    QData/*48:0*/ __VdlyVal__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1;
    __VdlyVal__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1 = 0;
    CData/*2:0*/ __VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1;
    __VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1 = 0;
    // Body
    if (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst) {
        vlSelfRef.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v0 
                = (7U & vlSelfRef.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuetpu__DOT__metadata_regs_i__DOT__meta_mem.enqueue(0ULL, (IData)(__VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v0));
            vlSelfRef.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i);
        }
    } else if (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen) {
        __VdlyVal__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1 
            = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata;
        __VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1 
            = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr;
        vlSelfRef.__VdlyCommitQueuetpu__DOT__metadata_regs_i__DOT__meta_mem.enqueue(__VdlyVal__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1, (IData)(__VdlyDim0__tpu__DOT__metadata_regs_i__DOT__meta_mem__v1));
    }
    if (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst) {
        vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata = 0ULL;
    } else if (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren) {
        vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata 
            = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
            [vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr];
    }
    vlSelfRef.__VdlyCommitQueuetpu__DOT__metadata_regs_i__DOT__meta_mem.commit(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem);
    vlSelfRef.tpu__DOT__meta_mem_rdata = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v0;
    __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v0;
    __VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tpu__DOT__sp_i__DOT__spad_mem__v1;
    __VdlyVal__tpu__DOT__sp_i__DOT__spad_mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v1;
    __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v1;
    __VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v1 = 0;
    // Body
    if (vlSelfRef.tpu__DOT__sp_i__DOT__rst) {
        vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0U;
            while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j)) {
                __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v0 
                    = (0x000000ffU & vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j);
                __VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v0 
                    = (7U & vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuetpu__DOT__sp_i__DOT__spad_mem.enqueue(0U, (IData)(__VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v0), __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v0);
                vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j 
                    = ((IData)(1U) + vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j);
            }
            vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i);
        }
    } else if (vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen) {
        __VdlyVal__tpu__DOT__sp_i__DOT__spad_mem__v1 
            = vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata;
        __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v1 
            = vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr;
        __VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v1 
            = vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad;
        vlSelfRef.__VdlyCommitQueuetpu__DOT__sp_i__DOT__spad_mem.enqueue(__VdlyVal__tpu__DOT__sp_i__DOT__spad_mem__v1, (IData)(__VdlyDim1__tpu__DOT__sp_i__DOT__spad_mem__v1), __VdlyDim0__tpu__DOT__sp_i__DOT__spad_mem__v1);
    }
    if (vlSelfRef.tpu__DOT__sp_i__DOT__rst) {
        vlSelfRef.tpu__DOT__sp_i__DOT__spad_rdata = 0U;
    } else if (vlSelfRef.tpu__DOT__sp_i__DOT__spad_ren) {
        vlSelfRef.tpu__DOT__sp_i__DOT__spad_rdata = 
            vlSelfRef.tpu__DOT__sp_i__DOT__spad_mem
            [vlSelfRef.tpu__DOT__sp_i__DOT__spad_rspad]
            [vlSelfRef.tpu__DOT__sp_i__DOT__spad_raddr];
    }
    vlSelfRef.__VdlyCommitQueuetpu__DOT__sp_i__DOT__spad_mem.commit(vlSelfRef.tpu__DOT__sp_i__DOT__spad_mem);
    vlSelfRef.tpu__DOT__spad_rdata = vlSelfRef.tpu__DOT__sp_i__DOT__spad_rdata;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen 
        = vlSelfRef.tpu__DOT__meta_mem_wen;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
        = vlSelfRef.tpu__DOT__meta_mem_wdata;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr 
        = vlSelfRef.tpu__DOT__meta_mem_waddr;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren 
        = vlSelfRef.tpu__DOT__meta_mem_ren;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr 
        = vlSelfRef.tpu__DOT__meta_mem_raddr;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen = vlSelfRef.tpu__DOT__spad_wen;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata = vlSelfRef.tpu__DOT__spad_wdata;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr = vlSelfRef.tpu__DOT__spad_waddr;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad = vlSelfRef.tpu__DOT__spad_wspad;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/loganwonnacott/Desktop/sv/TPU/hdl/tpu.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/loganwonnacott/Desktop/sv/TPU/hdl/tpu.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/loganwonnacott/Desktop/sv/TPU/hdl/tpu.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_rvalid & 0xfeU)))) {
        Verilated::overWidthError("mem_rvalid");
    }
}
#endif  // VL_DEBUG
