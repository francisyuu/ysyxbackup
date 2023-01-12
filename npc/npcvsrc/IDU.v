module ysyx_22050133_IDU(
  input     [31:0] inst     ,
  input            rdwen,
  input     [4:0]  rdin,
  input     [63:0] rddata,
  output    ctrl_wb,
  output    ctrl_mem,
  output    ctrl_ex,
  output    [63:0]  rs1data  ,
  output    [63:0]  rs2data  ,
  output    [63:0]  imm   ,
  output    [4:0]   rdout
);
assign rs1=inst[19:15];
assign rs2=inst[24:20];
assign rdout=inst[11:7];

assign funct7=inst[31:25];
assign funct3=inst[14:12];
assign opcode=inst[6:0];

assign immI={{52{inst[31]}},inst[31:20]};
assign immS={{52{inst[31]}},inst[31:25],inst[11:7]};
assign immB={{51{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
assign immU={{32{inst[31]}},inst[31:12],12'd0};
assign immJ={{43{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'd0};

wire OPLUI    =  opcode==`ysyx_22050133_OP_LUI   ; 
wire OPAUIPC  =  opcode==`ysyx_22050133_OP_AUIPC ; 
wire OPJAL    =  opcode==`ysyx_22050133_OP_JAL   ; 
wire OPJALR   =  opcode==`ysyx_22050133_OP_JALR  ; 
wire OPBXX    =  opcode==`ysyx_22050133_OP_BXX   ; 
wire OPLXX    =  opcode==`ysyx_22050133_OP_LXX   ; 
wire OPSXX    =  opcode==`ysyx_22050133_OP_SXX   ; 
wire OPXXI    =  opcode==`ysyx_22050133_OP_XXI   ; 
wire OPXXIW   =  opcode==`ysyx_22050133_OP_XXIW  ; 
wire OPRXX    =  opcode==`ysyx_22050133_OP_RXX   ; 
wire OPRWX    =  opcode==`ysyx_22050133_OP_RWX   ; 
wire OPFXX    =  opcode==`ysyx_22050133_OP_FXX   ; 
wire OPSYS    =  opcode==`ysyx_22050133_OP_SYS   ; 

wire F3JALR    =  funct3==`ysyx_22050133_F3_JALR     ; 
wire F3BEQ     =  funct3==`ysyx_22050133_F3_BEQ      ; 
wire F3BNE     =  funct3==`ysyx_22050133_F3_BNE      ; 
wire F3BLT     =  funct3==`ysyx_22050133_F3_BLT      ; 
wire F3BGE     =  funct3==`ysyx_22050133_F3_BGE      ; 
wire F3BLTU    =  funct3==`ysyx_22050133_F3_BLTU     ; 
wire F3BGEU    =  funct3==`ysyx_22050133_F3_BGEU     ; 
wire F3LB      =  funct3==`ysyx_22050133_F3_LB       ; 
wire F3LH      =  funct3==`ysyx_22050133_F3_LH       ; 
wire F3LW      =  funct3==`ysyx_22050133_F3_LW       ; 
wire F3LBU     =  funct3==`ysyx_22050133_F3_LBU      ; 
wire F3LHU     =  funct3==`ysyx_22050133_F3_LHU      ; 
wire F3SB      =  funct3==`ysyx_22050133_F3_SB       ; 
wire F3SH      =  funct3==`ysyx_22050133_F3_SH       ; 
wire F3SW      =  funct3==`ysyx_22050133_F3_SW       ; 
wire F3ADDI    =  funct3==`ysyx_22050133_F3_ADDI     ; 
wire F3SLTI    =  funct3==`ysyx_22050133_F3_SLTI     ; 
wire F3SLTIU   =  funct3==`ysyx_22050133_F3_SLTIU    ; 
wire F3XORI    =  funct3==`ysyx_22050133_F3_XORI     ; 
wire F3ORI     =  funct3==`ysyx_22050133_F3_ORI      ; 
wire F3ANDI    =  funct3==`ysyx_22050133_F3_ANDI     ; 
wire F3SLLI    =  funct3==`ysyx_22050133_F3_SLLI     ; 
wire F3SRLI    =  funct3==`ysyx_22050133_F3_SRLI     ; 
wire F3SRAI    =  funct3==`ysyx_22050133_F3_SRAI     ; 
wire F3ADD     =  funct3==`ysyx_22050133_F3_ADD      ; 
wire F3SUB     =  funct3==`ysyx_22050133_F3_SUB      ; 
wire F3SLL     =  funct3==`ysyx_22050133_F3_SLL      ; 
wire F3SLT     =  funct3==`ysyx_22050133_F3_SLT      ; 
wire F3SLTU    =  funct3==`ysyx_22050133_F3_SLTU     ; 
wire F3XOR     =  funct3==`ysyx_22050133_F3_XOR      ; 
wire F3SRL     =  funct3==`ysyx_22050133_F3_SRL      ; 
wire F3SRA     =  funct3==`ysyx_22050133_F3_SRA      ; 
wire F3OR      =  funct3==`ysyx_22050133_F3_OR       ; 
wire F3AND     =  funct3==`ysyx_22050133_F3_AND      ; 

wire F3LWU     =  funct3==`ysyx_22050133_F3_LWU      ; 
wire F3LD      =  funct3==`ysyx_22050133_F3_LD       ; 
wire F3SD      =  funct3==`ysyx_22050133_F3_SD       ; 
wire F3SLLI    =  funct3==`ysyx_22050133_F3_SLLI     ; 
wire F3SRLI    =  funct3==`ysyx_22050133_F3_SRLI     ; 
wire F3SRAI    =  funct3==`ysyx_22050133_F3_SRAI     ; 
wire F3ADDIW   =  funct3==`ysyx_22050133_F3_ADDIW    ; 
wire F3SLLIW   =  funct3==`ysyx_22050133_F3_SLLIW    ; 
wire F3SRLIW   =  funct3==`ysyx_22050133_F3_SRLIW    ; 
wire F3SRAIW   =  funct3==`ysyx_22050133_F3_SRAIW    ; 
wire F3ADDW    =  funct3==`ysyx_22050133_F3_ADDW     ; 
wire F3SUBW    =  funct3==`ysyx_22050133_F3_SUBW     ; 
wire F3SLLW    =  funct3==`ysyx_22050133_F3_SLLW     ; 
wire F3SRLW    =  funct3==`ysyx_22050133_F3_SRLW     ; 
wire F3SRAW    =  funct3==`ysyx_22050133_F3_SRAW     ; 

wire F3CSRRW   =  funct3==`ysyx_22050133_F3_CSRRW    ; 
wire F3CSRRS   =  funct3==`ysyx_22050133_F3_CSRRS    ; 
wire F3CSRRC   =  funct3==`ysyx_22050133_F3_CSRRC    ; 
wire F3CSRRWI  =  funct3==`ysyx_22050133_F3_CSRRWI   ; 
wire F3CSRRSI  =  funct3==`ysyx_22050133_F3_CSRRSI   ; 
wire F3CSRRCI  =  funct3==`ysyx_22050133_F3_CSRRCI   ; 

wire F3MUL     =  funct3==`ysyx_22050133_F3_MUL      ; 
wire F3MULH    =  funct3==`ysyx_22050133_F3_MULH     ; 
wire F3MULHSU  =  funct3==`ysyx_22050133_F3_MULHSU   ; 
wire F3MULHU   =  funct3==`ysyx_22050133_F3_MULHU    ; 
wire F3DIV     =  funct3==`ysyx_22050133_F3_DIV      ; 
wire F3DIVU    =  funct3==`ysyx_22050133_F3_DIVU     ; 
wire F3REM     =  funct3==`ysyx_22050133_F3_REM      ; 
wire F3REMU    =  funct3==`ysyx_22050133_F3_REMU     ; 

wire F3MULW    =  funct3==`ysyx_22050133_F3_MULW     ; 
wire F3DIVW    =  funct3==`ysyx_22050133_F3_DIVW     ; 
wire F3DIVUW   =  funct3==`ysyx_22050133_F3_DIVUW    ; 
wire F3REMW    =  funct3==`ysyx_22050133_F3_REMW     ; 
wire F3REMUW   =  funct3==`ysyx_22050133_F3_REMUW    ; 

wire F6SLLI    =  funct7[6:1]==`ysyx_22050133_F6_SLLI    ; 
wire F6SRLI    =  funct7[6:1]==`ysyx_22050133_F6_SRLI    ; 
wire F6SRAI    =  funct7[6:1]==`ysyx_22050133_F6_SRAI    ; 

wire F7ADD     =  funct7==`ysyx_22050133_F7_ADD     ; 
wire F7SUB     =  funct7==`ysyx_22050133_F7_SUB     ; 
wire F7SLL     =  funct7==`ysyx_22050133_F7_SLL     ; 
wire F7SLT     =  funct7==`ysyx_22050133_F7_SLT     ; 
wire F7SLTU    =  funct7==`ysyx_22050133_F7_SLTU    ; 
wire F7XOR     =  funct7==`ysyx_22050133_F7_XOR     ; 
wire F7SRL     =  funct7==`ysyx_22050133_F7_SRL     ; 
wire F7SRA     =  funct7==`ysyx_22050133_F7_SRA     ; 
wire F7OR      =  funct7==`ysyx_22050133_F7_OR      ; 
wire F7AND     =  funct7==`ysyx_22050133_F7_AND     ; 

wire F7SLLIW   =  funct7==`ysyx_22050133_F7_SLLIW   ; 
wire F7SRLIW   =  funct7==`ysyx_22050133_F7_SRLIW   ; 
wire F7SRAIW   =  funct7==`ysyx_22050133_F7_SRAIW   ; 
wire F7ADDW    =  funct7==`ysyx_22050133_F7_ADDW    ; 
wire F7SUBW    =  funct7==`ysyx_22050133_F7_SUBW    ; 
wire F7SLLW    =  funct7==`ysyx_22050133_F7_SLLW    ; 
wire F7SRLW    =  funct7==`ysyx_22050133_F7_SRLW    ; 
wire F7SRAW    =  funct7==`ysyx_22050133_F7_SRAW    ; 

wire F7RXX1    =  funct7==`ysyx_22050133_F7_RXX1    ; 
wire F7RXX2    =  funct7==`ysyx_22050133_F7_RXX2    ; 

wire F7MUL     =  funct7==`ysyx_22050133_F7_MUL     ; 
wire F7MULH    =  funct7==`ysyx_22050133_F7_MULH    ; 
wire F7MULHSU  =  funct7==`ysyx_22050133_F7_MULHSU  ; 
wire F7MULHU   =  funct7==`ysyx_22050133_F7_MULHU   ; 
wire F7DIV     =  funct7==`ysyx_22050133_F7_DIV     ; 
wire F7DIVU    =  funct7==`ysyx_22050133_F7_DIVU    ; 
wire F7REM     =  funct7==`ysyx_22050133_F7_REM     ; 
wire F7REMU    =  funct7==`ysyx_22050133_F7_REMU    ; 

wire F7MULW    =  funct7==`ysyx_22050133_F7_MULW    ; 
wire F7DIVW    =  funct7==`ysyx_22050133_F7_DIVW    ; 
wire F7DIVUW   =  funct7==`ysyx_22050133_F7_DIVUW   ; 
wire F7REMW    =  funct7==`ysyx_22050133_F7_REMW    ; 
wire F7REMUW   =  funct7==`ysyx_22050133_F7_REMUW   ; 

wire F7RXX3    =  funct7==`ysyx_22050133_F7_RXX3    ; 

wire FFENCE  =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_FENCE;
wire FPAUSE  =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_PAUSE;
wire FECALL  =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_ECALL; 
wire FEBREAK =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_EBREAK;
wire FMRET   =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_MRET; 


assign imm=
  (OPJALR|OPLXX|OPXXI|OPXXIW)?immI
  :(OPSXX)?immS
  :(OPBXX)?immB
  :(OPLUI|OPAUIPC)?immU
  :(OPJAL)?immJ:0;

ysyx_22050133_RegisterFile ysyx_22050133_RegisterFile_dut(
  .clk    (clk    ),
  .rddata (rddata ),
  .rd     (rdin   ),
  .wen    (rdwen  ),
  .rs1    (rs1    ),
  .rs1data(rs1data),
  .rs2    (rs2    ),
  .rs2data(rs2data)
);

endmodule
