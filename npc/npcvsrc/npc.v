`timescale 1ns/1ns
`include "npcvsrc/npcdefine.v"
//`include "npcdefine.v"
module ysyx_22050133_NPC(
  input               clk     ,
  input               rst     
  );


wire pcSrc;
wire[63:0] pc;
wire [31:0] inst;

reg       IDREG_en  ;
reg[63:0] IDREG_pc  ;
reg[31:0] IDREG_inst;

wire  [`ysyx_22050133_ctrl_wb_len :0]   ctrl_wb ;
wire  [`ysyx_22050133_ctrl_mem_len:0]   ctrl_mem;
wire  [`ysyx_22050133_ctrl_ex_len :0]   ctrl_ex ;
wire  [63:0]  rs1data ;
wire  [63:0]  rs2data ;
wire  [63:0]  imm     ;
wire  [4:0]   rdout   ;

reg      EXREG_en;
reg[`ysyx_22050133_ctrl_wb_len :0] EXREG_ctrl_wb  ;
reg[`ysyx_22050133_ctrl_mem_len:0] EXREG_ctrl_mem ;
reg[`ysyx_22050133_ctrl_ex_len :0] EXREG_ctrl_ex  ;
reg[63:0] EXREG_pc       ;
reg[63:0] EXREG_rs1data  ;
reg[63:0] EXREG_rs2data  ;
reg[63:0] EXREG_imm      ;
reg[4:0]  EXREG_rd       ;

wire  [63:0]   dnpc;
wire  [63:0]   result;

reg       MEMREG_en;
reg[`ysyx_22050133_ctrl_wb_len :0]  MEMREG_ctrl_mem ;
reg[`ysyx_22050133_ctrl_mem_len:0]  MEMREG_ctrl_wb  ;
reg[63:0] MEMREG_dnpc      ;
reg[63:0] MEMREG_result    ;
reg[63:0] MEMREG_wdata    ;
reg[63:0] MEMREG_imm    ;
reg[4:0]  MEMREG_rd     ;

wire [63:0]addr;
wire [63:0]din;
wire [63:0]dinA;
wire [63:0]doutA;
wire [63:0]douts;

