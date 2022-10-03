// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX412B__SYMS_H_
#define VERILATED_VMUX412B__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vmux412b.h"

// INCLUDE MODULE CLASSES
#include "Vmux412b___024root.h"

// SYMS CLASS (contains all model state)
class Vmux412b__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux412b* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux412b___024root             TOP;

    // CONSTRUCTORS
    Vmux412b__Syms(VerilatedContext* contextp, const char* namep, Vmux412b* modelp);
    ~Vmux412b__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
