// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVGA__SYMS_H_
#define VERILATED_VVGA__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VVGA.h"

// INCLUDE MODULE CLASSES
#include "VVGA___024root.h"

// SYMS CLASS (contains all model state)
class VVGA__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VVGA* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VVGA___024root                 TOP;

    // CONSTRUCTORS
    VVGA__Syms(VerilatedContext* contextp, const char* namep, VVGA* modelp);
    ~VVGA__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
