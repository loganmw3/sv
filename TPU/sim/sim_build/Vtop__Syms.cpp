// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_tpu);
    __Vhier.remove(&__Vscope_tpu, &__Vscope_tpu__metadata_regs_i);
    __Vhier.remove(&__Vscope_tpu, &__Vscope_tpu__sp_i);
    __Vhier.remove(&__Vscope_tpu__metadata_regs_i, &__Vscope_tpu__metadata_regs_i__scratchpad_metadata);
    __Vhier.remove(&__Vscope_tpu__metadata_regs_i__scratchpad_metadata, &__Vscope_tpu__metadata_regs_i__scratchpad_metadata__unnamedblk1);
    __Vhier.remove(&__Vscope_tpu__sp_i, &__Vscope_tpu__sp_i__unnamedblk1);
    __Vhier.remove(&__Vscope_tpu__sp_i__unnamedblk1, &__Vscope_tpu__sp_i__unnamedblk1__unnamedblk2);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(284);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tpu.configure(this, name(), "tpu", "tpu", "tpu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tpu__metadata_regs_i.configure(this, name(), "tpu.metadata_regs_i", "metadata_regs_i", "metadata_regs", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tpu__metadata_regs_i__scratchpad_metadata.configure(this, name(), "tpu.metadata_regs_i.scratchpad_metadata", "scratchpad_metadata", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tpu__metadata_regs_i__scratchpad_metadata__unnamedblk1.configure(this, name(), "tpu.metadata_regs_i.scratchpad_metadata.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tpu__sp_i.configure(this, name(), "tpu.sp_i", "sp_i", "scratchpad", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tpu__sp_i__unnamedblk1.configure(this, name(), "tpu.sp_i.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tpu__sp_i__unnamedblk1__unnamedblk2.configure(this, name(), "tpu.sp_i.unnamedblk1.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_tpu);
    __Vhier.add(&__Vscope_tpu, &__Vscope_tpu__metadata_regs_i);
    __Vhier.add(&__Vscope_tpu, &__Vscope_tpu__sp_i);
    __Vhier.add(&__Vscope_tpu__metadata_regs_i, &__Vscope_tpu__metadata_regs_i__scratchpad_metadata);
    __Vhier.add(&__Vscope_tpu__metadata_regs_i__scratchpad_metadata, &__Vscope_tpu__metadata_regs_i__scratchpad_metadata__unnamedblk1);
    __Vhier.add(&__Vscope_tpu__sp_i, &__Vscope_tpu__sp_i__unnamedblk1);
    __Vhier.add(&__Vscope_tpu__sp_i__unnamedblk1, &__Vscope_tpu__sp_i__unnamedblk1__unnamedblk2);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"commit_en", &(TOP.commit_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"instruction", &(TOP.instruction), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_raddr", &(TOP.mem_raddr), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_rdata", &(TOP.mem_rdata), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_ren", &(TOP.mem_ren), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_rvalid", &(TOP.mem_rvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_waddr", &(TOP.mem_waddr), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_wdata", &(TOP.mem_wdata), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_wen", &(TOP.mem_wen), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"COMMIT", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__COMMIT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"CONFIGURE", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__CONFIGURE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"GEMM_PREP", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__GEMM_PREP))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"GEMM_RUN", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__GEMM_RUN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"GEMM_WAIT_DONE", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__GEMM_WAIT_DONE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__IDLE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"LOAD_META_REQ", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__LOAD_META_REQ))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"LOAD_META_WAIT", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__LOAD_META_WAIT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"LOAD_READ_REQ", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__LOAD_READ_REQ))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"LOAD_READ_WAIT", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__LOAD_READ_WAIT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"LOAD_WRITE", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__LOAD_WRITE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"NUM_SPADS", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__NUM_SPADS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"OPCODE_CONFIG", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__OPCODE_CONFIG))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_tpu.varInsert(__Vfinal,"OPCODE_GEMM", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__OPCODE_GEMM))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_tpu.varInsert(__Vfinal,"OPCODE_LOAD", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__OPCODE_LOAD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_tpu.varInsert(__Vfinal,"OPCODE_STORE", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__OPCODE_STORE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_tpu.varInsert(__Vfinal,"SPAD_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__SPAD_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"STORE_MEM_WRITE", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__STORE_MEM_WRITE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"STORE_READ_SPAD", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__STORE_READ_SPAD))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"clk", &(TOP.tpu__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"commit_en", &(TOP.tpu__DOT__commit_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"instruction", &(TOP.tpu__DOT__instruction), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_tpu.varInsert(__Vfinal,"load_cols_reg", &(TOP.tpu__DOT__load_cols_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"load_data_reg", &(TOP.tpu__DOT__load_data_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"load_idx_reg", &(TOP.tpu__DOT__load_idx_reg), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_tpu.varInsert(__Vfinal,"load_ptr_reg", &(TOP.tpu__DOT__load_ptr_reg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"load_rows_reg", &(TOP.tpu__DOT__load_rows_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"load_spad_reg", &(TOP.tpu__DOT__load_spad_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu.varInsert(__Vfinal,"load_total_reg", &(TOP.tpu__DOT__load_total_reg), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_tpu.varInsert(__Vfinal,"mem_raddr", &(TOP.tpu__DOT__mem_raddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"mem_rdata", &(TOP.tpu__DOT__mem_rdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"mem_ren", &(TOP.tpu__DOT__mem_ren), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"mem_rvalid", &(TOP.tpu__DOT__mem_rvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"mem_waddr", &(TOP.tpu__DOT__mem_waddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu.varInsert(__Vfinal,"mem_wdata", &(TOP.tpu__DOT__mem_wdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"mem_wen", &(TOP.tpu__DOT__mem_wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"meta_mem_raddr", &(TOP.tpu__DOT__meta_mem_raddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu.varInsert(__Vfinal,"meta_mem_rdata", &(TOP.tpu__DOT__meta_mem_rdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,48,0);
        __Vscope_tpu.varInsert(__Vfinal,"meta_mem_ren", &(TOP.tpu__DOT__meta_mem_ren), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"meta_mem_waddr", &(TOP.tpu__DOT__meta_mem_waddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu.varInsert(__Vfinal,"meta_mem_wdata", &(TOP.tpu__DOT__meta_mem_wdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,48,0);
        __Vscope_tpu.varInsert(__Vfinal,"meta_mem_wen", &(TOP.tpu__DOT__meta_mem_wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"rst", &(TOP.tpu__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_raddr", &(TOP.tpu__DOT__spad_raddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_rdata", &(TOP.tpu__DOT__spad_rdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_ren", &(TOP.tpu__DOT__spad_ren), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_rspad", &(TOP.tpu__DOT__spad_rspad), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_waddr", &(TOP.tpu__DOT__spad_waddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_wdata", &(TOP.tpu__DOT__spad_wdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_wen", &(TOP.tpu__DOT__spad_wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu.varInsert(__Vfinal,"spad_wspad", &(TOP.tpu__DOT__spad_wspad), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu.varInsert(__Vfinal,"state", &(TOP.tpu__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_tpu.varInsert(__Vfinal,"state_next", &(TOP.tpu__DOT__state_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"NUM_SPADS", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__metadata_regs_i__DOT__NUM_SPADS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"clk", &(TOP.tpu__DOT__metadata_regs_i__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"meta_mem", &(TOP.tpu__DOT__metadata_regs_i__DOT__meta_mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,7 ,48,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"meta_mem_raddr", &(TOP.tpu__DOT__metadata_regs_i__DOT__meta_mem_raddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"meta_mem_rdata", &(TOP.tpu__DOT__metadata_regs_i__DOT__meta_mem_rdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,48,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"meta_mem_ren", &(TOP.tpu__DOT__metadata_regs_i__DOT__meta_mem_ren), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"meta_mem_waddr", &(TOP.tpu__DOT__metadata_regs_i__DOT__meta_mem_waddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"meta_mem_wdata", &(TOP.tpu__DOT__metadata_regs_i__DOT__meta_mem_wdata), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,48,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"meta_mem_wen", &(TOP.tpu__DOT__metadata_regs_i__DOT__meta_mem_wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__metadata_regs_i.varInsert(__Vfinal,"rst", &(TOP.tpu__DOT__metadata_regs_i__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__metadata_regs_i__scratchpad_metadata__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.tpu__DOT__metadata_regs_i__DOT__scratchpad_metadata__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"NUM_SPADS", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__sp_i__DOT__NUM_SPADS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"SPAD_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.tpu__DOT__sp_i__DOT__SPAD_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"clk", &(TOP.tpu__DOT__sp_i__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"rst", &(TOP.tpu__DOT__sp_i__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_mem", &(TOP.tpu__DOT__sp_i__DOT__spad_mem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2,1 ,0,7 ,0,255 ,7,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_raddr", &(TOP.tpu__DOT__sp_i__DOT__spad_raddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_rdata", &(TOP.tpu__DOT__sp_i__DOT__spad_rdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_ren", &(TOP.tpu__DOT__sp_i__DOT__spad_ren), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_rspad", &(TOP.tpu__DOT__sp_i__DOT__spad_rspad), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_waddr", &(TOP.tpu__DOT__sp_i__DOT__spad_waddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_wdata", &(TOP.tpu__DOT__sp_i__DOT__spad_wdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_wen", &(TOP.tpu__DOT__sp_i__DOT__spad_wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_tpu__sp_i.varInsert(__Vfinal,"spad_wspad", &(TOP.tpu__DOT__sp_i__DOT__spad_wspad), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_tpu__sp_i__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_tpu__sp_i__unnamedblk1__unnamedblk2.varInsert(__Vfinal,"j", &(TOP.tpu__DOT__sp_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
    }
}
