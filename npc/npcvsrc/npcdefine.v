`ifndef NPCDEFINE_V
`define NPCDEFINE_V
`define ysyx_22050133_OP_LUI    7'b0110111
`define ysyx_22050133_OP_AUIPC  7'b0010111
`define ysyx_22050133_OP_JAL    7'b1101111
`define ysyx_22050133_OP_JALR   7'b1100111
`define ysyx_22050133_OP_BXX    7'b1100011
`define ysyx_22050133_OP_LXX    7'b0000011
`define ysyx_22050133_OP_SXX    7'b0100011
`define ysyx_22050133_OP_XXI    7'b0010011
`define ysyx_22050133_OP_XXIW   7'b0011011
`define ysyx_22050133_OP_RXX    7'b0110011
`define ysyx_22050133_OP_RWX    7'b0111011
`define ysyx_22050133_OP_FXX    7'b0001111
`define ysyx_22050133_OP_SYS    7'b1110011

`define ysyx_22050133_F3_JALR   3'b000
`define ysyx_22050133_F3_BEQ    3'b000
`define ysyx_22050133_F3_BNE    3'b001
`define ysyx_22050133_F3_BLT    3'b100
`define ysyx_22050133_F3_BGE    3'b101
`define ysyx_22050133_F3_BLTU   3'b110
`define ysyx_22050133_F3_BGEU   3'b111
`define ysyx_22050133_F3_LB     3'b000
`define ysyx_22050133_F3_LH     3'b001
`define ysyx_22050133_F3_LW     3'b010
`define ysyx_22050133_F3_LBU    3'b100
`define ysyx_22050133_F3_LHU    3'b101
`define ysyx_22050133_F3_SB     3'b000
`define ysyx_22050133_F3_SH     3'b001
`define ysyx_22050133_F3_SW     3'b010
`define ysyx_22050133_F3_ADDI   3'b000
`define ysyx_22050133_F3_SLTI   3'b010
`define ysyx_22050133_F3_SLTIU  3'b011
`define ysyx_22050133_F3_XORI   3'b100
`define ysyx_22050133_F3_ORI    3'b110
`define ysyx_22050133_F3_ANDI   3'b111
`define ysyx_22050133_F3_SLLI   3'b001
`define ysyx_22050133_F3_SRLI   3'b101
`define ysyx_22050133_F3_SRAI   3'b101
`define ysyx_22050133_F3_ADD    3'b000
`define ysyx_22050133_F3_SUB    3'b000
`define ysyx_22050133_F3_SLL    3'b001
`define ysyx_22050133_F3_SLT    3'b010
`define ysyx_22050133_F3_SLTU   3'b011
`define ysyx_22050133_F3_XOR    3'b100
`define ysyx_22050133_F3_SRL    3'b101
`define ysyx_22050133_F3_SRA    3'b101
`define ysyx_22050133_F3_OR     3'b110
`define ysyx_22050133_F3_AND    3'b111

`define ysyx_22050133_F3_LWU    3'b110
`define ysyx_22050133_F3_LD     3'b011
`define ysyx_22050133_F3_SD     3'b011
`define ysyx_22050133_F3_SLLI   3'b001
`define ysyx_22050133_F3_SRLI   3'b101
`define ysyx_22050133_F3_SRAI   3'b101
`define ysyx_22050133_F3_ADDIW  3'b000
`define ysyx_22050133_F3_SLLIW  3'b001
`define ysyx_22050133_F3_SRLIW  3'b101
`define ysyx_22050133_F3_SRAIW  3'b101
`define ysyx_22050133_F3_ADDW   3'b000
`define ysyx_22050133_F3_SUBW   3'b000
`define ysyx_22050133_F3_SLLW   3'b001
`define ysyx_22050133_F3_SRLW   3'b101
`define ysyx_22050133_F3_SRAW   3'b101

`define ysyx_22050133_F3_CSRRW  3'b001
`define ysyx_22050133_F3_CSRRS  3'b010
`define ysyx_22050133_F3_CSRRC  3'b011
`define ysyx_22050133_F3_CSRRWI 3'b101
`define ysyx_22050133_F3_CSRRSI 3'b110
`define ysyx_22050133_F3_CSRRCI 3'b111

`define ysyx_22050133_F3_MUL    3'b000
`define ysyx_22050133_F3_MULH   3'b001
`define ysyx_22050133_F3_MULHSU 3'b010
`define ysyx_22050133_F3_MULHU  3'b011
`define ysyx_22050133_F3_DIV    3'b100
`define ysyx_22050133_F3_DIVU   3'b101
`define ysyx_22050133_F3_REM    3'b110
`define ysyx_22050133_F3_REMU   3'b111

