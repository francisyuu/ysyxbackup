// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU.h"
#include "VALU__Syms.h"

//============================================================
// Constructors

VALU::VALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VALU__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , operate{vlSymsp->TOP.operate}
    , SEGaS{vlSymsp->TOP.SEGaS}
    , SEGa{vlSymsp->TOP.SEGa}
    , SEGop{vlSymsp->TOP.SEGop}
    , SEGbS{vlSymsp->TOP.SEGbS}
    , SEGb{vlSymsp->TOP.SEGb}
    , SEGeq{vlSymsp->TOP.SEGeq}
    , SEGresultS{vlSymsp->TOP.SEGresultS}
    , SEGresult{vlSymsp->TOP.SEGresult}
    , co{vlSymsp->TOP.co}
    , zero{vlSymsp->TOP.zero}
    , overflow{vlSymsp->TOP.overflow}
    , rootp{&(vlSymsp->TOP)}
{
}

VALU::VALU(const char* _vcname__)
    : VALU(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VALU::~VALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VALU___024root___eval_initial(VALU___024root* vlSelf);
void VALU___024root___eval_settle(VALU___024root* vlSelf);
void VALU___024root___eval(VALU___024root* vlSelf);
QData VALU___024root___change_request(VALU___024root* vlSelf);
#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf);
#endif  // VL_DEBUG
void VALU___024root___final(VALU___024root* vlSelf);

static void _eval_initial_loop(VALU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VALU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VALU___024root___eval_settle(&(vlSymsp->TOP));
        VALU___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VALU___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/ALU.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VALU___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VALU___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VALU___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/ALU.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VALU___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VALU::final() {
    VALU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VALU::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VALU::name() const {
    return vlSymsp->name();
}
