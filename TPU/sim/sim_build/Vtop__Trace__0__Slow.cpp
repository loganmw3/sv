// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"mem_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"mem_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"mem_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"commit_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"NUM_SPADS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"SPAD_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+17,0,"mem_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"mem_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"mem_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"commit_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"CONFIGURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"LOAD_META_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"LOAD_META_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"LOAD_READ_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"LOAD_READ_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"LOAD_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"STORE_READ_SPAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"STORE_MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"GEMM_PREP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"GEMM_RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"GEMM_WAIT_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"COMMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"OPCODE_CONFIG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+128,0,"OPCODE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"OPCODE_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+130,0,"OPCODE_GEMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+27,0,"meta_mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"meta_mem_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("meta_mem_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+29,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+33,0,"meta_mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"meta_mem_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("meta_mem_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+35,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+39,0,"load_spad_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"load_ptr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"load_rows_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"load_cols_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"load_total_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"load_idx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"load_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+46,0,"spad_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"spad_wspad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"spad_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"spad_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+50,0,"spad_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"spad_rspad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"spad_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"spad_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("metadata_regs_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"NUM_SPADS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"meta_mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"meta_mem_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+58,0,"meta_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"meta_mem_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("meta_mem_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+60,0,"rows",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"cols",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("meta_mem_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+64,0,"rows",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"cols",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("meta_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+72,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+76,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+80,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+84,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+88,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+92,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+96,0,"rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"cols",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("scratchpad_metadata", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sp_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+131,0,"NUM_SPADS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+114,0,"SPAD_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+101,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"spad_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"spad_wspad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"spad_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"spad_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+107,0,"spad_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"spad_rspad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"spad_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+110,0,"spad_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+113,(8U),32);
    bufp->fullIData(oldp+114,(0x00000100U),32);
    bufp->fullIData(oldp+115,(0U),32);
    bufp->fullIData(oldp+116,(1U),32);
    bufp->fullIData(oldp+117,(2U),32);
    bufp->fullIData(oldp+118,(3U),32);
    bufp->fullIData(oldp+119,(4U),32);
    bufp->fullIData(oldp+120,(5U),32);
    bufp->fullIData(oldp+121,(6U),32);
    bufp->fullIData(oldp+122,(7U),32);
    bufp->fullIData(oldp+123,(9U),32);
    bufp->fullIData(oldp+124,(0x0000000aU),32);
    bufp->fullIData(oldp+125,(0x0000000bU),32);
    bufp->fullIData(oldp+126,(0x0000000cU),32);
    bufp->fullCData(oldp+127,(0x11U),5);
    bufp->fullCData(oldp+128,(7U),5);
    bufp->fullCData(oldp+129,(6U),5);
    bufp->fullCData(oldp+130,(0x1fU),5);
    bufp->fullIData(oldp+131,(8U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst));
    bufp->fullQData(oldp+3,(vlSelfRef.instruction),64);
    bufp->fullIData(oldp+5,(vlSelfRef.mem_raddr),32);
    bufp->fullBit(oldp+6,(vlSelfRef.mem_ren));
    bufp->fullCData(oldp+7,(vlSelfRef.mem_rdata),8);
    bufp->fullBit(oldp+8,(vlSelfRef.mem_rvalid));
    bufp->fullIData(oldp+9,(vlSelfRef.mem_waddr),32);
    bufp->fullCData(oldp+10,(vlSelfRef.mem_wdata),8);
    bufp->fullBit(oldp+11,(vlSelfRef.mem_wen));
    bufp->fullBit(oldp+12,(vlSelfRef.commit_en));
    bufp->fullBit(oldp+13,(vlSelfRef.tpu__DOT__clk));
    bufp->fullBit(oldp+14,(vlSelfRef.tpu__DOT__rst));
    bufp->fullQData(oldp+15,(vlSelfRef.tpu__DOT__instruction),64);
    bufp->fullIData(oldp+17,(vlSelfRef.tpu__DOT__mem_raddr),32);
    bufp->fullBit(oldp+18,(vlSelfRef.tpu__DOT__mem_ren));
    bufp->fullCData(oldp+19,(vlSelfRef.tpu__DOT__mem_rdata),8);
    bufp->fullBit(oldp+20,(vlSelfRef.tpu__DOT__mem_rvalid));
    bufp->fullIData(oldp+21,(vlSelfRef.tpu__DOT__mem_waddr),32);
    bufp->fullCData(oldp+22,(vlSelfRef.tpu__DOT__mem_wdata),8);
    bufp->fullBit(oldp+23,(vlSelfRef.tpu__DOT__mem_wen));
    bufp->fullBit(oldp+24,(vlSelfRef.tpu__DOT__commit_en));
    bufp->fullCData(oldp+25,(vlSelfRef.tpu__DOT__state),4);
    bufp->fullCData(oldp+26,(vlSelfRef.tpu__DOT__state_next),4);
    bufp->fullBit(oldp+27,(vlSelfRef.tpu__DOT__meta_mem_wen));
    bufp->fullCData(oldp+28,(vlSelfRef.tpu__DOT__meta_mem_waddr),3);
    bufp->fullCData(oldp+29,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__meta_mem_wdata 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+30,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__meta_mem_wdata 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+31,((IData)((vlSelfRef.tpu__DOT__meta_mem_wdata 
                                      >> 1U))),32);
    bufp->fullBit(oldp+32,((1U & (IData)(vlSelfRef.tpu__DOT__meta_mem_wdata))));
    bufp->fullBit(oldp+33,(vlSelfRef.tpu__DOT__meta_mem_ren));
    bufp->fullCData(oldp+34,(vlSelfRef.tpu__DOT__meta_mem_raddr),3);
    bufp->fullCData(oldp+35,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+36,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__meta_mem_rdata 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+37,((IData)((vlSelfRef.tpu__DOT__meta_mem_rdata 
                                      >> 1U))),32);
    bufp->fullBit(oldp+38,((1U & (IData)(vlSelfRef.tpu__DOT__meta_mem_rdata))));
    bufp->fullCData(oldp+39,(vlSelfRef.tpu__DOT__load_spad_reg),3);
    bufp->fullIData(oldp+40,(vlSelfRef.tpu__DOT__load_ptr_reg),32);
    bufp->fullCData(oldp+41,(vlSelfRef.tpu__DOT__load_rows_reg),8);
    bufp->fullCData(oldp+42,(vlSelfRef.tpu__DOT__load_cols_reg),8);
    bufp->fullSData(oldp+43,(vlSelfRef.tpu__DOT__load_total_reg),16);
    bufp->fullSData(oldp+44,(vlSelfRef.tpu__DOT__load_idx_reg),16);
    bufp->fullCData(oldp+45,(vlSelfRef.tpu__DOT__load_data_reg),8);
    bufp->fullBit(oldp+46,(vlSelfRef.tpu__DOT__spad_wen));
    bufp->fullCData(oldp+47,(vlSelfRef.tpu__DOT__spad_wspad),3);
    bufp->fullCData(oldp+48,(vlSelfRef.tpu__DOT__spad_waddr),8);
    bufp->fullCData(oldp+49,(vlSelfRef.tpu__DOT__spad_wdata),8);
    bufp->fullBit(oldp+50,(vlSelfRef.tpu__DOT__spad_ren));
    bufp->fullCData(oldp+51,(vlSelfRef.tpu__DOT__spad_rspad),3);
    bufp->fullCData(oldp+52,(vlSelfRef.tpu__DOT__spad_raddr),8);
    bufp->fullCData(oldp+53,(vlSelfRef.tpu__DOT__spad_rdata),8);
    bufp->fullBit(oldp+54,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__clk));
    bufp->fullBit(oldp+55,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__rst));
    bufp->fullBit(oldp+56,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren));
    bufp->fullCData(oldp+57,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr),3);
    bufp->fullBit(oldp+58,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen));
    bufp->fullCData(oldp+59,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr),3);
    bufp->fullCData(oldp+60,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+61,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+62,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata 
                                      >> 1U))),32);
    bufp->fullBit(oldp+63,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata))));
    bufp->fullCData(oldp+64,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+65,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+66,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata 
                                      >> 1U))),32);
    bufp->fullBit(oldp+67,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata))));
    bufp->fullCData(oldp+68,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [0U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+69,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [0U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+70,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [0U] >> 1U))),32);
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [0U]))));
    bufp->fullCData(oldp+72,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [1U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+73,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [1U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+74,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [1U] >> 1U))),32);
    bufp->fullBit(oldp+75,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [1U]))));
    bufp->fullCData(oldp+76,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [2U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+77,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [2U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+78,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [2U] >> 1U))),32);
    bufp->fullBit(oldp+79,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [2U]))));
    bufp->fullCData(oldp+80,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [3U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+81,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [3U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+82,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [3U] >> 1U))),32);
    bufp->fullBit(oldp+83,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [3U]))));
    bufp->fullCData(oldp+84,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [4U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+85,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [4U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+86,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [4U] >> 1U))),32);
    bufp->fullBit(oldp+87,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [4U]))));
    bufp->fullCData(oldp+88,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [5U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+89,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [5U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+90,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [5U] >> 1U))),32);
    bufp->fullBit(oldp+91,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [5U]))));
    bufp->fullCData(oldp+92,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [6U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+93,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [6U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+94,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [6U] >> 1U))),32);
    bufp->fullBit(oldp+95,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [6U]))));
    bufp->fullCData(oldp+96,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [7U] 
                                                     >> 0x00000029U)))),8);
    bufp->fullCData(oldp+97,((0x000000ffU & (IData)(
                                                    (vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                                     [7U] 
                                                     >> 0x00000021U)))),8);
    bufp->fullIData(oldp+98,((IData)((vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                      [7U] >> 1U))),32);
    bufp->fullBit(oldp+99,((1U & (IData)(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__meta_mem
                                         [7U]))));
    bufp->fullIData(oldp+100,(vlSelfRef.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+101,(vlSelfRef.tpu__DOT__sp_i__DOT__clk));
    bufp->fullBit(oldp+102,(vlSelfRef.tpu__DOT__sp_i__DOT__rst));
    bufp->fullBit(oldp+103,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_wen));
    bufp->fullCData(oldp+104,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_wspad),3);
    bufp->fullCData(oldp+105,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_waddr),8);
    bufp->fullCData(oldp+106,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_wdata),8);
    bufp->fullBit(oldp+107,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_ren));
    bufp->fullCData(oldp+108,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_rspad),3);
    bufp->fullCData(oldp+109,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_raddr),8);
    bufp->fullCData(oldp+110,(vlSelfRef.tpu__DOT__sp_i__DOT__spad_rdata),8);
    bufp->fullIData(oldp+111,(vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+112,(vlSelfRef.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
}
