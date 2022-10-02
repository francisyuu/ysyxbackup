// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDCS.h"
#include "VDCS__Syms.h"

//============================================================
// Constructors

VDCS::VDCS(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VDCS__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
}

VDCS::VDCS(const char* _vcname__)
    : VDCS(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VDCS::~VDCS() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDCS___024root___eval_initial(VDCS___024root* vlSelf);
void VDCS___024root___eval_settle(VDCS___024root* vlSelf);
void VDCS___024root___eval(VDCS___024root* vlSelf);
QData VDCS___024root___change_request(VDCS___024root* vlSelf);
#ifdef VL_DEBUG
void VDCS___024root___eval_debug_assertions(VDCS___024root* vlSelf);
#endif  // VL_DEBUG
void VDCS___024root___final(VDCS___024root* vlSelf);

static void _eval_initial_loop(VDCS__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDCS___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDCS___024root___eval_settle(&(vlSymsp->TOP));
        VDCS___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VDCS___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/DCS.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VDCS___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDCS::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDCS::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDCS___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDCS___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VDCS___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/DCS.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VDCS___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VDCS::final() {
    VDCS___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VDCS::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VDCS::name() const {
    return vlSymsp->name();
}
