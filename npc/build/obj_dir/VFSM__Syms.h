// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFSM__SYMS_H_
#define VERILATED_VFSM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VFSM.h"

// INCLUDE MODULE CLASSES
#include "VFSM___024root.h"

// SYMS CLASS (contains all model state)
class VFSM__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFSM* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFSM___024root                 TOP;

    // CONSTRUCTORS
    VFSM__Syms(VerilatedContext* contextp, const char* namep, VFSM* modelp);
    ~VFSM__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
