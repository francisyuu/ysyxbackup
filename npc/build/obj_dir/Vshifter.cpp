// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshifter.h"
#include "Vshifter__Syms.h"

//============================================================
// Constructors

Vshifter::Vshifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vshifter__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , SEG1{vlSymsp->TOP.SEG1}
    , SEG0{vlSymsp->TOP.SEG0}
    , rootp{&(vlSymsp->TOP)}
{
}

Vshifter::Vshifter(const char* _vcname__)
    : Vshifter(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vshifter::~Vshifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vshifter___024root___eval_initial(Vshifter___024root* vlSelf);
void Vshifter___024root___eval_settle(Vshifter___024root* vlSelf);
void Vshifter___024root___eval(Vshifter___024root* vlSelf);
QData Vshifter___024root___change_request(Vshifter___024root* vlSelf);
#ifdef VL_DEBUG
void Vshifter___024root___eval_debug_assertions(Vshifter___024root* vlSelf);
#endif  // VL_DEBUG
void Vshifter___024root___final(Vshifter___024root* vlSelf);

static void _eval_initial_loop(Vshifter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vshifter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vshifter___024root___eval_settle(&(vlSymsp->TOP));
        Vshifter___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshifter___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/shifter.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshifter___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vshifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshifter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vshifter___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshifter___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/shifter.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshifter___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vshifter::final() {
    Vshifter___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vshifter::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vshifter::name() const {
    return vlSymsp->name();
}
