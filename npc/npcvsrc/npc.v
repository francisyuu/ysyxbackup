`timescale 1ns/1ns
`include "npcvsrc/npcdefine.v"
//`include "npcdefine.v"
module ysyx_22050133_NPC(
  input               clk     ,
  input               rst     
  );


wire PCsrc;
wire[63:0] pc;
wire [31:0] inst;

reg       IDRGE_en;
reg[63:0] IDREG_pc;
reg[31:0] IDREG_inst;

wire  [1:0]   ctrl_wb ;
wire  [1:0]   ctrl_mem;
wire  [1:0]   ctrl_ex ;
wire  [63:0]  rs1data ;
wire  [63:0]  rs2data ;
wire  [63:0]  imm     ;
wire  [4:0]   rdout   ;

reg      EXRGE_en;
reg[1:0] EXREG_ctrl_wb  ;
reg[1:0] EXREG_ctrl_mem ;
reg[1:0] EXREG_ctrl_ex  ;
reg[63:0] EXREG_pc;
reg[63:0] EXREG_rs1data  ;
reg[63:0] EXREG_rs2data  ;
reg[63:0] EXREG_imm      ;
reg[63:0] EXREG_rd    ;

wire  [63:0]   dnpc;
wire  [63:0]   result;

reg       MEMRGE_en;
reg[1:0]  MEMREG_ctrl_mem ;
reg[1:0]  MEMREG_ctrl_wb  ;
reg[63:0] MEMREG_dnpc      ;
reg[63:0] MEMREG_result    ;
reg[63:0] MEMREG_rd    ;

wire [63:0]addr;
wire [63:0]dinA;
wire [63:0]doutA;
wire [63:0]douts;

reg WBREG_en;
reg [1:0]WBREG_ctrl_wb;
reg [63:0]WBREG_memdata;
reg [63:0]WBREG_rddata;
reg [63:0]WBREG_rd;

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .rst(rst),
  .dnpc(MEMREG_dnpc),
  .PCsrc(PCsrc),
  .pc(pc),
  .inst(inst)
  );

always@(posedge clk)
begin
  if(IDREG_en)begin
    IDREG_pc<=pc;
    IDREG_inst<=inst;
end


ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .inst     (IDREG_inst     ),
  .rdwen    (WBREG_ctrl_wb    ),
  .rdin     (WBREG_rd     ),
  .rddata   (WBREG_rddata   ),
  .ctrl_wb  (ctrl_wb  ),
  .ctrl_mem (ctrl_mem ),
  .ctrl_ex  (ctrl_ex  ),
  .rs1data  (rs1data  ),
  .rs2data  (rs2data  ),
  .imm      (imm      ),
  .rdout    (rdout    )
);

always@(posedge clk)
begin
  if(EXREG_en)begin
    EXREG_ctrl_wb <=ctrl_wb ;
    EXREG_ctrl_mem<=ctrl_mem;
    EXREG_ctrl_ex <=ctrl_ex ;
    EXREG_pc <=IDREG_pc ;
    EXREG_rs1data <=rs1data ;
    EXREG_rs2data <=rs2data ;
    EXREG_imm     <=imm     ;
    EXREG_rd   <=rdout   ;
  end
end


ysyx_22050133_EXU ysyx_22050133_EXU_dut(
  .clk    (clk    ) ,
  .rst    (rst    ) ,
  .pc     (EXREG_pc) ,
  .ctrl_ex(EXREG_ctrl_ex) ,
  .rs1data(EXREG_rs1data) ,
  .rs2data(EXREG_rs2data) ,
  .imm    (EXREG_imm    ) ,
  .dnpc   (dnpc   ) ,
  .result (result ) 
);

always@(posedge clk)
begin
  if(MEMREG_en)begin
    MEMREG_ctrl_mem<=EXREG_ctrl_mem;
    MEMREG_ctrl_wb <=EXREG_ctrl_wb ;
    MEMREG_dnpc <=dnpc;
    MEMREG_result <= result;
    MEMREG_rd <= EXREG_rd;
  end
end

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

always @(*)begin
  set_pc(pc,npc,inst);
end

always@(posedge clk)
begin
  if(WBREG_en)begin
    WBREG_ctrl_wb <=MEMREG_ctrl_wb ;
    WBREG_rddata<=MEMREG_result;
    WBREG_rd<=MEMREG_rd;
  end
end
endmodule
