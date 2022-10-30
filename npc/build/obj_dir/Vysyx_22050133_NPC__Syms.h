// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_22050133_NPC__SYMS_H_
#define VERILATED_VYSYX_22050133_NPC__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vysyx_22050133_NPC.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC_ysyx_22050133_NPC.h"
#include "Vysyx_22050133_NPC___024unit.h"
#include "Vysyx_22050133_NPC_ysyx_22050133_RegisterFile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vysyx_22050133_NPC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_22050133_NPC* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_22050133_NPC___024root   TOP;
    Vysyx_22050133_NPC___024unit   TOP____024unit;
    Vysyx_22050133_NPC_ysyx_22050133_NPC TOP__ysyx_22050133_NPC;
    Vysyx_22050133_NPC_ysyx_22050133_RegisterFile TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut;

    // CONSTRUCTORS
    Vysyx_22050133_NPC__Syms(VerilatedContext* contextp, const char* namep, Vysyx_22050133_NPC* modelp);
    ~Vysyx_22050133_NPC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
