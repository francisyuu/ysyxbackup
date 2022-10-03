// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VALU__Syms;

//----------

VL_MODULE(VALU___024root) {
  public:

    // PORTS
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(operate,2,0);
    VL_OUT8(SEGaS,6,0);
    VL_OUT8(SEGa,6,0);
    VL_OUT8(SEGop,6,0);
    VL_OUT8(SEGbS,6,0);
    VL_OUT8(SEGb,6,0);
    VL_OUT8(SEGeq,6,0);
    VL_OUT8(SEGresultS,6,0);
    VL_OUT8(SEGresult,6,0);
    VL_OUT8(co,0,0);
    VL_OUT8(zero,0,0);
    VL_OUT8(overflow,0,0);

    // LOCAL SIGNALS
    CData/*4:0*/ ALU__DOT__uadder__DOT__uf__DOT__c;
    CData/*3:0*/ ALU__DOT__uadder__DOT__uf__DOT__s;
    CData/*4:0*/ ALU__DOT__ucompare__DOT__uf__DOT__c;
    CData/*3:0*/ ALU__DOT__ucompare__DOT__uf__DOT__s;
    VlUnpacked<CData/*3:0*/, 8> ALU__DOT__resultn;

    // LOCAL VARIABLES
    CData/*4:0*/ __Vchglast__TOP__ALU__DOT__uadder__DOT__uf__DOT__c;
    CData/*4:0*/ __Vchglast__TOP__ALU__DOT__ucompare__DOT__uf__DOT__c;

    // INTERNAL VARIABLES
    VALU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VALU___024root);  ///< Copying not allowed
  public:
    VALU___024root(const char* name);
    ~VALU___024root();

    // INTERNAL METHODS
    void __Vconfigure(VALU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
