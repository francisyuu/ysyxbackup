`timescale 1ns/1ns
`include "npcvsrc/npcdefine.v"
//`include "npcdefine.v"
module ysyx_22050133_NPC(
  input               clk     ,
  input               rst     ,
  output    [63:0]    pc      ,
  output    [63:0]    npc     
  //input     [31:0]    inst    ,
  //output    [63:0]    addr    ,
  //output              wen     ,
  //input     [63:0]    din     ,
  //output    [63:0]    dout    
  );
wire [63:0] inst64;
wire [31:0] inst;
wire [63:0] addr;
wire        wen ;
wire [7:0]  wmask;
wire [63:0] din ;
wire [63:0] dout;

wire [4:0]  rs1;
wire [4:0]  rs2;
wire [4:0]  rd;
wire [63:0]  dnpc;
wire rdwen;
wire [63:0]  rddata;
wire [63:0]  rs1data;
wire [63:0]  rs2data;
wire [63:0] immI;
wire [63:0] immS;
wire [63:0] immB;
wire [63:0] immU;
wire [63:0] immJ;
wire [6:0]  funct7;
wire [2:0]  funct3;
wire [6:0]  opcode;

ysyx_22050133_RegisterFile ysyx_22050133_RegisterFile_dut(
  .clk    (clk    ),
  .rddata (rddata ),
  .rd     (rd     ),
  .wen    (rdwen  ),
  .rs1    (rs1    ),
  .rs1data(rs1data),
  .rs2    (rs2    ),
  .rs2data(rs2data)
);

wire [63:0]dinA;
wire [63:0]doutA;
wire [63:0]douts;
always @(*) begin
    vmem_read(addr, dinA, wmask);
		//$monitor("addr=%x dinA=%x din=%x",addr,dinA,din);
end
assign din=addr[2] ? 
            addr[1] ? 
              addr[0] ? {56'd0,dinA[63:56]}:{48'd0,dinA[63:48]}
              :addr[0] ? {40'd0,dinA[63:40]}:{32'd0,dinA[63:32]}
            :addr[1] ? 
              addr[0] ? {24'd0,dinA[63:24]}:{16'd0,dinA[63:16]}
              :addr[0] ? {8'd0,dinA[63:8]}:dinA;

assign doutA=(dinA&(~wmask1))|(douts&wmask1);
assign douts=dout<<{addr[2:0],3'd0};
wire [7:0]wmasks=wmask<<addr[2:0];
wire[63:0] wmask1={{8{wmasks[7]}},{8{wmasks[6]}},{8{wmasks[5]}},{8{wmasks[4]}},{8{wmasks[3]}},{8{wmasks[2]}},{8{wmasks[1]}},{8{wmasks[0]}}};

always @(*) begin
    vmem_write(addr, doutA, wmask,dout);
end

always @(*) begin
    inst_read(pc,inst64);
end
always @(*)begin
  set_pc(pc,npc,inst);
end
assign inst=pc[2] ? inst64[63:32]:inst64[31:0];

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .rst(rst),
  .dnpc(dnpc),
  .pc(pc)  ,
  .npc(npc)  
  );
ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .inst  (inst  ),
  .rs1   (rs1   ),
  .rs2   (rs2   ),
  .rd    (rd    ),
  .immI  (immI  ),
  .immS  (immS  ),
  .immB  (immB  ),
  .immU  (immU  ),
  .immJ  (immJ  ),
  .funct7(funct7),
  .funct3(funct3),
  .opcode(opcode)
);

ysyx_22050133_EXU ysyx_22050133_EXU_dut(
  .clk         (clk   ),
  .rst         (rst   ),  
  .pc          (pc    ),  
  .rs1         (rs1   ),
  .rs2         (rs2   ),
  .rd          (rd    ),
  .rs1data     (rs1data),
  .rs2data     (rs2data),
  .immI        (immI  ),
  .immS        (immS  ),
  .immB        (immB  ),
  .immU        (immU  ),
  .immJ        (immJ  ),
  .funct7      (funct7),
  .funct3      (funct3),
  .opcode      (opcode),
  .dnpc        (dnpc  ),
  .rdwen       (rdwen ),
  .rddata      (rddata),
  .addr        (addr  ),
  .wen         (wen   ),
  .wmask       (wmask ),
  .din         (din   ),
  .dout        (dout  )
);

