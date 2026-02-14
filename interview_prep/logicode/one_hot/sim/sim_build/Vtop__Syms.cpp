// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_one_hot);
    __Vhier.remove(&__Vscope_one_hot, &__Vscope_one_hot__counter);
    __Vhier.remove(&__Vscope_one_hot__counter, &__Vscope_one_hot__counter__unnamedblk1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(124);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_one_hot.configure(this, name(), "one_hot", "one_hot", "one_hot", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_one_hot__counter.configure(this, name(), "one_hot.counter", "counter", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_one_hot__counter__unnamedblk1.configure(this, name(), "one_hot.counter.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_one_hot);
    __Vhier.add(&__Vscope_one_hot, &__Vscope_one_hot__counter);
    __Vhier.add(&__Vscope_one_hot__counter, &__Vscope_one_hot__counter__unnamedblk1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"din", &(TOP.din), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"onehot", &(TOP.onehot), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_one_hot.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.one_hot__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_one_hot.varInsert(__Vfinal,"cnt", &(TOP.one_hot__DOT__cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_one_hot.varInsert(__Vfinal,"din", &(TOP.one_hot__DOT__din), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_one_hot.varInsert(__Vfinal,"onehot", &(TOP.one_hot__DOT__onehot), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_one_hot__counter__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.one_hot__DOT__counter__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
    }
}
