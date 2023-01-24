// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_IDU_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_IDU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;
class Vysyx_22050133_NPC_ysyx_22050133_RegisterFile;


//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_IDU) {
  public:
    // CELLS
    Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* __PVT__ysyx_22050133_RegisterFile_dut;

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__rdwen,0,0);
    VL_IN8(__PVT__rdin,4,0);
    VL_IN8(__PVT__hazard_detect_mem_read,0,0);
    VL_IN8(__PVT__hazard_detect_rd,4,0);
    VL_OUT8(__PVT__has_hazard,0,0);
    VL_OUT8(__PVT__rs1,4,0);
    VL_OUT8(__PVT__rs2,4,0);
    VL_OUT8(__PVT__rdout,4,0);
    VL_OUT16(__PVT__ctrl_wb_out,12,0);
    VL_OUT16(__PVT__ctrl_mem_out,12,0);
    VL_IN(__PVT__inst,31,0);
    VL_OUT(__PVT__ctrl_ex_out,16,0);
    VL_IN64(__PVT__pc,63,0);
    VL_IN64(__PVT__rddata,63,0);
    VL_OUT64(__PVT__rs1data,63,0);
    VL_OUT64(__PVT__rs2data,63,0);
    VL_OUT64(__PVT__imm,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*6:0*/ __PVT__funct7;
        CData/*2:0*/ __PVT__funct3;
        CData/*6:0*/ __PVT__opcode;
        CData/*0:0*/ __PVT__OPLUI;
        CData/*0:0*/ __PVT__OPAUIPC;
        CData/*0:0*/ __PVT__OPJAL;
        CData/*0:0*/ __PVT__OPJALR;
        CData/*0:0*/ __PVT__OPBXX;
        CData/*0:0*/ __PVT__OPLXX;
        CData/*0:0*/ __PVT__OPSXX;
        CData/*0:0*/ __PVT__OPXXI;
        CData/*0:0*/ __PVT__OPXXIW;
        CData/*0:0*/ __PVT__OPRXX;
        CData/*0:0*/ __PVT__OPRWX;
        CData/*0:0*/ __PVT__OPSYS;
        CData/*0:0*/ __PVT__F3BEQ;
        CData/*0:0*/ __PVT__F3BNE;
        CData/*0:0*/ __PVT__F3BLT;
        CData/*0:0*/ __PVT__F3BGE;
        CData/*0:0*/ __PVT__F3BLTU;
        CData/*0:0*/ __PVT__F3BGEU;
        CData/*0:0*/ __PVT__F3LB;
        CData/*0:0*/ __PVT__F3LH;
        CData/*0:0*/ __PVT__F3LW;
        CData/*0:0*/ __PVT__F3LBU;
        CData/*0:0*/ __PVT__F3LHU;
        CData/*0:0*/ __PVT__F3SB;
        CData/*0:0*/ __PVT__F3SH;
        CData/*0:0*/ __PVT__F3SW;
        CData/*0:0*/ __PVT__F3ADDI;
        CData/*0:0*/ __PVT__F3SLTI;
        CData/*0:0*/ __PVT__F3SLTIU;
        CData/*0:0*/ __PVT__F3XORI;
        CData/*0:0*/ __PVT__F3ORI;
        CData/*0:0*/ __PVT__F3ANDI;
        CData/*0:0*/ __PVT__F3SLLI;
        CData/*0:0*/ __PVT__F3SRLI;
        CData/*0:0*/ __PVT__F3ADD;
        CData/*0:0*/ __PVT__F3SLL;
        CData/*0:0*/ __PVT__F3SLT;
        CData/*0:0*/ __PVT__F3SLTU;
        CData/*0:0*/ __PVT__F3XOR;
        CData/*0:0*/ __PVT__F3SRL;
        CData/*0:0*/ __PVT__F3OR;
        CData/*0:0*/ __PVT__F3AND;
        CData/*0:0*/ __PVT__F3LWU;
        CData/*0:0*/ __PVT__F3SD;
        CData/*0:0*/ __PVT__F3CSRRW;
        CData/*0:0*/ __PVT__F3CSRRS;
        CData/*0:0*/ __PVT__F3MUL;
        CData/*0:0*/ __PVT__F3MULH;
        CData/*0:0*/ __PVT__F3MULHSU;
        CData/*0:0*/ __PVT__F3MULHU;
        CData/*0:0*/ __PVT__F3DIV;
        CData/*0:0*/ __PVT__F3DIVU;
        CData/*0:0*/ __PVT__F3REM;
        CData/*0:0*/ __PVT__F3REMU;
        CData/*0:0*/ __PVT__F6SRLI;
        CData/*0:0*/ __PVT__F7ADD;
        CData/*0:0*/ __PVT__F7SRL;
        CData/*0:0*/ __PVT__F7MUL;
        CData/*0:0*/ __PVT__FECALL;
        CData/*0:0*/ __PVT__FEBREAK;
        CData/*0:0*/ __PVT__FMRET;
    };
    struct {
        SData/*12:0*/ __PVT__ctrl_wb;
        SData/*12:0*/ __PVT__ctrl_mem;
        IData/*16:0*/ __PVT__ctrl_ex;
        QData/*63:0*/ __PVT__immI;
        QData/*63:0*/ __PVT__immS;
        QData/*63:0*/ __PVT__immB;
        QData/*63:0*/ __PVT__immU;
        QData/*63:0*/ __PVT__immJ;
    };

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_IDU);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_IDU(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_IDU();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
