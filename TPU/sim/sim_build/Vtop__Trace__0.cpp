// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgQData(oldp+2,(vlSelfRef.instruction),64);
    bufp->chgIData(oldp+4,(vlSelfRef.mem_raddr),32);
    bufp->chgBit(oldp+5,(vlSelfRef.mem_ren));
    bufp->chgCData(oldp+6,(vlSelfRef.mem_rdata),8);
    bufp->chgBit(oldp+7,(vlSelfRef.mem_rvalid));
    bufp->chgIData(oldp+8,(vlSelfRef.mem_waddr),32);
    bufp->chgCData(oldp+9,(vlSelfRef.mem_wdata),8);
    bufp->chgBit(oldp+10,(vlSelfRef.mem_wen));
    bufp->chgBit(oldp+11,(vlSelfRef.commit_en));
    bufp->chgBit(oldp+12,(vlSelfRef.tpu__DOT__clk));
    bufp->chgBit(oldp+13,(vlSelfRef.tpu__DOT__rst));
    bufp->chgQData(oldp+14,(vlSelfRef.tpu__DOT__instruction),64);
    bufp->chgIData(oldp+16,(vlSelfRef.tpu__DOT__mem_raddr),32);
    bufp->chgBit(oldp+17,(vlSelfRef.tpu__DOT__mem_ren));
    bufp->chgCData(oldp+18,(vlSelfRef.tpu__DOT__mem_rdata),8);
    bufp->chgBit(oldp+19,(vlSelfRef.tpu__DOT__mem_rvalid));
    bufp->chgIData(oldp+20,(vlSelfRef.tpu__DOT__mem_waddr),32);
    bufp->chgCData(oldp+21,(vlSelfRef.tpu__DOT__mem_wdata),8);
    bufp->chgBit(oldp+22,(vlSelfRef.tpu__DOT__mem_wen));
    bufp->chgBit(oldp+23,(vlSelfRef.tpu__DOT__commit_en));
    bufp->chgCData(oldp+24,(vlSelfRef.tpu__DOT__state),4);
    bufp->chgCData(oldp+25,(vlSelfRef.tpu__DOT__state_next),4);
    bufp->chgBit(oldp+26,(vlSelfRef.tpu__DOT__meta_mem_wen));
    bufp->chgCData(oldp+27,(vlSelfRef.tpu__DOT__meta_mem_waddr),3);
    bufp->chgCData(oldp+28,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__meta_mem_wdata 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+29,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__meta_mem_wdata 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+30,((IData)((vlSelfRef.tpu__DOT__meta_mem_wdata 
                                     >> 1U))),32);
    bufp->chgBit(oldp+31,((1U & (IData)(vlSelfRef.tpu__DOT__meta_mem_wdata))));
    bufp->chgBit(oldp+32,(vlSelfRef.tpu__DOT__meta_mem_ren));
    bufp->chgCData(oldp+33,(vlSelfRef.tpu__DOT__meta_mem_raddr),3);
    bufp->chgCData(oldp+34,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+35,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+36,((IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                     >> 1U))),32);
    bufp->chgBit(oldp+37,((1U & (IData)(vlSelfRef.tpu__DOT__meta_mem_rdata))));
    bufp->chgCData(oldp+38,(vlSelfRef.tpu__DOT__load_spad_reg),3);
    bufp->chgIData(oldp+39,(vlSelfRef.tpu__DOT__load_ptr_reg),32);
    bufp->chgCData(oldp+40,(vlSelfRef.tpu__DOT__load_rows_reg),8);
    bufp->chgCData(oldp+41,(vlSelfRef.tpu__DOT__load_cols_reg),8);
    bufp->chgSData(oldp+42,(vlSelfRef.tpu__DOT__load_total_reg),16);
    bufp->chgSData(oldp+43,(vlSelfRef.tpu__DOT__load_idx_reg),16);
    bufp->chgCData(oldp+44,(vlSelfRef.tpu__DOT__load_data_reg),8);
    bufp->chgBit(oldp+45,(vlSelfRef.tpu__DOT__spad_wen));
    bufp->chgCData(oldp+46,(vlSelfRef.tpu__DOT__spad_wspad),3);
    bufp->chgCData(oldp+47,(vlSelfRef.tpu__DOT__spad_waddr),8);
    bufp->chgCData(oldp+48,(vlSelfRef.tpu__DOT__spad_wdata),8);
    bufp->chgBit(oldp+49,(vlSelfRef.tpu__DOT__spad_ren));
    bufp->chgCData(oldp+50,(vlSelfRef.tpu__DOT__spad_rspad),3);
    bufp->chgCData(oldp+51,(vlSelfRef.tpu__DOT__spad_raddr),8);
    bufp->chgCData(oldp+52,(vlSelfRef.tpu__DOT__spad_rdata),8);
    bufp->chgBit(oldp+53,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk));
    bufp->chgBit(oldp+54,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst));
    bufp->chgBit(oldp+55,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren));
    bufp->chgCData(oldp+56,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr),3);
    bufp->chgBit(oldp+57,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen));
    bufp->chgCData(oldp+58,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr),3);
    bufp->chgCData(oldp+59,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+60,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+61,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
                                     >> 1U))),32);
    bufp->chgBit(oldp+62,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata))));
    bufp->chgCData(oldp+63,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+64,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+65,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata 
                                     >> 1U))),32);
    bufp->chgBit(oldp+66,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata))));
    bufp->chgCData(oldp+67,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [0U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+68,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [0U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+69,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [0U] >> 1U))),32);
    bufp->chgBit(oldp+70,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [0U]))));
    bufp->chgCData(oldp+71,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [1U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+72,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [1U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+73,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [1U] >> 1U))),32);
    bufp->chgBit(oldp+74,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [1U]))));
    bufp->chgCData(oldp+75,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [2U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+76,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [2U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+77,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [2U] >> 1U))),32);
    bufp->chgBit(oldp+78,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [2U]))));
    bufp->chgCData(oldp+79,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [3U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+80,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [3U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+81,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [3U] >> 1U))),32);
    bufp->chgBit(oldp+82,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [3U]))));
    bufp->chgCData(oldp+83,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [4U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+84,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [4U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+85,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [4U] >> 1U))),32);
    bufp->chgBit(oldp+86,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [4U]))));
    bufp->chgCData(oldp+87,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [5U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+88,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [5U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+89,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [5U] >> 1U))),32);
    bufp->chgBit(oldp+90,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [5U]))));
    bufp->chgCData(oldp+91,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [6U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+92,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [6U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+93,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [6U] >> 1U))),32);
    bufp->chgBit(oldp+94,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [6U]))));
    bufp->chgCData(oldp+95,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [7U] 
                                                    >> 0x00000029U)))),8);
    bufp->chgCData(oldp+96,((0x000000ffU & (IData)(
                                                   (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                    [7U] 
                                                    >> 0x00000021U)))),8);
    bufp->chgIData(oldp+97,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                     [7U] >> 1U))),32);
    bufp->chgBit(oldp+98,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                        [7U]))));
    bufp->chgIData(oldp+99,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i),32);
    bufp->chgBit(oldp+100,(vlSelfRef.tpu__DOT__sp_i__DOT__clk));
    bufp->chgBit(oldp+101,(vlSelfRef.tpu__DOT__sp_i__DOT__rst));
    bufp->chgBit(oldp+102,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen));
    bufp->chgCData(oldp+103,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad),3);
    bufp->chgCData(oldp+104,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr),8);
    bufp->chgCData(oldp+105,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata),8);
    bufp->chgBit(oldp+106,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_ren));
    bufp->chgCData(oldp+107,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_rspad),3);
    bufp->chgCData(oldp+108,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_raddr),8);
    bufp->chgCData(oldp+109,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_rdata),8);
    bufp->chgIData(oldp+110,(vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+111,(vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
