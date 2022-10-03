// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFSM.h"
#include "VFSM__Syms.h"

//============================================================
// Constructors

VFSM::VFSM(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFSM__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ps2clk{vlSymsp->TOP.ps2clk}
    , ps2data{vlSymsp->TOP.ps2data}
    , rst{vlSymsp->TOP.rst}
    , SEG0{vlSymsp->TOP.SEG0}
    , SEG1{vlSymsp->TOP.SEG1}
    , SEG2{vlSymsp->TOP.SEG2}
    , SEG3{vlSymsp->TOP.SEG3}
    , SEG4{vlSymsp->TOP.SEG4}
    , SEG5{vlSymsp->TOP.SEG5}
    , outputdata{vlSymsp->TOP.outputdata}
    , rootp{&(vlSymsp->TOP)}
{
}

VFSM::VFSM(const char* _vcname__)
    : VFSM(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFSM::~VFSM() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFSM___024root___eval_initial(VFSM___024root* vlSelf);
void VFSM___024root___eval_settle(VFSM___024root* vlSelf);
void VFSM___024root___eval(VFSM___024root* vlSelf);
QData VFSM___024root___change_request(VFSM___024root* vlSelf);
#ifdef VL_DEBUG
void VFSM___024root___eval_debug_assertions(VFSM___024root* vlSelf);
#endif  // VL_DEBUG
void VFSM___024root___final(VFSM___024root* vlSelf);

static void _eval_initial_loop(VFSM__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFSM___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFSM___024root___eval_settle(&(vlSymsp->TOP));
        VFSM___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFSM___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/FSM.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFSM___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFSM::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFSM::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFSM___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFSM___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFSM___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/FSM.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFSM___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VFSM::final() {
    VFSM___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VFSM::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFSM::name() const {
    return vlSymsp->name();
}
