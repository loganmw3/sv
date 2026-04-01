// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__clk__0 
        = vlSelfRef.tpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__metadata_regs_i__DOT__clk__0 
        = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sp_i__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sp_i__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tpu__DOT__mem_wen = 0U;
    vlSelfRef.tpu__DOT__mem_waddr = 0U;
    vlSelfRef.tpu__DOT__mem_wdata = 0U;
    vlSelfRef.tpu__DOT__spad_ren = 0U;
    vlSelfRef.tpu__DOT__spad_rspad = 0U;
    vlSelfRef.tpu__DOT__spad_raddr = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/loganwonnacott/Desktop/sv/TPU/hdl/tpu.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tpu.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tpu.metadata_regs_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tpu.sp_i.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->instruction = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8876431511369994264ull);
    vlSelf->mem_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11368542240243326705ull);
    vlSelf->mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8759674792306358751ull);
    vlSelf->mem_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9659133473039683418ull);
    vlSelf->mem_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6882882815857819926ull);
    vlSelf->mem_waddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1127770797588225910ull);
    vlSelf->mem_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5431754401481461448ull);
    vlSelf->mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15152439719125524151ull);
    vlSelf->commit_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691130338867066890ull);
    vlSelf->tpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5556689233145844101ull);
    vlSelf->tpu__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8847160965844132434ull);
    vlSelf->tpu__DOT__instruction = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16264520031064996738ull);
    vlSelf->tpu__DOT__mem_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16522249968437869864ull);
    vlSelf->tpu__DOT__mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5472778617224433782ull);
    vlSelf->tpu__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15786920773385964088ull);
    vlSelf->tpu__DOT__mem_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14996408720880027259ull);
    vlSelf->tpu__DOT__mem_waddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17278845469118262384ull);
    vlSelf->tpu__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7794365528506428092ull);
    vlSelf->tpu__DOT__mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12843751387219746021ull);
    vlSelf->tpu__DOT__commit_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7789613575476586118ull);
    vlSelf->tpu__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1507403051886464593ull);
    vlSelf->tpu__DOT__state_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14100778760120097598ull);
    vlSelf->tpu__DOT__meta_mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12150625005128713837ull);
    vlSelf->tpu__DOT__meta_mem_waddr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12395358294429746839ull);
    vlSelf->tpu__DOT__meta_mem_wdata = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11363355442716145711ull);
    vlSelf->tpu__DOT__meta_mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10008642795210005369ull);
    vlSelf->tpu__DOT__meta_mem_raddr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14804453557358971668ull);
    vlSelf->tpu__DOT__meta_mem_rdata = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14483629557855391170ull);
    vlSelf->tpu__DOT__load_spad_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16676245937442525441ull);
    vlSelf->tpu__DOT__load_ptr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8639017980173891693ull);
    vlSelf->tpu__DOT__load_rows_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11461102250410272791ull);
    vlSelf->tpu__DOT__load_cols_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3130455731878857719ull);
    vlSelf->tpu__DOT__load_total_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9103208197552233522ull);
    vlSelf->tpu__DOT__load_idx_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1678845073710595495ull);
    vlSelf->tpu__DOT__load_data_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7810898842832204856ull);
    vlSelf->tpu__DOT__spad_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10404920364197841881ull);
    vlSelf->tpu__DOT__spad_wspad = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4917891379719750219ull);
    vlSelf->tpu__DOT__spad_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16509568209688581176ull);
    vlSelf->tpu__DOT__spad_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3075699216192381238ull);
    vlSelf->tpu__DOT__spad_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 822869275690919453ull);
    vlSelf->tpu__DOT__spad_rspad = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1936892149877309496ull);
    vlSelf->tpu__DOT__spad_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17461753594039736413ull);
    vlSelf->tpu__DOT__spad_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 823754387304255491ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14949347768519269008ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9319847432931965309ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__meta_mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2570015992385448143ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12991381843769355620ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__meta_mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 405737009148586230ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5738839216613528660ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1794184367894741142ull);
    vlSelf->tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10587737322389292982ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tpu__DOT__metadata_regs_i__DOT__meta_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17151352681653779851ull);
    }
    vlSelf->tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10821529172848213971ull);
    vlSelf->tpu__DOT__sp_i__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14279833946880003306ull);
    vlSelf->tpu__DOT__sp_i__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12173572506191734185ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3141065295943830546ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_wspad = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7205709541183837948ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11699575374956878672ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17702496438831767384ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4913886094688177433ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_rspad = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 352571561298548419ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7499619211257804906ull);
    vlSelf->tpu__DOT__sp_i__DOT__spad_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13015560420294642896ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->tpu__DOT__sp_i__DOT__spad_mem[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1962641140928962207ull);
        }
    }
    vlSelf->tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tpu__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6508067991581550017ull);
    vlSelf->__Vtrigprevexpr___TOP__tpu__DOT__metadata_regs_i__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3899788501736581395ull);
    vlSelf->__Vtrigprevexpr___TOP__tpu__DOT__sp_i__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1260338893917853129ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
