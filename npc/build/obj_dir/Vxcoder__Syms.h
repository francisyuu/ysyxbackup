// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VXCODER__SYMS_H_
#define VERILATED_VXCODER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vxcoder.h"

// INCLUDE MODULE CLASSES
#include "Vxcoder___024root.h"

// SYMS CLASS (contains all model state)
class Vxcoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vxcoder* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vxcoder___024root              TOP;

    // CONSTRUCTORS
    Vxcoder__Syms(VerilatedContext* contextp, const char* namep, Vxcoder* modelp);
    ~Vxcoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
