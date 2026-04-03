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
    vlSelfRef.tpu__DOT__mem_rdata = vlSelfRef.mem_rdata;
    vlSelfRef.tpu__DOT__meta_mem_rdata = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata;
    vlSelfRef.tpu__DOT__gemm_a_row_idx = (7U & VL_DIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_a_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_a_col_idx = (7U & VL_MODDIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_a_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_b_row_idx = (7U & VL_DIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_b_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_b_col_idx = (7U & VL_MODDIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_b_cols_reg)));
    vlSelfRef.tpu__DOT__commit_en = 0U;
    vlSelfRef.tpu__DOT__mem_wen = 0U;
    vlSelfRef.tpu__DOT__mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_wen = 0U;
    vlSelfRef.tpu__DOT__spad_wen = 0U;
    vlSelfRef.tpu__DOT__spad_ren = 0U;
    vlSelfRef.tpu__DOT__mem_raddr = 0U;
    vlSelfRef.tpu__DOT__mem_waddr = 0U;
    vlSelfRef.tpu__DOT__spad_wspad = 0U;
    vlSelfRef.tpu__DOT__spad_waddr = 0U;
    vlSelfRef.tpu__DOT__spad_raddr = 0U;
    vlSelfRef.tpu__DOT__spad_rspad = 0U;
    vlSelfRef.tpu__DOT__spad_rdata = vlSelfRef.tpu__DOT__sp_i__DOT__spad_rdata;
    vlSelfRef.tpu__DOT__gemm_store_row_idx = (7U & 
                                              VL_DIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_c_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_store_col_idx = (7U & 
                                              VL_MODDIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_c_cols_reg)));
    vlSelfRef.tpu__DOT__mem_rvalid = vlSelfRef.mem_rvalid;
    vlSelfRef.tpu__DOT__sys_done = vlSelfRef.tpu__DOT__sys_arr__DOT__done;
    vlSelfRef.tpu__DOT__instruction = vlSelfRef.instruction;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                        | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                   | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (7U == (IData)(vlSelfRef.tpu__DOT__state)))))) {
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((0x11U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x12U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x13U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((0x14U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                if ((0x15U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__commit_en = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                   | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                 | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
               | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            if ((8U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((9U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) {
                        vlSelfRef.tpu__DOT__mem_wen = 1U;
                        vlSelfRef.tpu__DOT__mem_waddr 
                            = (vlSelfRef.tpu__DOT__load_ptr_reg 
                               + (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                    }
                }
                if ((9U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__spad_ren = 1U;
                    vlSelfRef.tpu__DOT__spad_raddr 
                        = (0x000000ffU & (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                    vlSelfRef.tpu__DOT__spad_rspad 
                        = vlSelfRef.tpu__DOT__load_spad_reg;
                } else if ((0x0aU != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0bU != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x0cU != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__spad_ren = 1U;
                                vlSelfRef.tpu__DOT__spad_raddr 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg));
                                vlSelfRef.tpu__DOT__spad_rspad 
                                    = ((0U == (IData)(vlSelfRef.tpu__DOT__gemm_load_phase_reg))
                                        ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_a_reg)
                                        : (IData)(vlSelfRef.tpu__DOT__gemm_spad_b_reg));
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
               | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
            | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
           | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
          | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
         | (7U == (IData)(vlSelfRef.tpu__DOT__state)))) {
        if ((0U != (IData)(vlSelfRef.tpu__DOT__state))) {
            if ((1U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((2U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((4U == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__mem_ren = 1U;
                            vlSelfRef.tpu__DOT__mem_raddr 
                                = (vlSelfRef.tpu__DOT__load_ptr_reg 
                                   + (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                        }
                        if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                if ((6U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__spad_wen = 1U;
                                    vlSelfRef.tpu__DOT__spad_wspad 
                                        = vlSelfRef.tpu__DOT__load_spad_reg;
                                    vlSelfRef.tpu__DOT__spad_waddr 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                                }
                            }
                        }
                    }
                }
                if ((2U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                } else if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((6U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__meta_mem_wen = 1U;
            }
        }
    } else {
        if (((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                   | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                 | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
               | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            if ((8U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((9U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0aU != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((0x11U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x12U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x13U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((0x14U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__spad_wen = 1U;
                                vlSelfRef.tpu__DOT__spad_wspad 
                                    = vlSelfRef.tpu__DOT__gemm_spad_c_reg;
                                vlSelfRef.tpu__DOT__spad_waddr 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg));
                            }
                        }
                    }
                }
            }
        }
    }
    while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k)) {
        vlSelfRef.tpu__DOT__sys_a_row[(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k)] = 0U;
        vlSelfRef.tpu__DOT__sys_b_col[(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k)] = 0U;
        vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k 
            = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k);
    }
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                        | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                   | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (7U == (IData)(vlSelfRef.tpu__DOT__state)))))) {
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i = 0U;
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j = 0U;
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)) {
                    vlSelfRef.tpu__DOT__sys_a_row[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_M_reg)) 
                             & VL_GTES_III(32, 0U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)) 
                            & ((- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_a
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)]
                           [(7U & (- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i))]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i);
                }
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)) {
                    vlSelfRef.tpu__DOT__sys_b_col[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)) 
                             & VL_GTES_III(32, 0U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)) 
                            & ((- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_b
                           [(7U & (- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j))]
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j);
                }
            } else if ((0x11U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i = 0U;
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j = 0U;
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)) {
                    vlSelfRef.tpu__DOT__sys_a_row[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_M_reg)) 
                             & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                >= vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)) 
                            & (((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_a
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)]
                           [(7U & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                   - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i))]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i);
                }
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)) {
                    vlSelfRef.tpu__DOT__sys_b_col[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)) 
                             & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                >= vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)) 
                            & (((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_b
                           [(7U & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                   - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j))]
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j);
                }
            }
        }
    }
    vlSelfRef.tpu__DOT__sys_start = 0U;
    vlSelfRef.tpu__DOT__sys_valid = 0U;
    vlSelfRef.tpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tpu__DOT__rst = vlSelfRef.rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.commit_en = vlSelfRef.tpu__DOT__commit_en;
    vlSelfRef.mem_wen = vlSelfRef.tpu__DOT__mem_wen;
    vlSelfRef.mem_ren = vlSelfRef.tpu__DOT__mem_ren;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren 
        = vlSelfRef.tpu__DOT__meta_mem_ren;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen 
        = vlSelfRef.tpu__DOT__meta_mem_wen;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen = vlSelfRef.tpu__DOT__spad_wen;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_ren = vlSelfRef.tpu__DOT__spad_ren;
    vlSelfRef.mem_raddr = vlSelfRef.tpu__DOT__mem_raddr;
    vlSelfRef.mem_waddr = vlSelfRef.tpu__DOT__mem_waddr;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad = vlSelfRef.tpu__DOT__spad_wspad;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr = vlSelfRef.tpu__DOT__spad_waddr;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_raddr = vlSelfRef.tpu__DOT__spad_raddr;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_rspad = vlSelfRef.tpu__DOT__spad_rspad;
    vlSelfRef.tpu__DOT__mem_wdata = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                        | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                   | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (7U == (IData)(vlSelfRef.tpu__DOT__state)))))) {
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__sys_start = 1U;
                vlSelfRef.tpu__DOT__sys_valid = 1U;
            } else if ((0x11U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__sys_valid = 1U;
            }
        }
        if (((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                   | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                 | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
               | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            if ((8U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((9U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) {
                        vlSelfRef.tpu__DOT__mem_wdata 
                            = vlSelfRef.tpu__DOT__spad_rdata;
                    }
                }
            }
        }
    }
    vlSelfRef.tpu__DOT__spad_wdata = 0U;
    vlSelfRef.tpu__DOT__meta_mem_waddr = 0U;
    vlSelfRef.tpu__DOT__meta_mem_wdata = 0ULL;
    vlSelfRef.tpu__DOT__meta_mem_raddr = 0U;
    vlSelfRef.tpu__DOT__state_next = vlSelfRef.tpu__DOT__state;
    if (((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
               | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
            | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
           | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
          | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
         | (7U == (IData)(vlSelfRef.tpu__DOT__state)))) {
        if ((0U != (IData)(vlSelfRef.tpu__DOT__state))) {
            if ((1U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((2U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                if ((6U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__spad_wdata 
                                        = vlSelfRef.tpu__DOT__load_data_reg;
                                }
                            }
                        }
                    }
                }
                if ((2U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__meta_mem_raddr 
                        = (7U & (IData)((vlSelfRef.tpu__DOT__instruction 
                                         >> 0x38U)));
                } else if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((6U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__meta_mem_raddr 
                                    = (7U & (IData)(
                                                    (vlSelfRef.tpu__DOT__instruction 
                                                     >> 0x38U)));
                            }
                        }
                    }
                }
            }
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
        }
        vlSelfRef.tpu__DOT__state_next = (0x0000001fU 
                                          & ((0U == (IData)(vlSelfRef.tpu__DOT__state))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tpu__DOT__instruction 
                                                             >> 0x0000003fU)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tpu__DOT__instruction 
                                                              >> 0x0000003eU)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.tpu__DOT__instruction 
                                                               >> 0x0000003dU)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.tpu__DOT__instruction 
                                                                >> 0x0000003cU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__instruction 
                                                                 >> 0x0000003bU)))
                                                      ? 0x0bU
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.tpu__DOT__instruction 
                                                               >> 0x0000003dU)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.tpu__DOT__instruction 
                                                                >> 0x0000003cU)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__instruction 
                                                                 >> 0x0000003bU)))
                                                      ? 1U
                                                      : 0U))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tpu__DOT__instruction 
                                                              >> 0x0000003eU)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.tpu__DOT__instruction 
                                                               >> 0x0000003dU)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.tpu__DOT__instruction 
                                                                >> 0x0000003cU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__instruction 
                                                                 >> 0x0000003bU)))
                                                      ? 2U
                                                      : 7U)
                                                     : 0U)
                                                    : 0U)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.tpu__DOT__state))
                                                  ? 0x15U
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
                                                        ? 0x15U
                                                        : 4U)
                                                       : 8U))))))));
    } else {
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((0x11U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x12U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x13U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((0x14U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__spad_wdata 
                                    = (0x000000ffU 
                                       & vlSelfRef.tpu__DOT__stage_c
                                       [vlSelfRef.tpu__DOT__gemm_store_row_idx]
                                       [vlSelfRef.tpu__DOT__gemm_store_col_idx]);
                            }
                        }
                    }
                }
            }
        }
        if (((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                   | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                 | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
               | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            if ((8U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((9U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0aU != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__meta_mem_raddr 
                                = ((0U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                    ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_a_reg)
                                    : ((1U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                        ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_b_reg)
                                        : ((2U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                            ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_c_reg)
                                            : 0U)));
                        }
                    }
                }
            }
            vlSelfRef.tpu__DOT__state_next = (0x0000001fU 
                                              & ((8U 
                                                  == (IData)(vlSelfRef.tpu__DOT__state))
                                                  ? 9U
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelfRef.tpu__DOT__state))
                                                   ? 0x0aU
                                                   : 
                                                  ((0x0aU 
                                                    == (IData)(vlSelfRef.tpu__DOT__state))
                                                    ? 
                                                   (((0x0000ffffU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.tpu__DOT__load_idx_reg))) 
                                                     >= (IData)(vlSelfRef.tpu__DOT__load_total_reg))
                                                     ? 0x15U
                                                     : 9U)
                                                    : 
                                                   ((0x0bU 
                                                     == (IData)(vlSelfRef.tpu__DOT__state))
                                                     ? 0x0cU
                                                     : 
                                                    ((0x0cU 
                                                      == (IData)(vlSelfRef.tpu__DOT__state))
                                                      ? 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                                       ? 0x0dU
                                                       : 0x0bU)
                                                      : 
                                                     ((0x0dU 
                                                       == (IData)(vlSelfRef.tpu__DOT__state))
                                                       ? 0x0eU
                                                       : 
                                                      ((0x0eU 
                                                        == (IData)(vlSelfRef.tpu__DOT__state))
                                                        ? 0x0fU
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelfRef.tpu__DOT__gemm_load_phase_reg))
                                                         ? 0x10U
                                                         : 0x0dU)))))))));
        } else {
            vlSelfRef.tpu__DOT__state_next = (0x0000001fU 
                                              & ((0x10U 
                                                  == (IData)(vlSelfRef.tpu__DOT__state))
                                                  ? 0x11U
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlSelfRef.tpu__DOT__state))
                                                   ? 
                                                  ((((IData)(1U) 
                                                     + (IData)(vlSelfRef.tpu__DOT__gemm_t_reg)) 
                                                    >= 
                                                    ((((IData)(vlSelfRef.tpu__DOT__gemm_K_reg) 
                                                       + (IData)(vlSelfRef.tpu__DOT__gemm_M_reg)) 
                                                      + (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)) 
                                                     - (IData)(2U)))
                                                    ? 0x12U
                                                    : 0x11U)
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelfRef.tpu__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelfRef.tpu__DOT__sys_done)
                                                     ? 0x13U
                                                     : 0x12U)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelfRef.tpu__DOT__state))
                                                     ? 0x14U
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelfRef.tpu__DOT__state))
                                                      ? 
                                                     ((((IData)(1U) 
                                                        + (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg)) 
                                                       >= 
                                                       ((IData)(vlSelfRef.tpu__DOT__gemm_M_reg) 
                                                        * (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)))
                                                       ? 0x15U
                                                       : 0x14U)
                                                      : 0U))))));
        }
    }
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[0U] = vlSelfRef.tpu__DOT__sys_a_row
        [0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[1U] = vlSelfRef.tpu__DOT__sys_a_row
        [1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[2U] = vlSelfRef.tpu__DOT__sys_a_row
        [2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[3U] = vlSelfRef.tpu__DOT__sys_a_row
        [3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[4U] = vlSelfRef.tpu__DOT__sys_a_row
        [4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[5U] = vlSelfRef.tpu__DOT__sys_a_row
        [5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[6U] = vlSelfRef.tpu__DOT__sys_a_row
        [6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[7U] = vlSelfRef.tpu__DOT__sys_a_row
        [7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[0U] = vlSelfRef.tpu__DOT__sys_b_col
        [0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[1U] = vlSelfRef.tpu__DOT__sys_b_col
        [1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[2U] = vlSelfRef.tpu__DOT__sys_b_col
        [2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[3U] = vlSelfRef.tpu__DOT__sys_b_col
        [3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[4U] = vlSelfRef.tpu__DOT__sys_b_col
        [4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[5U] = vlSelfRef.tpu__DOT__sys_b_col
        [5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[6U] = vlSelfRef.tpu__DOT__sys_b_col
        [6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[7U] = vlSelfRef.tpu__DOT__sys_b_col
        [7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__start = vlSelfRef.tpu__DOT__sys_start;
    vlSelfRef.tpu__DOT__sys_arr__DOT__valid = vlSelfRef.tpu__DOT__sys_valid;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk = vlSelfRef.tpu__DOT__clk;
    vlSelfRef.tpu__DOT__sp_i__DOT__clk = vlSelfRef.tpu__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__clk = vlSelfRef.tpu__DOT__clk;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst = vlSelfRef.tpu__DOT__rst;
    vlSelfRef.tpu__DOT__sp_i__DOT__rst = vlSelfRef.tpu__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rst = vlSelfRef.tpu__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][6U];
    vlSelfRef.mem_wdata = vlSelfRef.tpu__DOT__mem_wdata;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata = vlSelfRef.tpu__DOT__spad_wdata;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr 
        = vlSelfRef.tpu__DOT__meta_mem_waddr;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
        = vlSelfRef.tpu__DOT__meta_mem_wdata;
    vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr 
        = vlSelfRef.tpu__DOT__meta_mem_raddr;
    vlSelfRef.tpu__DOT__sys_c[0U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][0U];
    vlSelfRef.tpu__DOT__sys_c[0U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][1U];
    vlSelfRef.tpu__DOT__sys_c[0U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][2U];
    vlSelfRef.tpu__DOT__sys_c[0U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][3U];
    vlSelfRef.tpu__DOT__sys_c[0U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][4U];
    vlSelfRef.tpu__DOT__sys_c[0U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][5U];
    vlSelfRef.tpu__DOT__sys_c[0U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][6U];
    vlSelfRef.tpu__DOT__sys_c[0U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][7U];
    vlSelfRef.tpu__DOT__sys_c[1U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][0U];
    vlSelfRef.tpu__DOT__sys_c[1U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][1U];
    vlSelfRef.tpu__DOT__sys_c[1U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][2U];
    vlSelfRef.tpu__DOT__sys_c[1U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][3U];
    vlSelfRef.tpu__DOT__sys_c[1U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][4U];
    vlSelfRef.tpu__DOT__sys_c[1U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][5U];
    vlSelfRef.tpu__DOT__sys_c[1U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][6U];
    vlSelfRef.tpu__DOT__sys_c[1U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][7U];
    vlSelfRef.tpu__DOT__sys_c[2U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][0U];
    vlSelfRef.tpu__DOT__sys_c[2U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][1U];
    vlSelfRef.tpu__DOT__sys_c[2U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][2U];
    vlSelfRef.tpu__DOT__sys_c[2U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][3U];
    vlSelfRef.tpu__DOT__sys_c[2U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][4U];
    vlSelfRef.tpu__DOT__sys_c[2U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][5U];
    vlSelfRef.tpu__DOT__sys_c[2U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][6U];
    vlSelfRef.tpu__DOT__sys_c[2U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][7U];
    vlSelfRef.tpu__DOT__sys_c[3U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][0U];
    vlSelfRef.tpu__DOT__sys_c[3U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][1U];
    vlSelfRef.tpu__DOT__sys_c[3U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][2U];
    vlSelfRef.tpu__DOT__sys_c[3U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][3U];
    vlSelfRef.tpu__DOT__sys_c[3U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][4U];
    vlSelfRef.tpu__DOT__sys_c[3U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][5U];
    vlSelfRef.tpu__DOT__sys_c[3U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][6U];
    vlSelfRef.tpu__DOT__sys_c[3U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][7U];
    vlSelfRef.tpu__DOT__sys_c[4U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][0U];
    vlSelfRef.tpu__DOT__sys_c[4U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][1U];
    vlSelfRef.tpu__DOT__sys_c[4U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][2U];
    vlSelfRef.tpu__DOT__sys_c[4U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][3U];
    vlSelfRef.tpu__DOT__sys_c[4U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][4U];
    vlSelfRef.tpu__DOT__sys_c[4U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][5U];
    vlSelfRef.tpu__DOT__sys_c[4U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][6U];
    vlSelfRef.tpu__DOT__sys_c[4U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][7U];
    vlSelfRef.tpu__DOT__sys_c[5U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][0U];
    vlSelfRef.tpu__DOT__sys_c[5U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][1U];
    vlSelfRef.tpu__DOT__sys_c[5U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][2U];
    vlSelfRef.tpu__DOT__sys_c[5U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][3U];
    vlSelfRef.tpu__DOT__sys_c[5U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][4U];
    vlSelfRef.tpu__DOT__sys_c[5U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][5U];
    vlSelfRef.tpu__DOT__sys_c[5U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][6U];
    vlSelfRef.tpu__DOT__sys_c[5U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][7U];
    vlSelfRef.tpu__DOT__sys_c[6U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][0U];
    vlSelfRef.tpu__DOT__sys_c[6U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][1U];
    vlSelfRef.tpu__DOT__sys_c[6U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][2U];
    vlSelfRef.tpu__DOT__sys_c[6U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][3U];
    vlSelfRef.tpu__DOT__sys_c[6U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][4U];
    vlSelfRef.tpu__DOT__sys_c[6U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][5U];
    vlSelfRef.tpu__DOT__sys_c[6U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][6U];
    vlSelfRef.tpu__DOT__sys_c[6U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][7U];
    vlSelfRef.tpu__DOT__sys_c[7U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][0U];
    vlSelfRef.tpu__DOT__sys_c[7U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][1U];
    vlSelfRef.tpu__DOT__sys_c[7U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][2U];
    vlSelfRef.tpu__DOT__sys_c[7U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][3U];
    vlSelfRef.tpu__DOT__sys_c[7U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][4U];
    vlSelfRef.tpu__DOT__sys_c[7U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][5U];
    vlSelfRef.tpu__DOT__sys_c[7U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][6U];
    vlSelfRef.tpu__DOT__sys_c[7U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc = vlSelfRef.tpu__DOT__sys_arr__DOT__start;
    vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc = vlSelfRef.tpu__DOT__sys_arr__DOT__valid;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 3> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      ((((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                             << 8U)) 
                                                         | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rst__0))))) 
                                                               << 4U) 
                                                              | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.tpu__DOT__sp_i__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sp_i__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__metadata_regs_i__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.tpu__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__clk__0)))))))))));
    vlSelfRef.__VactTriggered[1U] = (((QData)((IData)(
                                                      ((((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                             << 8U)) 
                                                         | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))))) 
                                                               << 4U) 
                                                              | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0)))))))))));
    vlSelfRef.__VactTriggered[2U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__clk__0 
        = vlSelfRef.tpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__metadata_regs_i__DOT__clk__0 
        = vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sp_i__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sp_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst__0 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 3> &in) {
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
    } while ((3U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h549a34ea_0;
extern const VlUnpacked<CData/*5:0*/, 256> Vtop__ConstPool__TABLE_hd1041703_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h0db0ce6e_0;

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__ctr) 
                     << 2U) | (((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__start) 
                                << 1U) | (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rst)));
    if ((1U & Vtop__ConstPool__TABLE_h549a34ea_0[__Vtableidx1])) {
        vlSelfRef.tpu__DOT__sys_arr__DOT__ctr = Vtop__ConstPool__TABLE_hd1041703_0
            [__Vtableidx1];
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__done = Vtop__ConstPool__TABLE_h0db0ce6e_0
        [__Vtableidx1];
    vlSelfRef.tpu__DOT__sys_done = vlSelfRef.tpu__DOT__sys_arr__DOT__done;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[0U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[0U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[1U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[1U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[2U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[2U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[3U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[3U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[4U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[4U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__42\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__43\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__45\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__46(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__46\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__47\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__48(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__48\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[5U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[5U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__49(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__49\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__50\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__51\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__52\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__54\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__55\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__56\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[6U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[6U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__57\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][0U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__58\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][1U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__59\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][2U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__60\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][3U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__61(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__61\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][4U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__62(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__62\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][5U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__63(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__63\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][6U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__64(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__64\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0;
    // Body
    __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__rst) {
        __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out = 0U;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out = 0U;
    } else {
        if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c = 0U;
        } else if (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en) {
            __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                = (vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
                   + (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod));
        }
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in;
        vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out 
            = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in;
    }
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c 
        = __Vdly__tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][7U] = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__c;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects[7U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_out;
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects[7U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_out;
}

void Vtop___024root___nba_sequent__TOP__65(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__65\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vdly__tpu__DOT__load_idx_reg;
    __Vdly__tpu__DOT__load_idx_reg = 0;
    CData/*7:0*/ __Vdly__tpu__DOT__gemm_a_rows_reg;
    __Vdly__tpu__DOT__gemm_a_rows_reg = 0;
    CData/*7:0*/ __Vdly__tpu__DOT__gemm_a_cols_reg;
    __Vdly__tpu__DOT__gemm_a_cols_reg = 0;
    CData/*7:0*/ __Vdly__tpu__DOT__gemm_b_rows_reg;
    __Vdly__tpu__DOT__gemm_b_rows_reg = 0;
    CData/*7:0*/ __Vdly__tpu__DOT__gemm_b_cols_reg;
    __Vdly__tpu__DOT__gemm_b_cols_reg = 0;
    CData/*1:0*/ __Vdly__tpu__DOT__gemm_meta_phase_reg;
    __Vdly__tpu__DOT__gemm_meta_phase_reg = 0;
    CData/*1:0*/ __Vdly__tpu__DOT__gemm_load_phase_reg;
    __Vdly__tpu__DOT__gemm_load_phase_reg = 0;
    SData/*15:0*/ __Vdly__tpu__DOT__gemm_idx_reg;
    __Vdly__tpu__DOT__gemm_idx_reg = 0;
    CData/*7:0*/ __Vdly__tpu__DOT__gemm_t_reg;
    __Vdly__tpu__DOT__gemm_t_reg = 0;
    SData/*15:0*/ __Vdly__tpu__DOT__gemm_store_idx_reg;
    __Vdly__tpu__DOT__gemm_store_idx_reg = 0;
    CData/*7:0*/ __Vdly__tpu__DOT__gemm_spad_data_reg;
    __Vdly__tpu__DOT__gemm_spad_data_reg = 0;
    CData/*2:0*/ __VdlyDim0__tpu__DOT__stage_a__v0;
    __VdlyDim0__tpu__DOT__stage_a__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__stage_a__v0;
    __VdlyDim1__tpu__DOT__stage_a__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tpu__DOT__stage_b__v0;
    __VdlyDim0__tpu__DOT__stage_b__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__stage_b__v0;
    __VdlyDim1__tpu__DOT__stage_b__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tpu__DOT__stage_c__v0;
    __VdlyDim0__tpu__DOT__stage_c__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__stage_c__v0;
    __VdlyDim1__tpu__DOT__stage_c__v0 = 0;
    CData/*7:0*/ __VdlyVal__tpu__DOT__stage_a__v1;
    __VdlyVal__tpu__DOT__stage_a__v1 = 0;
    CData/*2:0*/ __VdlyDim0__tpu__DOT__stage_a__v1;
    __VdlyDim0__tpu__DOT__stage_a__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__stage_a__v1;
    __VdlyDim1__tpu__DOT__stage_a__v1 = 0;
    CData/*7:0*/ __VdlyVal__tpu__DOT__stage_b__v1;
    __VdlyVal__tpu__DOT__stage_b__v1 = 0;
    CData/*2:0*/ __VdlyDim0__tpu__DOT__stage_b__v1;
    __VdlyDim0__tpu__DOT__stage_b__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__stage_b__v1;
    __VdlyDim1__tpu__DOT__stage_b__v1 = 0;
    IData/*31:0*/ __VdlyVal__tpu__DOT__stage_c__v1;
    __VdlyVal__tpu__DOT__stage_c__v1 = 0;
    CData/*2:0*/ __VdlyDim0__tpu__DOT__stage_c__v1;
    __VdlyDim0__tpu__DOT__stage_c__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tpu__DOT__stage_c__v1;
    __VdlyDim1__tpu__DOT__stage_c__v1 = 0;
    // Body
    __Vdly__tpu__DOT__gemm_a_rows_reg = vlSelfRef.tpu__DOT__gemm_a_rows_reg;
    __Vdly__tpu__DOT__gemm_b_rows_reg = vlSelfRef.tpu__DOT__gemm_b_rows_reg;
    __Vdly__tpu__DOT__gemm_spad_data_reg = vlSelfRef.tpu__DOT__gemm_spad_data_reg;
    __Vdly__tpu__DOT__gemm_a_cols_reg = vlSelfRef.tpu__DOT__gemm_a_cols_reg;
    __Vdly__tpu__DOT__gemm_b_cols_reg = vlSelfRef.tpu__DOT__gemm_b_cols_reg;
    __Vdly__tpu__DOT__gemm_idx_reg = vlSelfRef.tpu__DOT__gemm_idx_reg;
    __Vdly__tpu__DOT__gemm_meta_phase_reg = vlSelfRef.tpu__DOT__gemm_meta_phase_reg;
    __Vdly__tpu__DOT__gemm_load_phase_reg = vlSelfRef.tpu__DOT__gemm_load_phase_reg;
    __Vdly__tpu__DOT__load_idx_reg = vlSelfRef.tpu__DOT__load_idx_reg;
    __Vdly__tpu__DOT__gemm_store_idx_reg = vlSelfRef.tpu__DOT__gemm_store_idx_reg;
    __Vdly__tpu__DOT__gemm_t_reg = vlSelfRef.tpu__DOT__gemm_t_reg;
    if (vlSelfRef.tpu__DOT__rst) {
        vlSelfRef.tpu__DOT__i = 0U;
        vlSelfRef.tpu__DOT__load_spad_reg = 0U;
        vlSelfRef.tpu__DOT__load_ptr_reg = 0U;
        vlSelfRef.tpu__DOT__load_rows_reg = 0U;
        vlSelfRef.tpu__DOT__load_cols_reg = 0U;
        vlSelfRef.tpu__DOT__load_total_reg = 0U;
        __Vdly__tpu__DOT__load_idx_reg = 0U;
        vlSelfRef.tpu__DOT__load_data_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_spad_a_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_spad_b_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_spad_c_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_a_ptr_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_b_ptr_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_c_ptr_reg = 0U;
        __Vdly__tpu__DOT__gemm_a_rows_reg = 0U;
        __Vdly__tpu__DOT__gemm_a_cols_reg = 0U;
        __Vdly__tpu__DOT__gemm_b_rows_reg = 0U;
        __Vdly__tpu__DOT__gemm_b_cols_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_c_rows_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_c_cols_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_M_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_N_reg = 0U;
        vlSelfRef.tpu__DOT__gemm_K_reg = 0U;
        __Vdly__tpu__DOT__gemm_meta_phase_reg = 0U;
        __Vdly__tpu__DOT__gemm_load_phase_reg = 0U;
        __Vdly__tpu__DOT__gemm_idx_reg = 0U;
        __Vdly__tpu__DOT__gemm_t_reg = 0U;
        __Vdly__tpu__DOT__gemm_store_idx_reg = 0U;
        __Vdly__tpu__DOT__gemm_spad_data_reg = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__i)) {
            vlSelfRef.tpu__DOT__j = 0U;
            while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__j)) {
                __VdlyDim0__tpu__DOT__stage_a__v0 = 
                    (7U & vlSelfRef.tpu__DOT__j);
                __VdlyDim1__tpu__DOT__stage_a__v0 = 
                    (7U & vlSelfRef.tpu__DOT__i);
                vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_a.enqueue(0U, (IData)(__VdlyDim1__tpu__DOT__stage_a__v0), __VdlyDim0__tpu__DOT__stage_a__v0);
                __VdlyDim0__tpu__DOT__stage_b__v0 = 
                    (7U & vlSelfRef.tpu__DOT__j);
                __VdlyDim1__tpu__DOT__stage_b__v0 = 
                    (7U & vlSelfRef.tpu__DOT__i);
                vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_b.enqueue(0U, (IData)(__VdlyDim1__tpu__DOT__stage_b__v0), __VdlyDim0__tpu__DOT__stage_b__v0);
                __VdlyDim0__tpu__DOT__stage_c__v0 = 
                    (7U & vlSelfRef.tpu__DOT__j);
                __VdlyDim1__tpu__DOT__stage_c__v0 = 
                    (7U & vlSelfRef.tpu__DOT__i);
                vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_c.enqueue(0U, (IData)(__VdlyDim1__tpu__DOT__stage_c__v0), __VdlyDim0__tpu__DOT__stage_c__v0);
                vlSelfRef.tpu__DOT__j = ((IData)(1U) 
                                         + vlSelfRef.tpu__DOT__j);
            }
            vlSelfRef.tpu__DOT__i = ((IData)(1U) + vlSelfRef.tpu__DOT__i);
        }
    } else {
        if (((2U == (IData)(vlSelfRef.tpu__DOT__state)) 
             | (7U == (IData)(vlSelfRef.tpu__DOT__state)))) {
            vlSelfRef.tpu__DOT__load_spad_reg = (7U 
                                                 & (IData)(
                                                           (vlSelfRef.tpu__DOT__instruction 
                                                            >> 0x38U)));
        }
        if (((3U == (IData)(vlSelfRef.tpu__DOT__state)) 
             | (8U == (IData)(vlSelfRef.tpu__DOT__state)))) {
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
        if ((IData)(((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                     & (0xf800000000000000ULL == (0xf800000000000000ULL 
                                                  & vlSelfRef.tpu__DOT__instruction))))) {
            vlSelfRef.tpu__DOT__gemm_spad_a_reg = (7U 
                                                   & (IData)(
                                                             (vlSelfRef.tpu__DOT__instruction 
                                                              >> 0x38U)));
            vlSelfRef.tpu__DOT__gemm_spad_b_reg = (7U 
                                                   & (IData)(
                                                             (vlSelfRef.tpu__DOT__instruction 
                                                              >> 0x35U)));
            vlSelfRef.tpu__DOT__gemm_spad_c_reg = (7U 
                                                   & (IData)(
                                                             (vlSelfRef.tpu__DOT__instruction 
                                                              >> 0x32U)));
            __Vdly__tpu__DOT__gemm_meta_phase_reg = 0U;
            __Vdly__tpu__DOT__gemm_load_phase_reg = 0U;
            __Vdly__tpu__DOT__gemm_idx_reg = 0U;
            __Vdly__tpu__DOT__gemm_t_reg = 0U;
            __Vdly__tpu__DOT__gemm_store_idx_reg = 0U;
        }
        if (((6U == (IData)(vlSelfRef.tpu__DOT__state)) 
             | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            __Vdly__tpu__DOT__load_idx_reg = (0x0000ffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tpu__DOT__load_idx_reg)));
        }
        if ((0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))) {
                vlSelfRef.tpu__DOT__gemm_a_ptr_reg 
                    = (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                               >> 1U));
                __Vdly__tpu__DOT__gemm_a_rows_reg = 
                    (0x000000ffU & (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                            >> 0x00000029U)));
                __Vdly__tpu__DOT__gemm_a_cols_reg = 
                    (0x000000ffU & (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                            >> 0x00000021U)));
                __Vdly__tpu__DOT__gemm_meta_phase_reg = 1U;
            } else if ((1U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))) {
                vlSelfRef.tpu__DOT__gemm_b_ptr_reg 
                    = (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                               >> 1U));
                __Vdly__tpu__DOT__gemm_b_rows_reg = 
                    (0x000000ffU & (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                            >> 0x00000029U)));
                __Vdly__tpu__DOT__gemm_b_cols_reg = 
                    (0x000000ffU & (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                            >> 0x00000021U)));
                __Vdly__tpu__DOT__gemm_meta_phase_reg = 2U;
            } else if ((2U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))) {
                vlSelfRef.tpu__DOT__gemm_c_ptr_reg 
                    = (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                               >> 1U));
                vlSelfRef.tpu__DOT__gemm_c_rows_reg 
                    = (0x000000ffU & (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                              >> 0x00000029U)));
                vlSelfRef.tpu__DOT__gemm_c_cols_reg 
                    = (0x000000ffU & (IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                              >> 0x00000021U)));
                __Vdly__tpu__DOT__gemm_meta_phase_reg = 3U;
                vlSelfRef.tpu__DOT__gemm_M_reg = vlSelfRef.tpu__DOT__gemm_a_rows_reg;
                vlSelfRef.tpu__DOT__gemm_K_reg = vlSelfRef.tpu__DOT__gemm_a_cols_reg;
                vlSelfRef.tpu__DOT__gemm_N_reg = vlSelfRef.tpu__DOT__gemm_b_cols_reg;
                __Vdly__tpu__DOT__gemm_load_phase_reg = 0U;
                __Vdly__tpu__DOT__gemm_idx_reg = 0U;
            } else {
                __Vdly__tpu__DOT__gemm_meta_phase_reg 
                    = vlSelfRef.tpu__DOT__gemm_meta_phase_reg;
            }
        }
        if ((0x0fU == (IData)(vlSelfRef.tpu__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tpu__DOT__gemm_load_phase_reg))) {
                __VdlyVal__tpu__DOT__stage_a__v1 = vlSelfRef.tpu__DOT__gemm_spad_data_reg;
                __VdlyDim0__tpu__DOT__stage_a__v1 = vlSelfRef.tpu__DOT__gemm_a_col_idx;
                __VdlyDim1__tpu__DOT__stage_a__v1 = vlSelfRef.tpu__DOT__gemm_a_row_idx;
                vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_a.enqueue(__VdlyVal__tpu__DOT__stage_a__v1, (IData)(__VdlyDim1__tpu__DOT__stage_a__v1), __VdlyDim0__tpu__DOT__stage_a__v1);
                if ((((IData)(1U) + (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg)) 
                     >= ((IData)(vlSelfRef.tpu__DOT__gemm_a_rows_reg) 
                         * (IData)(vlSelfRef.tpu__DOT__gemm_a_cols_reg)))) {
                    __Vdly__tpu__DOT__gemm_idx_reg = 0U;
                    __Vdly__tpu__DOT__gemm_load_phase_reg = 1U;
                } else {
                    __Vdly__tpu__DOT__gemm_idx_reg 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg)));
                }
            } else if ((1U == (IData)(vlSelfRef.tpu__DOT__gemm_load_phase_reg))) {
                __VdlyVal__tpu__DOT__stage_b__v1 = vlSelfRef.tpu__DOT__gemm_spad_data_reg;
                __VdlyDim0__tpu__DOT__stage_b__v1 = vlSelfRef.tpu__DOT__gemm_b_col_idx;
                __VdlyDim1__tpu__DOT__stage_b__v1 = vlSelfRef.tpu__DOT__gemm_b_row_idx;
                vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_b.enqueue(__VdlyVal__tpu__DOT__stage_b__v1, (IData)(__VdlyDim1__tpu__DOT__stage_b__v1), __VdlyDim0__tpu__DOT__stage_b__v1);
                if ((((IData)(1U) + (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg)) 
                     >= ((IData)(vlSelfRef.tpu__DOT__gemm_b_rows_reg) 
                         * (IData)(vlSelfRef.tpu__DOT__gemm_b_cols_reg)))) {
                    __Vdly__tpu__DOT__gemm_idx_reg = 0U;
                    __Vdly__tpu__DOT__gemm_load_phase_reg = 2U;
                    __Vdly__tpu__DOT__gemm_t_reg = 0U;
                } else {
                    __Vdly__tpu__DOT__gemm_idx_reg 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg)));
                }
            }
        }
        if ((0x10U == (IData)(vlSelfRef.tpu__DOT__state))) {
            __Vdly__tpu__DOT__gemm_t_reg = 0U;
        } else if ((0x11U == (IData)(vlSelfRef.tpu__DOT__state))) {
            __Vdly__tpu__DOT__gemm_t_reg = (0x000000ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.tpu__DOT__gemm_t_reg)));
        }
        if ((0x13U == (IData)(vlSelfRef.tpu__DOT__state))) {
            vlSelfRef.tpu__DOT__i = 0U;
            while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__i)) {
                vlSelfRef.tpu__DOT__j = 0U;
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__j)) {
                    __VdlyVal__tpu__DOT__stage_c__v1 
                        = vlSelfRef.tpu__DOT__sys_c
                        [(7U & vlSelfRef.tpu__DOT__i)]
                        [(7U & vlSelfRef.tpu__DOT__j)];
                    __VdlyDim0__tpu__DOT__stage_c__v1 
                        = (7U & vlSelfRef.tpu__DOT__j);
                    __VdlyDim1__tpu__DOT__stage_c__v1 
                        = (7U & vlSelfRef.tpu__DOT__i);
                    vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_c.enqueue(__VdlyVal__tpu__DOT__stage_c__v1, (IData)(__VdlyDim1__tpu__DOT__stage_c__v1), __VdlyDim0__tpu__DOT__stage_c__v1);
                    vlSelfRef.tpu__DOT__j = ((IData)(1U) 
                                             + vlSelfRef.tpu__DOT__j);
                }
                vlSelfRef.tpu__DOT__i = ((IData)(1U) 
                                         + vlSelfRef.tpu__DOT__i);
            }
            __Vdly__tpu__DOT__gemm_store_idx_reg = 0U;
        }
        if ((0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) {
            __Vdly__tpu__DOT__gemm_spad_data_reg = vlSelfRef.tpu__DOT__spad_rdata;
        }
        if ((0x14U == (IData)(vlSelfRef.tpu__DOT__state))) {
            __Vdly__tpu__DOT__gemm_store_idx_reg = 
                (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg)));
        }
    }
    vlSelfRef.tpu__DOT__gemm_a_rows_reg = __Vdly__tpu__DOT__gemm_a_rows_reg;
    vlSelfRef.tpu__DOT__gemm_b_rows_reg = __Vdly__tpu__DOT__gemm_b_rows_reg;
    vlSelfRef.tpu__DOT__gemm_spad_data_reg = __Vdly__tpu__DOT__gemm_spad_data_reg;
    vlSelfRef.tpu__DOT__gemm_a_cols_reg = __Vdly__tpu__DOT__gemm_a_cols_reg;
    vlSelfRef.tpu__DOT__gemm_b_cols_reg = __Vdly__tpu__DOT__gemm_b_cols_reg;
    vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_c.commit(vlSelfRef.tpu__DOT__stage_c);
    vlSelfRef.tpu__DOT__gemm_idx_reg = __Vdly__tpu__DOT__gemm_idx_reg;
    vlSelfRef.tpu__DOT__gemm_meta_phase_reg = __Vdly__tpu__DOT__gemm_meta_phase_reg;
    vlSelfRef.tpu__DOT__gemm_load_phase_reg = __Vdly__tpu__DOT__gemm_load_phase_reg;
    vlSelfRef.tpu__DOT__load_idx_reg = __Vdly__tpu__DOT__load_idx_reg;
    vlSelfRef.tpu__DOT__gemm_store_idx_reg = __Vdly__tpu__DOT__gemm_store_idx_reg;
    vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_a.commit(vlSelfRef.tpu__DOT__stage_a);
    vlSelfRef.__VdlyCommitQueuetpu__DOT__stage_b.commit(vlSelfRef.tpu__DOT__stage_b);
    vlSelfRef.tpu__DOT__state = ((IData)(vlSelfRef.tpu__DOT__rst)
                                  ? 0U : (IData)(vlSelfRef.tpu__DOT__state_next));
    vlSelfRef.tpu__DOT__gemm_t_reg = __Vdly__tpu__DOT__gemm_t_reg;
    vlSelfRef.tpu__DOT__gemm_a_row_idx = (7U & VL_DIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_a_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_a_col_idx = (7U & VL_MODDIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_a_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_b_row_idx = (7U & VL_DIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_b_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_b_col_idx = (7U & VL_MODDIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_b_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_store_row_idx = (7U & 
                                              VL_DIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_c_cols_reg)));
    vlSelfRef.tpu__DOT__gemm_store_col_idx = (7U & 
                                              VL_MODDIV_III(16, (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg), (IData)(vlSelfRef.tpu__DOT__gemm_c_cols_reg)));
    vlSelfRef.tpu__DOT__commit_en = 0U;
    vlSelfRef.tpu__DOT__mem_wen = 0U;
    vlSelfRef.tpu__DOT__mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_wen = 0U;
    vlSelfRef.tpu__DOT__spad_wen = 0U;
    vlSelfRef.tpu__DOT__spad_ren = 0U;
    vlSelfRef.tpu__DOT__meta_mem_waddr = 0U;
    vlSelfRef.tpu__DOT__meta_mem_wdata = 0ULL;
    vlSelfRef.tpu__DOT__mem_raddr = 0U;
    vlSelfRef.tpu__DOT__mem_waddr = 0U;
    vlSelfRef.tpu__DOT__spad_wspad = 0U;
    vlSelfRef.tpu__DOT__spad_waddr = 0U;
    vlSelfRef.tpu__DOT__spad_raddr = 0U;
    vlSelfRef.tpu__DOT__spad_wdata = 0U;
    vlSelfRef.tpu__DOT__spad_rspad = 0U;
    vlSelfRef.tpu__DOT__meta_mem_raddr = 0U;
    if (((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
               | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
            | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
           | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
          | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
         | (7U == (IData)(vlSelfRef.tpu__DOT__state)))) {
        if ((0U != (IData)(vlSelfRef.tpu__DOT__state))) {
            if ((1U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((2U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((4U == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__mem_ren = 1U;
                            vlSelfRef.tpu__DOT__mem_raddr 
                                = (vlSelfRef.tpu__DOT__load_ptr_reg 
                                   + (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                        }
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
                    }
                }
                if ((2U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                    vlSelfRef.tpu__DOT__meta_mem_raddr 
                        = (7U & (IData)((vlSelfRef.tpu__DOT__instruction 
                                         >> 0x38U)));
                } else if ((3U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((4U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((5U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((6U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                                vlSelfRef.tpu__DOT__meta_mem_raddr 
                                    = (7U & (IData)(
                                                    (vlSelfRef.tpu__DOT__instruction 
                                                     >> 0x38U)));
                            }
                        }
                    }
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
    } else {
        if (((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                   | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                 | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
               | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            if ((8U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((9U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0aU != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) {
                            vlSelfRef.tpu__DOT__meta_mem_ren = 1U;
                            vlSelfRef.tpu__DOT__meta_mem_raddr 
                                = ((0U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                    ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_a_reg)
                                    : ((1U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                        ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_b_reg)
                                        : ((2U == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                            ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_c_reg)
                                            : 0U)));
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((0x11U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x12U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x13U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((0x14U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__spad_wen = 1U;
                                vlSelfRef.tpu__DOT__spad_wspad 
                                    = vlSelfRef.tpu__DOT__gemm_spad_c_reg;
                                vlSelfRef.tpu__DOT__spad_waddr 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg));
                                vlSelfRef.tpu__DOT__spad_wdata 
                                    = (0x000000ffU 
                                       & vlSelfRef.tpu__DOT__stage_c
                                       [vlSelfRef.tpu__DOT__gemm_store_row_idx]
                                       [vlSelfRef.tpu__DOT__gemm_store_col_idx]);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                        | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                   | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (7U == (IData)(vlSelfRef.tpu__DOT__state)))))) {
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((0x11U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x12U != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x13U != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((0x14U != (IData)(vlSelfRef.tpu__DOT__state))) {
                                if ((0x15U == (IData)(vlSelfRef.tpu__DOT__state))) {
                                    vlSelfRef.tpu__DOT__commit_en = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                   | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                 | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
               | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            if ((8U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((9U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) {
                        vlSelfRef.tpu__DOT__mem_wen = 1U;
                        vlSelfRef.tpu__DOT__mem_waddr 
                            = (vlSelfRef.tpu__DOT__load_ptr_reg 
                               + (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                    }
                }
                if ((9U == (IData)(vlSelfRef.tpu__DOT__state))) {
                    vlSelfRef.tpu__DOT__spad_ren = 1U;
                    vlSelfRef.tpu__DOT__spad_raddr 
                        = (0x000000ffU & (IData)(vlSelfRef.tpu__DOT__load_idx_reg));
                    vlSelfRef.tpu__DOT__spad_rspad 
                        = vlSelfRef.tpu__DOT__load_spad_reg;
                } else if ((0x0aU != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0bU != (IData)(vlSelfRef.tpu__DOT__state))) {
                        if ((0x0cU != (IData)(vlSelfRef.tpu__DOT__state))) {
                            if ((0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) {
                                vlSelfRef.tpu__DOT__spad_ren = 1U;
                                vlSelfRef.tpu__DOT__spad_raddr 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.tpu__DOT__gemm_idx_reg));
                                vlSelfRef.tpu__DOT__spad_rspad 
                                    = ((0U == (IData)(vlSelfRef.tpu__DOT__gemm_load_phase_reg))
                                        ? (IData)(vlSelfRef.tpu__DOT__gemm_spad_a_reg)
                                        : (IData)(vlSelfRef.tpu__DOT__gemm_spad_b_reg));
                            }
                        }
                    }
                }
            }
        }
    }
    while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k)) {
        vlSelfRef.tpu__DOT__sys_a_row[(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k)] = 0U;
        vlSelfRef.tpu__DOT__sys_b_col[(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k)] = 0U;
        vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k 
            = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk1__DOT__k);
    }
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                        | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                   | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (7U == (IData)(vlSelfRef.tpu__DOT__state)))))) {
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i = 0U;
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j = 0U;
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)) {
                    vlSelfRef.tpu__DOT__sys_a_row[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_M_reg)) 
                             & VL_GTES_III(32, 0U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)) 
                            & ((- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_a
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i)]
                           [(7U & (- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i))]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk2__DOT__i);
                }
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)) {
                    vlSelfRef.tpu__DOT__sys_b_col[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)) 
                             & VL_GTES_III(32, 0U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)) 
                            & ((- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_b
                           [(7U & (- vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j))]
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j)]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk3__DOT__j);
                }
            } else if ((0x11U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i = 0U;
                vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j = 0U;
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)) {
                    vlSelfRef.tpu__DOT__sys_a_row[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_M_reg)) 
                             & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                >= vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)) 
                            & (((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_a
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i)]
                           [(7U & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                   - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i))]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk4__DOT__i);
                }
                while (VL_GTS_III(32, 8U, vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)) {
                    vlSelfRef.tpu__DOT__sys_b_col[(7U 
                                                   & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)] 
                        = ((((vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j 
                              < (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)) 
                             & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                >= vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)) 
                            & (((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j) 
                               < (IData)(vlSelfRef.tpu__DOT__gemm_K_reg)))
                            ? vlSelfRef.tpu__DOT__stage_b
                           [(7U & ((IData)(vlSelfRef.tpu__DOT__gemm_t_reg) 
                                   - vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j))]
                           [(7U & vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j)]
                            : 0U);
                    vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j 
                        = ((IData)(1U) + vlSelfRef.tpu__DOT__state_machine_comb__DOT__unnamedblk5__DOT__j);
                }
            }
        }
    }
    vlSelfRef.tpu__DOT__sys_start = 0U;
    vlSelfRef.tpu__DOT__sys_valid = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                        | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                   | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (7U == (IData)(vlSelfRef.tpu__DOT__state)))))) {
        if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                            | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                           | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                          | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                         | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))))) {
            if ((0x10U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__sys_start = 1U;
                vlSelfRef.tpu__DOT__sys_valid = 1U;
            } else if ((0x11U == (IData)(vlSelfRef.tpu__DOT__state))) {
                vlSelfRef.tpu__DOT__sys_valid = 1U;
            }
        }
    }
    vlSelfRef.commit_en = vlSelfRef.tpu__DOT__commit_en;
    vlSelfRef.mem_wen = vlSelfRef.tpu__DOT__mem_wen;
    vlSelfRef.mem_ren = vlSelfRef.tpu__DOT__mem_ren;
    vlSelfRef.mem_raddr = vlSelfRef.tpu__DOT__mem_raddr;
    vlSelfRef.mem_waddr = vlSelfRef.tpu__DOT__mem_waddr;
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[0U] = vlSelfRef.tpu__DOT__sys_a_row
        [0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[1U] = vlSelfRef.tpu__DOT__sys_a_row
        [1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[2U] = vlSelfRef.tpu__DOT__sys_a_row
        [2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[3U] = vlSelfRef.tpu__DOT__sys_a_row
        [3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[4U] = vlSelfRef.tpu__DOT__sys_a_row
        [4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[5U] = vlSelfRef.tpu__DOT__sys_a_row
        [5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[6U] = vlSelfRef.tpu__DOT__sys_a_row
        [6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[7U] = vlSelfRef.tpu__DOT__sys_a_row
        [7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[0U] = vlSelfRef.tpu__DOT__sys_b_col
        [0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[1U] = vlSelfRef.tpu__DOT__sys_b_col
        [1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[2U] = vlSelfRef.tpu__DOT__sys_b_col
        [2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[3U] = vlSelfRef.tpu__DOT__sys_b_col
        [3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[4U] = vlSelfRef.tpu__DOT__sys_b_col
        [4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[5U] = vlSelfRef.tpu__DOT__sys_b_col
        [5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[6U] = vlSelfRef.tpu__DOT__sys_b_col
        [6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[7U] = vlSelfRef.tpu__DOT__sys_b_col
        [7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__start = vlSelfRef.tpu__DOT__sys_start;
    vlSelfRef.tpu__DOT__sys_arr__DOT__valid = vlSelfRef.tpu__DOT__sys_valid;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_row[7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_col[7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc = vlSelfRef.tpu__DOT__sys_arr__DOT__start;
    vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc = vlSelfRef.tpu__DOT__sys_arr__DOT__valid;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__clear 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__clear_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__en 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__en_acc;
}

void Vtop___024root___nba_sequent__TOP__66(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__66\n"); );
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

void Vtop___024root___nba_sequent__TOP__67(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__67\n"); );
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

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[0U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[0U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[1U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[1U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[2U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[2U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[3U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[3U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[4U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[4U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[5U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[5U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[6U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[6U][7U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][0U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][0U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][1U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][1U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][2U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][2U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][3U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][3U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][4U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][4U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][5U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][5U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][6U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][6U];
    vlSelfRef.tpu__DOT____Vcellout__sys_arr__c[7U][7U] 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__c[7U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [0U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [1U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [2U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [3U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [4U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [5U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [6U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__a_connects
        [7U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][0U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [0U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [1U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [2U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [3U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [4U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [5U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][1U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][2U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][3U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][4U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][5U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][6U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in 
        = vlSelfRef.tpu__DOT__sys_arr__DOT__b_connects
        [6U][7U];
    vlSelfRef.tpu__DOT__sys_c[0U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][0U];
    vlSelfRef.tpu__DOT__sys_c[0U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][1U];
    vlSelfRef.tpu__DOT__sys_c[0U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][2U];
    vlSelfRef.tpu__DOT__sys_c[0U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][3U];
    vlSelfRef.tpu__DOT__sys_c[0U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][4U];
    vlSelfRef.tpu__DOT__sys_c[0U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][5U];
    vlSelfRef.tpu__DOT__sys_c[0U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][6U];
    vlSelfRef.tpu__DOT__sys_c[0U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [0U][7U];
    vlSelfRef.tpu__DOT__sys_c[1U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][0U];
    vlSelfRef.tpu__DOT__sys_c[1U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][1U];
    vlSelfRef.tpu__DOT__sys_c[1U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][2U];
    vlSelfRef.tpu__DOT__sys_c[1U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][3U];
    vlSelfRef.tpu__DOT__sys_c[1U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][4U];
    vlSelfRef.tpu__DOT__sys_c[1U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][5U];
    vlSelfRef.tpu__DOT__sys_c[1U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][6U];
    vlSelfRef.tpu__DOT__sys_c[1U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [1U][7U];
    vlSelfRef.tpu__DOT__sys_c[2U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][0U];
    vlSelfRef.tpu__DOT__sys_c[2U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][1U];
    vlSelfRef.tpu__DOT__sys_c[2U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][2U];
    vlSelfRef.tpu__DOT__sys_c[2U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][3U];
    vlSelfRef.tpu__DOT__sys_c[2U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][4U];
    vlSelfRef.tpu__DOT__sys_c[2U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][5U];
    vlSelfRef.tpu__DOT__sys_c[2U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][6U];
    vlSelfRef.tpu__DOT__sys_c[2U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [2U][7U];
    vlSelfRef.tpu__DOT__sys_c[3U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][0U];
    vlSelfRef.tpu__DOT__sys_c[3U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][1U];
    vlSelfRef.tpu__DOT__sys_c[3U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][2U];
    vlSelfRef.tpu__DOT__sys_c[3U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][3U];
    vlSelfRef.tpu__DOT__sys_c[3U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][4U];
    vlSelfRef.tpu__DOT__sys_c[3U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][5U];
    vlSelfRef.tpu__DOT__sys_c[3U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][6U];
    vlSelfRef.tpu__DOT__sys_c[3U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [3U][7U];
    vlSelfRef.tpu__DOT__sys_c[4U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][0U];
    vlSelfRef.tpu__DOT__sys_c[4U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][1U];
    vlSelfRef.tpu__DOT__sys_c[4U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][2U];
    vlSelfRef.tpu__DOT__sys_c[4U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][3U];
    vlSelfRef.tpu__DOT__sys_c[4U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][4U];
    vlSelfRef.tpu__DOT__sys_c[4U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][5U];
    vlSelfRef.tpu__DOT__sys_c[4U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][6U];
    vlSelfRef.tpu__DOT__sys_c[4U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [4U][7U];
    vlSelfRef.tpu__DOT__sys_c[5U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][0U];
    vlSelfRef.tpu__DOT__sys_c[5U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][1U];
    vlSelfRef.tpu__DOT__sys_c[5U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][2U];
    vlSelfRef.tpu__DOT__sys_c[5U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][3U];
    vlSelfRef.tpu__DOT__sys_c[5U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][4U];
    vlSelfRef.tpu__DOT__sys_c[5U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][5U];
    vlSelfRef.tpu__DOT__sys_c[5U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][6U];
    vlSelfRef.tpu__DOT__sys_c[5U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [5U][7U];
    vlSelfRef.tpu__DOT__sys_c[6U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][0U];
    vlSelfRef.tpu__DOT__sys_c[6U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][1U];
    vlSelfRef.tpu__DOT__sys_c[6U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][2U];
    vlSelfRef.tpu__DOT__sys_c[6U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][3U];
    vlSelfRef.tpu__DOT__sys_c[6U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][4U];
    vlSelfRef.tpu__DOT__sys_c[6U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][5U];
    vlSelfRef.tpu__DOT__sys_c[6U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][6U];
    vlSelfRef.tpu__DOT__sys_c[6U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [6U][7U];
    vlSelfRef.tpu__DOT__sys_c[7U][0U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][0U];
    vlSelfRef.tpu__DOT__sys_c[7U][1U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][1U];
    vlSelfRef.tpu__DOT__sys_c[7U][2U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][2U];
    vlSelfRef.tpu__DOT__sys_c[7U][3U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][3U];
    vlSelfRef.tpu__DOT__sys_c[7U][4U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][4U];
    vlSelfRef.tpu__DOT__sys_c[7U][5U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][5U];
    vlSelfRef.tpu__DOT__sys_c[7U][6U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][6U];
    vlSelfRef.tpu__DOT__sys_c[7U][7U] = vlSelfRef.tpu__DOT____Vcellout__sys_arr__c
        [7U][7U];
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tpu__DOT__state_next = vlSelfRef.tpu__DOT__state;
    vlSelfRef.tpu__DOT__state_next = (0x0000001fU & 
                                      (((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                                              | (1U 
                                                 == (IData)(vlSelfRef.tpu__DOT__state))) 
                                             | (2U 
                                                == (IData)(vlSelfRef.tpu__DOT__state))) 
                                            | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                                           | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                                          | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                                         | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                                        | (7U == (IData)(vlSelfRef.tpu__DOT__state)))
                                        ? ((0U == (IData)(vlSelfRef.tpu__DOT__state))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelfRef.tpu__DOT__instruction 
                                                           >> 0x0000003fU)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.tpu__DOT__instruction 
                                                               >> 0x0000003eU)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.tpu__DOT__instruction 
                                                                >> 0x0000003dU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__instruction 
                                                                 >> 0x0000003cU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tpu__DOT__instruction 
                                                                  >> 0x0000003bU)))
                                                       ? 0x0bU
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.tpu__DOT__instruction 
                                                                >> 0x0000003dU)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__instruction 
                                                                 >> 0x0000003cU)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tpu__DOT__instruction 
                                                                  >> 0x0000003bU)))
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.tpu__DOT__instruction 
                                                               >> 0x0000003eU)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.tpu__DOT__instruction 
                                                                >> 0x0000003dU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tpu__DOT__instruction 
                                                                 >> 0x0000003cU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tpu__DOT__instruction 
                                                                  >> 0x0000003bU)))
                                                       ? 2U
                                                       : 7U)
                                                      : 0U)
                                                     : 0U)))
                                            : ((1U 
                                                == (IData)(vlSelfRef.tpu__DOT__state))
                                                ? 0x15U
                                                : (
                                                   (2U 
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
                                                         ? 0x15U
                                                         : 4U)
                                                        : 8U)))))))
                                        : (((((((((8U 
                                                   == (IData)(vlSelfRef.tpu__DOT__state)) 
                                                  | (9U 
                                                     == (IData)(vlSelfRef.tpu__DOT__state))) 
                                                 | (0x0aU 
                                                    == (IData)(vlSelfRef.tpu__DOT__state))) 
                                                | (0x0bU 
                                                   == (IData)(vlSelfRef.tpu__DOT__state))) 
                                               | (0x0cU 
                                                  == (IData)(vlSelfRef.tpu__DOT__state))) 
                                              | (0x0dU 
                                                 == (IData)(vlSelfRef.tpu__DOT__state))) 
                                             | (0x0eU 
                                                == (IData)(vlSelfRef.tpu__DOT__state))) 
                                            | (0x0fU 
                                               == (IData)(vlSelfRef.tpu__DOT__state)))
                                            ? ((8U 
                                                == (IData)(vlSelfRef.tpu__DOT__state))
                                                ? 9U
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelfRef.tpu__DOT__state))
                                                    ? 0x0aU
                                                    : 
                                                   ((0x0aU 
                                                     == (IData)(vlSelfRef.tpu__DOT__state))
                                                     ? 
                                                    (((0x0000ffffU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelfRef.tpu__DOT__load_idx_reg))) 
                                                      >= (IData)(vlSelfRef.tpu__DOT__load_total_reg))
                                                      ? 0x15U
                                                      : 9U)
                                                     : 
                                                    ((0x0bU 
                                                      == (IData)(vlSelfRef.tpu__DOT__state))
                                                      ? 0x0cU
                                                      : 
                                                     ((0x0cU 
                                                       == (IData)(vlSelfRef.tpu__DOT__state))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(vlSelfRef.tpu__DOT__gemm_meta_phase_reg))
                                                        ? 0x0dU
                                                        : 0x0bU)
                                                       : 
                                                      ((0x0dU 
                                                        == (IData)(vlSelfRef.tpu__DOT__state))
                                                        ? 0x0eU
                                                        : 
                                                       ((0x0eU 
                                                         == (IData)(vlSelfRef.tpu__DOT__state))
                                                         ? 0x0fU
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelfRef.tpu__DOT__gemm_load_phase_reg))
                                                          ? 0x10U
                                                          : 0x0dU))))))))
                                            : ((0x10U 
                                                == (IData)(vlSelfRef.tpu__DOT__state))
                                                ? 0x11U
                                                : (
                                                   (0x11U 
                                                    == (IData)(vlSelfRef.tpu__DOT__state))
                                                    ? 
                                                   ((((IData)(1U) 
                                                      + (IData)(vlSelfRef.tpu__DOT__gemm_t_reg)) 
                                                     >= 
                                                     ((((IData)(vlSelfRef.tpu__DOT__gemm_K_reg) 
                                                        + (IData)(vlSelfRef.tpu__DOT__gemm_M_reg)) 
                                                       + (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)) 
                                                      - (IData)(2U)))
                                                     ? 0x12U
                                                     : 0x11U)
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelfRef.tpu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelfRef.tpu__DOT__sys_done)
                                                      ? 0x13U
                                                      : 0x12U)
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelfRef.tpu__DOT__state))
                                                      ? 0x14U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelfRef.tpu__DOT__state))
                                                       ? 
                                                      ((((IData)(1U) 
                                                         + (IData)(vlSelfRef.tpu__DOT__gemm_store_idx_reg)) 
                                                        >= 
                                                        ((IData)(vlSelfRef.tpu__DOT__gemm_M_reg) 
                                                         * (IData)(vlSelfRef.tpu__DOT__gemm_N_reg)))
                                                        ? 0x15U
                                                        : 0x14U)
                                                       : 0U))))))));
}

void Vtop___024root___nba_sequent__TOP__68(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__68\n"); );
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
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_ren = vlSelfRef.tpu__DOT__spad_ren;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_rspad = vlSelfRef.tpu__DOT__spad_rspad;
    vlSelfRef.tpu__DOT__sp_i__DOT__spad_raddr = vlSelfRef.tpu__DOT__spad_raddr;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tpu__DOT__mem_wdata = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.tpu__DOT__state)) 
                        | (1U == (IData)(vlSelfRef.tpu__DOT__state))) 
                       | (2U == (IData)(vlSelfRef.tpu__DOT__state))) 
                      | (3U == (IData)(vlSelfRef.tpu__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tpu__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.tpu__DOT__state))) 
                   | (6U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (7U == (IData)(vlSelfRef.tpu__DOT__state)))))) {
        if (((((((((8U == (IData)(vlSelfRef.tpu__DOT__state)) 
                   | (9U == (IData)(vlSelfRef.tpu__DOT__state))) 
                  | (0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) 
                 | (0x0bU == (IData)(vlSelfRef.tpu__DOT__state))) 
                | (0x0cU == (IData)(vlSelfRef.tpu__DOT__state))) 
               | (0x0dU == (IData)(vlSelfRef.tpu__DOT__state))) 
              | (0x0eU == (IData)(vlSelfRef.tpu__DOT__state))) 
             | (0x0fU == (IData)(vlSelfRef.tpu__DOT__state)))) {
            if ((8U != (IData)(vlSelfRef.tpu__DOT__state))) {
                if ((9U != (IData)(vlSelfRef.tpu__DOT__state))) {
                    if ((0x0aU == (IData)(vlSelfRef.tpu__DOT__state))) {
                        vlSelfRef.tpu__DOT__mem_wdata 
                            = vlSelfRef.tpu__DOT__spad_rdata;
                    }
                }
            }
        }
    }
    vlSelfRef.mem_wdata = vlSelfRef.tpu__DOT__mem_wdata;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__1__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__2__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__3__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__4__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__5__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__6__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__0__KET____DOT__cols_body__BRA__7__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__1__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__2__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__3__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__4__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__5__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__6__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
    vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__prod 
        = (0x0000ffffU & ((IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__a_in) 
                          * (IData)(vlSelfRef.tpu__DOT__sys_arr__DOT__rows_body__BRA__7__KET____DOT__cols_body__BRA__0__KET____DOT__mac_grid__DOT__b_in)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000018000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000060000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000180000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000001800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000006000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000018000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000060000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000180000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000600000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000001800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000006000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0000018000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000060000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x0000180000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x0000600000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x0001800000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x0006000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x0018000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x0060000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x0180000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x0600000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x1800000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x6000000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__29(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x8000000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered
                                                   [0U]))) {
        Vtop___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vtop___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((0x0000000000018000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__38(vlSelf);
    }
    if ((0x0000000000060000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__39(vlSelf);
    }
    if ((0x0000000000180000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__41(vlSelf);
    }
    if ((0x0000000001800000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x0000000006000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__43(vlSelf);
    }
    if ((0x0000000018000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__44(vlSelf);
    }
    if ((0x0000000060000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__45(vlSelf);
    }
    if ((0x0000000180000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__46(vlSelf);
    }
    if ((0x0000000600000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__47(vlSelf);
    }
    if ((0x0000001800000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__48(vlSelf);
    }
    if ((0x0000006000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__49(vlSelf);
    }
    if ((0x0000018000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__50(vlSelf);
    }
    if ((0x0000060000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__51(vlSelf);
    }
    if ((0x0000180000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__52(vlSelf);
    }
    if ((0x0000600000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__53(vlSelf);
    }
    if ((0x0001800000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__54(vlSelf);
    }
    if ((0x0006000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__55(vlSelf);
    }
    if ((0x0018000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((0x0060000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((0x0180000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__58(vlSelf);
    }
    if ((0x0600000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__59(vlSelf);
    }
    if ((0x1800000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__60(vlSelf);
    }
    if ((0x6000000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__61(vlSelf);
    }
    if (((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (1ULL & vlSelfRef.__VnbaTriggered
                   [2U]))) {
        Vtop___024root___nba_sequent__TOP__62(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[2U])) {
        Vtop___024root___nba_sequent__TOP__63(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vtop___024root___nba_sequent__TOP__64(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__65(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__66(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__67(vlSelf);
    }
    if (((vlSelfRef.__VnbaTriggered[1U] | (0x000000000000001fULL 
                                           & vlSelfRef.__VnbaTriggered
                                           [2U])) | 
         (0xffffffffffffffe0ULL & vlSelfRef.__VnbaTriggered
          [0U]))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__68(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if (((vlSelfRef.__VnbaTriggered[1U] | (0x000000000000001fULL 
                                           & vlSelfRef.__VnbaTriggered
                                           [2U])) | 
         (0xffffffffffffffe1ULL & vlSelfRef.__VnbaTriggered
          [0U]))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((3U > n));
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

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 3> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((3U > n));
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