endmodule

module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input     [63:0] dnpc,
  output reg[63:0] pc,
  output reg[63:0] npc
  );
always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
    npc<=64'h8000_0000;
  end
  else begin
    if(dnpc==0)begin
      //npc<=npc+4;
      pc<=pc+4;
    end
    else begin
      //npc<=dnpc+4;
      pc<=dnpc;
    end
  end
end
endmodule

module ysyx_22050133_IDU(
  input     [31:0] inst  ,
  output    [4:0]  rs1   ,
  output    [4:0]  rs2   ,
  output    [4:0]  rd    ,
  output    [63:0] immI  ,
  output    [63:0] immS  ,
  output    [63:0] immB  ,
  output    [63:0] immU  ,
  output    [63:0] immJ  ,
  output    [6:0]  funct7,
  output    [2:0]  funct3,
  output    [6:0]  opcode
);
assign rs1=inst[19:15];
assign rs2=inst[24:20];
assign rd=inst[11:7];
assign funct7=inst[31:25];
assign funct3=inst[14:12];
assign opcode=inst[6:0];

assign immI={{52{inst[31]}},inst[31:20]};
assign immS={{52{inst[31]}},inst[31:25],inst[11:7]};
assign immB={{51{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
assign immU={{32{inst[31]}},inst[31:12],12'd0};
assign immJ={{43{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'd0};

endmodule

module ysyx_22050133_EXU(
  input            clk        ,
  input            rst        ,
  input     [63:0] pc         ,
  input     [4:0]  rs1        ,
  input     [4:0]  rs2        ,
  input     [4:0]  rd         ,
  input     [63:0] rs1data    ,
  input     [63:0] rs2data    ,
  input     [63:0] immI       ,
  input     [63:0] immS       ,
  input     [63:0] immB       ,
  input     [63:0] immU       ,
  input     [63:0] immJ       ,
  input     [6:0]  funct7     ,
  input     [2:0]  funct3     ,
  input     [6:0]  opcode     ,
  output    [63:0] dnpc       ,
  output           rdwen      ,
  output    [63:0] rddata     ,
  output    [63:0] addr       ,
  output           wen        ,
  output    [7:0]  wmask      ,
  input     [63:0] din        ,
  output    [63:0] dout
);
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

wire FFENCE   =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_FENCE
wire FPAUSE   =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_PAUSE 
wire FECALL   =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_ECALL 
wire FEBREAK  =  {funct7,rs2,rs1,funct3,rd}==`ysyx_22050133_F_EBREAK


wire signed [63:0]rs1datas=rs1data;
wire signed [63:0]rs2datas=rs2data;
wire signed [63:0]immdatas=immI;

wire[63:0] Radd  =  rs1data+rs2data;
wire[63:0] Rsub  =  rs1data-rs2data;
wire[63:0] Rsll  =  rs1data<<rs2data;
wire[63:0] Rslt  =  {63'd0,Rsub[63]};
wire[63:0] Rsltu =  {63'd0,rs1data[63]^Rsub[63]};
wire[63:0] Rxor  =  rs1data^rs2data;
wire[63:0] Rsrl  =  rs1data>>rs2data;
wire[63:0] Rsra  =  rs1datas>>>rs2data; 
wire[63:0] Ror   =  rs1data|rs2data;
wire[63:0] Rand  =  rs1data&rs2data;

wire[63:0] Raddw  =  SEXT(Radd,3);
wire[63:0] Rsubw  =  SEXT(Rsub,3);
wire[63:0] Rsllw  =  SEXT(rs1data<<rs2data,3);
wire[63:0] Rsrlw  =  SEXT({32'd0,rs1data[31:0]>>rs2data},3);
wire[63:0] Rsraw  =  SEXT({32'd0,signed'(rs1data[31:0])>>>rs2data},3);

wire[63:0] Rmul   =  rs1data*rs2data;
wire[63:0] Rmulh  =  0;
wire[63:0] Rmulhsu=  0;
wire[63:0] Rmulhu =  0;
wire[63:0] Rdiv   =  rs1datas/rs2datas;
wire[63:0] Rdivu  =  rs1data/rs2data;
wire[63:0] Rrem   =  rs1datas%rs2datas;
wire[63:0] Rremu  =  rs1data%rs2data;

wire[63:0] Rmulw  =  SEXT(Rmul,3);
wire[63:0] Rdivw  =  SEXT({32'd0,rs1datas[31:0]/rs2datas[31:0]},3);
wire[63:0] Rdivuw =  SEXT({32'd0,rs1data[31:0]/rs2data[31:0]},3);
wire[63:0] Rremw  =  SEXT({32'd0,rs1datas[31:0]%rs2datas[31:0]},3);
wire[63:0] Rremuw =  SEXT({32'd0,rs1data[31:0]%rs2data[31:0]},3);

wire[63:0] Raddi  =  rs1data+immI;
wire[63:0] Rsubi  =  rs1data-immI;
wire[63:0] Rslti  =  {63'd0,Rsubi[63]};
wire[63:0] Rsltiu =  {63'd0,rs1data[63]^Rsubi[63]};
wire[63:0] Rxori  =  rs1data^immI;
wire[63:0] Rori   =  rs1data|immI;
wire[63:0] Randi  =  rs1data&immI;
wire[63:0] Rslli  =  rs1data<<immI[5:0];
wire[63:0] Rsrli  =  rs1datas>>immI[5:0];
wire[63:0] Rsrai  =  rs1datas>>>immI[5:0];
wire[63:0] Raddiw =  SEXT(Raddi,3);
wire[63:0] Rslliw =  SEXT(rs1data<<immI[4:0],3);
wire[63:0] Rsrliw =  SEXT({32'd0,rs1data[31:0]>>immI[4:0]},3);
wire[63:0] Rsraiw =  SEXT({32'd0,signed'(rs1data[31:0])>>>immI[4:0]},3);

//reg[63:0] 0:mstatus,1:mtvec,2:mepc,3:mcause;4:mie 5:mip
reg[63:0] csr[3:0];
always@(posedge clk)begin
	if(rst)csr[0]<=64'ha00001800;
	else if(OPSYS)begin
    if(FEBREAK)stopsim();
		else if(FECALL)begin
			//$monitor("hello\n");
			npc_etrace(pc,64'hb);
			csr[2]<=pc;
			csr[3]<=64'hb;
		end
		else if(F3CSRRW)csr[CSRi(immI)]<=rs1data;
		else if(F3CSRRS)csr[CSRi(immI)]<=csr[CSRi(immI)]|rs1data;
	end
end

assign dnpc=
  OPJAL ? pc+immJ
  :OPJALR ? (rs1data+immI)&64'hfffffffe
  :OPBXX ? 
    F3BEQ ? rs1data==rs2data ? pc+immB:0
    :F3BNE ? rs1data!=rs2data ? pc+immB:0
    :F3BLT ? Rsub[63] ? pc+immB:0
    :F3BGE ? !Rsub[63] ? pc+immB:0
    :F3BLTU ? Rsub[63]^rs1data[63] ? pc+immB:0
    :F3BGEU ? !(Rsub[63]^rs1data[63]) ? pc+immB:0
    :0
	:OPSYS ?
		FECALL ? csr[1]
		:0
  :0;
assign rdwen=
  (OPLUI|OPAUIPC|OPJAL|OPJALR|OPLXX|OPXXI|OPXXIW|OPRXX|OPRWX|OPSYS) ? 1:0;
assign rddata=
  OPLUI ? immU
  :OPAUIPC ? pc+immU
  :OPJAL ? pc+4
  :OPJALR ? pc+4
  :OPLXX ? 
    F3LB ? SEXT(din,0)
    :F3LH ? SEXT(din,1)
    :F3LW ? SEXT(din,3)
    :F3LD ? din
    :F3LBU ? {56'd0,din[7:0]}
    :F3LHU ? {48'd0,din[15:0]}
    :F3LWU ? {32'd0,din[31:0]}
    :0
  :OPXXI ? 
    F3ADDI ? Raddi
    :F3SLTI ? Rslti
    :F3SLTIU ? Rsltiu
    :F3XORI ? Rxori
    :F3ORI ? Rori
    :F3ANDI ? Randi
    :F3SLLI ? 
      F6SLLI ? Rslli:0
    :F3SRLI ? 
      F6SRLI ? Rsrli
      :F6SRAI ? Rsrai
      :0
    :0
  :OPXXIW ? 
    F3ADDIW ? Raddiw
    :F3SLLIW ? 
      F7SLLIW ? Rslliw:0
    :F3SRLIW ? 
      F7SRLIW ? Rsrliw
      :F7SRAIW ? Rsraiw
      :0
    :0
  :OPRXX ? 
    F7RXX1 ? 
      F3ADD ? Radd
      :F3SLL ? Rsll
      :F3SLT ? Rslt
      :F3SLTU ? Rsltu
      :F3XOR ? Rxor
      :F3SRL ? Rsrl
      :F3OR ? Ror
      :F3AND ? Rand
      :0
    :F7RXX2 ? 
      F3SUB ? Rsub
      :F3SRA ? Rsra
      :0
    :F7RXX3 ? 
      F3MUL ? Rmul
      :F3MULH ? Rmulh
      :F3MULHSU ? Rmulhsu
      :F3MULHU ? Rmulhu
      :F3DIV ? Rdiv
      :F3DIVU ? Rdivu
      :F3REM ? Rrem
      :F3REMU ? Rremu
      :0
    :0
  :OPRWX ? 
    F7RXX1 ? 
      F3ADDW ? Raddw
      :F3SLLW ? Rsllw
      :F3SRLW ? Rsrlw
      :0
    :F7RXX2 ? 
      F3SUBW ? Rsubw
      :F3SRAW ? Rsraw
      :0
    :F7RXX3 ? 
      F3MULW ? Rmulw
      :F3DIVW ? Rdivw
      :F3DIVUW ? Rdivuw
      :F3REMW ? Rremw
      :F3REMUW ? Rremuw
      :0
    :0
	:OPSYS?
		F3CSRRW?csr[CSRi(immI)]
		:F3CSRRS?csr[CSRi(immI)]
		:0
  :0;
assign addr=
  OPSXX ? 
    (F3SB|F3SH|F3SW|F3SD) ? rs1data+immS
    :0
  :OPLXX ? 
    (F3LB|F3LH|F3LW|F3LBU|F3LHU|F3LWU|F3LD) ? rs1data+immI
    :0
  :0;
assign wen=
  OPSXX ? 1:0;
assign dout=
  OPSXX ? rs2data
  :0;
assign wmask=
  OPSXX ? 
    F3SB ? 8'h01
    :F3SH ? 8'h03
    :F3SW ? 8'h0f
    :F3SD ? 8'hff
    :0
  :0;

endmodule

module ysyx_22050133_RegisterFile #(ADDR_WIDTH = 32, DATA_WIDTH = 64) (
  input clk,
  input [DATA_WIDTH-1:0] rddata,
  input [4:0] rd,
  input wen,
  input [4:0] rs1,
  output [DATA_WIDTH-1:0] rs1data,
  input [4:0] rs2,
  output [DATA_WIDTH-1:0] rs2data
);
always@(*)set_gpr_ptr(rf);

reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];///* verilator public */;
assign rs1data = rs1==0 ? 0:rf[rs1];
assign rs2data = rs2==0 ? 0:rf[rs2];
always @(posedge clk) begin
  if (wen) rf[rd] <= rddata;
  //reg_info(rs1,rs1data,rs2,rs2data,rd,rddata);
end
endmodule

module adder(
	input [63:0] a,
	input [63:0] b,
	output[63:0] s,
	output c
);
assign s=a+b;
assign c=1;
endmodule
