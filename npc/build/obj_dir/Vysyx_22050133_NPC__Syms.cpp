// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_22050133_NPC__Syms.h"
#include "Vysyx_22050133_NPC.h"
#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC_ysyx_22050133_NPC.h"
#include "Vysyx_22050133_NPC___024unit.h"
#include "Vysyx_22050133_NPC_ysyx_22050133_RegisterFile.h"

// FUNCTIONS
Vysyx_22050133_NPC__Syms::~Vysyx_22050133_NPC__Syms()
{
}

Vysyx_22050133_NPC__Syms::Vysyx_22050133_NPC__Syms(VerilatedContext* contextp, const char* namep,Vysyx_22050133_NPC* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP____024unit(Verilated::catName(namep, "$unit"))
    , TOP__ysyx_22050133_NPC(Verilated::catName(namep, "ysyx_22050133_NPC"))
    , TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut(Verilated::catName(namep, "ysyx_22050133_NPC.ysyx_22050133_RegisterFile_dut"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.ysyx_22050133_NPC = &TOP__ysyx_22050133_NPC;
    TOP__ysyx_22050133_NPC.ysyx_22050133_RegisterFile_dut = &TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    TOP__ysyx_22050133_NPC.__Vconfigure(this, true);
    TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.configure(this, name(), "ysyx_22050133_NPC.ysyx_22050133_RegisterFile_dut", "ysyx_22050133_RegisterFile_dut", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.varInsert(__Vfinal,"rf", &(TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.rf), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,63,0 ,31,0);
    }
}
