// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDISPLAY__SYMS_H_
#define VERILATED_VDISPLAY__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VDisplay.h"

// INCLUDE MODULE CLASSES
#include "VDisplay___024root.h"

// SYMS CLASS (contains all model state)
class VDisplay__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDisplay* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDisplay___024root             TOP;

    // CONSTRUCTORS
    VDisplay__Syms(VerilatedContext* contextp, const char* namep, VDisplay* modelp);
    ~VDisplay__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
