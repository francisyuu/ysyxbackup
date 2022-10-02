// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDCS__SYMS_H_
#define VERILATED_VDCS__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VDCS.h"

// INCLUDE MODULE CLASSES
#include "VDCS___024root.h"

// SYMS CLASS (contains all model state)
class VDCS__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDCS* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDCS___024root                 TOP;

    // CONSTRUCTORS
    VDCS__Syms(VerilatedContext* contextp, const char* namep, VDCS* modelp);
    ~VDCS__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
