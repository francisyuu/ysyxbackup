// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vxcoder.h"
#include "Vxcoder__Syms.h"

//============================================================
// Constructors

Vxcoder::Vxcoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vxcoder__Syms(_vcontextp__, _vcname__, this)}
    , in{vlSymsp->TOP.in}
    , en{vlSymsp->TOP.en}
    , SEGout{vlSymsp->TOP.SEGout}
    , LEDout{vlSymsp->TOP.LEDout}
    , flag{vlSymsp->TOP.flag}
    , rootp{&(vlSymsp->TOP)}
{
}

Vxcoder::Vxcoder(const char* _vcname__)
    : Vxcoder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vxcoder::~Vxcoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vxcoder___024root___eval_initial(Vxcoder___024root* vlSelf);
void Vxcoder___024root___eval_settle(Vxcoder___024root* vlSelf);
void Vxcoder___024root___eval(Vxcoder___024root* vlSelf);
QData Vxcoder___024root___change_request(Vxcoder___024root* vlSelf);
#ifdef VL_DEBUG
void Vxcoder___024root___eval_debug_assertions(Vxcoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vxcoder___024root___final(Vxcoder___024root* vlSelf);

static void _eval_initial_loop(Vxcoder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vxcoder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vxcoder___024root___eval_settle(&(vlSymsp->TOP));
        Vxcoder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vxcoder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/xcoder.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vxcoder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vxcoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vxcoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vxcoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vxcoder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vxcoder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/xcoder.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vxcoder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vxcoder::final() {
    Vxcoder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vxcoder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vxcoder::name() const {
    return vlSymsp->name();
}