`define ysyx_22050133_F3_MULW   3'b000
`define ysyx_22050133_F3_DIVW   3'b100
`define ysyx_22050133_F3_DIVUW  3'b101
`define ysyx_22050133_F3_REMW   3'b110
`define ysyx_22050133_F3_REMUW  3'b111

`define ysyx_22050133_F6_SLLI   6'b000000
`define ysyx_22050133_F6_SRLI   6'b000000
`define ysyx_22050133_F6_SRAI   6'b010000

`define ysyx_22050133_F7_ADD    7'b0000000
`define ysyx_22050133_F7_SUB    7'b0100000
`define ysyx_22050133_F7_SLL    7'b0000000
`define ysyx_22050133_F7_SLT    7'b0000000
`define ysyx_22050133_F7_SLTU   7'b0000000
`define ysyx_22050133_F7_XOR    7'b0000000
`define ysyx_22050133_F7_SRL    7'b0000000
`define ysyx_22050133_F7_SRA    7'b0100000
`define ysyx_22050133_F7_OR     7'b0000000
`define ysyx_22050133_F7_AND    7'b0000000

`define ysyx_22050133_F7_SLLIW  7'b0000000
`define ysyx_22050133_F7_SRLIW  7'b0000000
`define ysyx_22050133_F7_SRAIW  7'b0100000
`define ysyx_22050133_F7_ADDW   7'b0000000
`define ysyx_22050133_F7_SUBW   7'b0100000
`define ysyx_22050133_F7_SLLW   7'b0000000
`define ysyx_22050133_F7_SRLW   7'b0000000
`define ysyx_22050133_F7_SRAW   7'b0100000

`define ysyx_22050133_F7_RXX1   7'b0000000
`define ysyx_22050133_F7_RXX2   7'b0100000

`define ysyx_22050133_F7_MUL    7'b0000001
`define ysyx_22050133_F7_MULH   7'b0000001
`define ysyx_22050133_F7_MULHSU 7'b0000001
`define ysyx_22050133_F7_MULHU  7'b0000001
`define ysyx_22050133_F7_DIV    7'b0000001
`define ysyx_22050133_F7_DIVU   7'b0000001
`define ysyx_22050133_F7_REM    7'b0000001
`define ysyx_22050133_F7_REMU   7'b0000001

`define ysyx_22050133_F7_MULW   7'b0000001
`define ysyx_22050133_F7_DIVW   7'b0000001
`define ysyx_22050133_F7_DIVUW  7'b0000001
`define ysyx_22050133_F7_REMW   7'b0000001
`define ysyx_22050133_F7_REMUW  7'b0000001

`define ysyx_22050133_F7_RXX3   7'b0000001

`define ysyx_22050133_F_FENCE   25'b1000_0011_0011_00000_000_00000; 
`define ysyx_22050133_F_PAUSE   25'b0000_0001_0000_00000_000_00000; 
`define ysyx_22050133_F_ECALL   25'b0000_0000_0000_00000_000_00000; 
`define ysyx_22050133_F_EBREAK  25'b0000_0000_0001_00000_000_00000; 

function [63:0] SEXT;
  input[63:0] din;
  input[1:0] len;
begin
  if(len==2'b00)SEXT={{56{din[7]}},din[7:0]};
  else if(len==2'b01)SEXT={{48{din[15]}},din[15:0]};
  else SEXT={{32{din[31]}},din[31:0]};
end
endfunction

function [1:0] CSRi;
  input[63:0] csr;
begin
	case(csr[11:0])
		12'h300:CSRi=0;
		12'h305:CSRi=1;
		12'h341:CSRi=2;
		12'h342:CSRi=3;
		//12'h304:CSRi=4;
		//12'h344:CSRi=5;
	  default:CSRi=0;
	endcase
end
endfunction

import "DPI-C" function void stopsim();
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void set_pc(
    input longint pc, input longint npc,input int inst
);
import "DPI-C" function void vmem_read(
    input longint raddr, output longint rdata, input byte wmask
);
import "DPI-C" function void inst_read(
    input longint raddr, output longint rdata
);
import "DPI-C" function void vmem_write(
    input longint waddr, input longint wdata, input byte wmask,input longint wdataraw
);
import "DPI-C" function void reg_info(
    input logic[4:0] rs1,input longint rs1d,
    input logic[4:0] rs2,input longint rs2d,
    input logic[4:0] rd,input longint rdd
);
import "DPI-C" function void npc_etrace(
    input longint pc,input longint NO
);
`endif 