reg WBREG_en;
reg [`ysyx_22050133_ctrl_wb_len:0]WBREG_ctrl_wb;
reg [63:0]WBREG_result;
reg [63:0]WBREG_rdata ;
reg [63:0]WBREG_imm   ;
reg [4:0] WBREG_rd    ;
wire[63:0]rddata      ;

always@(posedge clk)
begin
  if(rst)begin
    IDREG_en<=1;
    EXREG_en<=0;
    MEMREG_en<=0;
    WBREG_en<=0;
  end
  else if(IDREG_en==1)begin
    IDREG_en<=0;
    EXREG_en<=1;
  end
  else if(EXREG_en==1)begin
    EXREG_en<=0;
    MEMREG_en<=1;
  end
  else if(MEMREG_en==1)begin
    MEMREG_en<=0;
    WBREG_en<=1;
  end
  else if(WBREG_en==1)begin
    WBREG_en<=0;
    IDREG_en<=1;
  end
end

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .IFU_en(WBREG_en),
  .rst(rst),
  .dnpc(MEMREG_dnpc),
  .pcSrc(pcSrc),
  .pc(pc),
  .inst(inst)
  );

wire displayinfo=0;
always@(posedge clk)
begin
  if(rst)begin
    IDREG_pc<=0;
    IDREG_inst<=0;
  end
  if(IDREG_en)begin
    IDREG_pc<=pc;
    IDREG_inst<=inst;

  if(displayinfo==1)$display("\
            IDREG_en  =%h,     \
            IDREG_pc  =%h,     \
            IDREG_inst=%h,     \
            EXREG_en  =%h,     \
            EXREG_ctrl_wb =%h, \
            EXREG_ctrl_mem=%h, \
            EXREG_ctrl_ex =%h, \
            EXREG_pc     =%h,  \
            EXREG_rs1data=%h,  \
            EXREG_rs2data=%h,  \
            EXREG_imm    =%h,  \
            EXREG_rd     =%h,  \
            EXREG_ALUSEXT=%d,  \
            EXREG_addSrc =%d,  \
            EXREG_ALUSrc1=%d,  \
            EXREG_ALUSrc2=%d,  \
            EXREG_ALUop  =%d,  \
            MEMREG_en  =%h,    \
            MEMREG_ctrl_mem=%h,\
            MEMREG_ctrl_wb =%h,\
            MEMREG_dnpc  =%h,  \
            MEMREG_result=%h,  \
            MEMREG_wdata =%h,  \
            MEMREG_imm   =%h,  \
            MEMREG_rd    =%h,  \
            MEMREG_pcSrcJ=%d,  \
            MEMREG_pcSrcB=%d,  \
            MEMREG_read=%d,  \
            MEMREG_write=%d,  \
            MEMREG_wmask=%h,  \
            WBREG_en  =%h,     \
            WBREG_ctrl_wb=%h,  \
            WBREG_result=%h,   \
            WBREG_rdata =%h,   \
            WBREG_imm   =%h,   \
            WBREG_rd    =%h,   \
            WBREG_rdSrc    =%d,   \
            WBREG_rdWen    =%d,   \
            WBREG_rdSEXT   =%d,   \
            rddata      =%h"   
         ,IDREG_en  
         ,IDREG_pc  
         ,IDREG_inst
         ,EXREG_en  
         ,EXREG_ctrl_wb 
         ,EXREG_ctrl_mem
         ,EXREG_ctrl_ex 
         ,EXREG_pc     
         ,EXREG_rs1data
         ,EXREG_rs2data
         ,EXREG_imm    
         ,EXREG_rd     
         ,EXREG_ctrl_ex[9]
         ,EXREG_ctrl_ex[8]
         ,EXREG_ctrl_ex[7]
         ,EXREG_ctrl_ex[6:5]
         ,EXREG_ctrl_ex[4:0]
         ,MEMREG_en  
         ,MEMREG_ctrl_mem
         ,MEMREG_ctrl_wb 
         ,MEMREG_dnpc  
         ,MEMREG_result
         ,MEMREG_wdata 
         ,MEMREG_imm   
         ,MEMREG_rd    
         ,MEMREG_ctrl_mem[11]
         ,MEMREG_ctrl_mem[10]
         ,MEMREG_ctrl_mem[9]
         ,MEMREG_ctrl_mem[8]
         ,MEMREG_ctrl_mem[7:0]
         ,WBREG_en  
         ,WBREG_ctrl_wb
         ,WBREG_result
         ,WBREG_rdata 
         ,WBREG_imm   
         ,WBREG_rd    
         ,WBREG_ctrl_wb[7:6]
         ,WBREG_ctrl_wb[5]
         ,WBREG_ctrl_wb[4:0]
         ,rddata      );
  end
end


ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .clk      (clk),
  .rst      (rst),
  .inst     (IDREG_inst     ),
  .rdwen    (WBREG_ctrl_wb[5]    ),
  .rdin     (WBREG_rd     ),
  .rddata   (rddata   ),
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
  if(rst)begin
    EXREG_ctrl_wb <=0;
    EXREG_ctrl_mem<=0;
    EXREG_ctrl_ex <=0;
    EXREG_pc      <=0;
    EXREG_rs1data <=0;
    EXREG_rs2data <=0;
    EXREG_imm     <=0;
    EXREG_rd      <=0;
  end
  else if(EXREG_en)begin
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
  .ctrl_ex(EXREG_ctrl_ex) ,
  .pc     (EXREG_pc) ,
  .rs1data(EXREG_rs1data) ,
  .rs2data(EXREG_rs2data) ,
  .imm    (EXREG_imm    ) ,
  .dnpc   (dnpc   ) ,
  .result (result ) 
);

always@(posedge clk)
begin
  if(rst)begin
    MEMREG_ctrl_mem<=0;
    MEMREG_ctrl_wb <=0;
    MEMREG_dnpc    <=0;
    MEMREG_result  <=0;
    MEMREG_wdata    <=0;
    MEMREG_imm    <=0;
    MEMREG_rd      <=0;
  end 
  if(MEMREG_en)begin
    MEMREG_ctrl_mem<= EXREG_ctrl_mem;
    MEMREG_ctrl_wb <= EXREG_ctrl_wb ;
    MEMREG_dnpc    <= dnpc;
    MEMREG_result  <= result;
    MEMREG_wdata    <= EXREG_rs2data;
    MEMREG_imm     <= EXREG_imm;
    MEMREG_rd      <= EXREG_rd;
  end
end
assign pcSrc=MEMREG_ctrl_mem[11]|(MEMREG_ctrl_mem[10]&MEMREG_result[0]);

assign addr=MEMREG_result;
wire[7:0] wmask=MEMREG_ctrl_mem[7:0];
wire[63:0] dout=MEMREG_wdata;

always @(*) begin
    vmem_read(addr, dinA, {7'd0,MEMREG_ctrl_mem[9]});
    //$monitor("addr=%x dinA=%x din=%x",addr,dinA,din);
end

assign din=addr[2] ? 
            addr[1] ? 
              addr[0] ? {56'd0,dinA[63:56]}:{48'd0,dinA[63:48]}
              :addr[0] ? {40'd0,dinA[63:40]}:{32'd0,dinA[63:32]}
            :addr[1] ? 
              addr[0] ? {24'd0,dinA[63:24]}:{16'd0,dinA[63:16]}
              :addr[0] ? {8'd0,dinA[63:8]}:dinA;

wire[63:0] wmask1={{8{wmasks[7]}},{8{wmasks[6]}},{8{wmasks[5]}},{8{wmasks[4]}},{8{wmasks[3]}},{8{wmasks[2]}},{8{wmasks[1]}},{8{wmasks[0]}}};
wire [7:0]wmasks=wmask<<addr[2:0];
assign doutA=(dinA&(~wmask1))|(douts&wmask1);
assign douts=dout<<{addr[2:0],3'd0};

always @(*) begin
    vmem_write(addr, doutA, wmask,dout);
end

always @(*)begin
  set_pc(pc,dnpc,inst);
end


always@(posedge clk)
begin
  if(rst)begin
    WBREG_ctrl_wb <=0 ;
    WBREG_result<=0;
    WBREG_rdata<=0;
    WBREG_imm<=0;
    WBREG_rd<=0;
  end
  if(WBREG_en)begin
    WBREG_ctrl_wb <=MEMREG_ctrl_wb ;
    WBREG_result<=MEMREG_result;
    WBREG_rdata<=din;
    WBREG_imm<=MEMREG_imm;
    WBREG_rd<=MEMREG_rd;
  end
end
wire[63:0] rddata_raw=
        WBREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_alu?WBREG_result
        :WBREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_mem?WBREG_rdata
        :WBREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_imm?WBREG_imm
        :0;
assign rddata=
    WBREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_b?SEXT(rddata_raw,0)
    :WBREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_bu?{{56'd0},rddata_raw[7:0]}
    :WBREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_h?SEXT(rddata_raw,1)
    :WBREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_hu?{{48'd0},rddata_raw[15:0]}
    :WBREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_w?SEXT(rddata_raw,2)
    :WBREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_wu?{{32'd0},rddata_raw[31:0]}
    :WBREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_d?rddata_raw
    :0;
wire monitor_ctrl=0;
always@(*)if(monitor_ctrl==1)begin
  $monitor("\
            IDREG_en  =%h,     \
            IDREG_pc  =%h,     \
            IDREG_inst=%h,     \
            EXREG_en  =%h,     \
            EXREG_ctrl_wb =%h, \
            EXREG_ctrl_mem=%h, \
            EXREG_ctrl_ex =%h, \
            EXREG_pc     =%h,  \
            EXREG_rs1data=%h,  \
            EXREG_rs2data=%h,  \
            EXREG_imm    =%h,  \
            EXREG_rd     =%h,  \
            EXREG_ALUSEXT=%d,  \
            EXREG_addSrc =%d,  \
            EXREG_ALUSrc1=%d,  \
            EXREG_ALUSrc2=%d,  \
            EXREG_ALUop  =%d,  \
            MEMREG_en  =%h,    \
            MEMREG_ctrl_mem=%h,\
            MEMREG_ctrl_wb =%h,\
            MEMREG_dnpc  =%h,  \
            MEMREG_result=%h,  \
            MEMREG_wdata =%h,  \
            MEMREG_imm   =%h,  \
            MEMREG_rd    =%h,  \
            MEMREG_pcSrcJ=%d,  \
            MEMREG_pcSrcB=%d,  \
            MEMREG_read=%d,  \
            MEMREG_write=%d,  \
            MEMREG_wmask=%h,  \
            WBREG_en  =%h,     \
            WBREG_ctrl_wb=%h,  \
            WBREG_result=%h,   \
            WBREG_rdata =%h,   \
            WBREG_imm   =%h,   \
            WBREG_rd    =%h,   \
            WBREG_rdSrc    =%d,   \
            WBREG_rdWen    =%d,   \
            WBREG_rdSEXT   =%d,   \
            rddata      =%h"   
         ,IDREG_en  
         ,IDREG_pc  
         ,IDREG_inst
         ,EXREG_en  
         ,EXREG_ctrl_wb 
         ,EXREG_ctrl_mem
         ,EXREG_ctrl_ex 
         ,EXREG_pc     
         ,EXREG_rs1data
         ,EXREG_rs2data
         ,EXREG_imm    
         ,EXREG_rd     
         ,EXREG_ctrl_ex[9]
         ,EXREG_ctrl_ex[8]
         ,EXREG_ctrl_ex[7]
         ,EXREG_ctrl_ex[6:5]
         ,EXREG_ctrl_ex[4:0]
         ,MEMREG_en  
         ,MEMREG_ctrl_mem
         ,MEMREG_ctrl_wb 
         ,MEMREG_dnpc  
         ,MEMREG_result
         ,MEMREG_wdata 
         ,MEMREG_imm   
         ,MEMREG_rd    
         ,MEMREG_ctrl_mem[11]
         ,MEMREG_ctrl_mem[10]
         ,MEMREG_ctrl_mem[9]
         ,MEMREG_ctrl_mem[8]
         ,MEMREG_ctrl_mem[7:0]
         ,WBREG_en  
         ,WBREG_ctrl_wb
         ,WBREG_result
         ,WBREG_rdata 
         ,WBREG_imm   
         ,WBREG_rd    
         ,WBREG_ctrl_wb[7:6]
         ,WBREG_ctrl_wb[5]
         ,WBREG_ctrl_wb[4:0]
         ,rddata      );

end
endmodule
