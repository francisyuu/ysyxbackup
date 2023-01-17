`timescale 1ns/1ns
`include "npcvsrc/npcdefine.v"
//`include "npcdefine.v"
module ysyx_22050133_NPC(
  input               clk     ,
  input               rst     
  );

wire displayinfo=0;

wire pcSrc;
wire[63:0] pc;
wire [31:0] inst;

reg       IDREG_en  ;
reg[63:0] IDREG_pc  ;
reg[31:0] IDREG_inst;

wire  [`ysyx_22050133_ctrl_wb_len :0]   ctrl_wb ;
wire  [`ysyx_22050133_ctrl_mem_len:0]   ctrl_mem;
wire  [`ysyx_22050133_ctrl_ex_len :0]   ctrl_ex ;
wire          has_hazard;
wire  [4:0]   rs1   ;
wire  [4:0]   rs2   ;
wire  [63:0]  rs1data ;
wire  [63:0]  rs2data ;
wire  [63:0]  imm     ;
wire  [4:0]   rdout   ;

reg      EXREG_en;
reg[`ysyx_22050133_ctrl_wb_len :0] EXREG_ctrl_wb  ;
reg[`ysyx_22050133_ctrl_mem_len:0] EXREG_ctrl_mem ;
reg[`ysyx_22050133_ctrl_ex_len :0] EXREG_ctrl_ex  ;
reg[63:0] EXREG_pc       ;
reg[4:0]  EXREG_rs1      ;
reg[4:0]  EXREG_rs2      ;
reg[63:0] EXREG_rs1data  ;
reg[63:0] EXREG_rs2data  ;
reg[63:0] EXREG_csrdata  ;
reg[63:0] EXREG_imm      ;
reg[4:0]  EXREG_rd       ;

wire  [63:0]   dnpc;
wire  [63:0]   result;
wire  [63:0]   wdata;
wire  [63:0]  csrdata ;
wire  [1:0]    forward_ALUSrc1;
wire  [1:0]    forward_ALUSrc2;
wire  [1:0]    forward_wdataSrc;

reg       MEMREG_en;
reg[`ysyx_22050133_ctrl_wb_len :0]  MEMREG_ctrl_mem ;
reg[`ysyx_22050133_ctrl_mem_len:0]  MEMREG_ctrl_wb  ;
reg[63:0] MEMREG_dnpc      ;
reg[63:0] MEMREG_result    ;
reg[63:0] MEMREG_wdata    ;
reg[63:0] MEMREG_csrdata    ;
reg[63:0] MEMREG_imm    ;
reg[4:0]  MEMREG_rs2     ;
reg[4:0]  MEMREG_rd     ;

wire [63:0]addr;
wire [63:0]din;
wire [63:0]dinA;
wire [63:0]doutA;
wire [63:0]douts;

reg WBREG_en;
reg [`ysyx_22050133_ctrl_wb_len:0]WBREG_ctrl_wb;
reg [63:0]WBREG_rddata ;
reg [4:0] WBREG_rd    ;
wire[63:0]rddata      ;

`ifdef MULTICYCLE 
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

`else
always@(posedge clk)
begin
  if(rst)begin
    IDREG_en<=1;
    EXREG_en<=1;
    MEMREG_en<=1;
    WBREG_en<=1;
  end
end

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .IFU_en(~has_hazard|pcSrc),
  .rst(rst),
  .dnpc(MEMREG_dnpc),
  .pcSrc(pcSrc),
  .pc(pc),
  .inst(inst)
  );
`endif


always@(posedge clk)
begin
  if(rst|pcSrc)begin
    IDREG_pc<=0;
    IDREG_inst<=0;
    if(WBREG_ctrl_wb[8])stopsim();
  end
  else if(IDREG_en&(~has_hazard))begin
    if(WBREG_ctrl_wb[8])stopsim();
    IDREG_pc<=pc;
    IDREG_inst<=inst;
  end
end

`ifdef MULTICYCLE 
always@(posedge clk)
  if(IDREG_en)begin
`else
always@(*)
  begin
`endif
  if(displayinfo==1)$monitor("\
            IDREG_en  =%h,     \
            IDREG_pc  =%h,     \
            IDREG_inst=%h,     \
            \
            EXREG_en  =%h,     \
            EXREG_ctrl_wb =%h, \
            EXREG_ctrl_mem=%h, \
            EXREG_ctrl_ex =%h, \
            has_hazard=%d,     \
            EXREG_pc     =%h,  \
            EXREG_rs1    =%d,  \
            EXREG_rs2    =%d,  \
            EXREG_rs1data=%h,  \
            EXREG_rs2data=%h,  \
            EXREG_imm    =%h,  \
            EXREG_rd     =%d,  \
            EXREG_npcSrc =%d,  \
            EXREG_ALUSEXT=%d,  \
            EXREG_addSrc =%d,  \
            EXREG_ALUSrc1=%d,  \
            EXREG_ALUSrc2=%d,  \
            EXREG_ALUop  =%d,  \
            forward_ALUSrc1=%h,\
            forward_ALUSrc2=%h,\
            forward_wdataSrc=%h,\
            \
            MEMREG_en  =%h,    \
            MEMREG_ctrl_mem=%h,\
            MEMREG_ctrl_wb =%h,\
            MEMREG_dnpc  =%h,  \
            MEMREG_result=%h,  \
            MEMREG_wdata =%h,  \
            MEMREG_csrdata =%h,  \
            MEMREG_imm   =%h,  \
            MEMREG_rs2    =%d,  \
            MEMREG_rd    =%d,  \
            MEMREG_pcSrcJ=%d,  \
            MEMREG_pcSrcB=%d,  \
            MEMREG_read=%d,  \
            MEMREG_write=%d,  \
            MEMREG_wmask=%h,  \
            WBREG_rdSrc    =%d,   \
            WBREG_rdSEXT   =%d,   \
            rddata      =%h \
            \
            WBREG_en  =%h,     \
            WBREG_ctrl_wb=%h,  \
            WBREG_rddata =%h,   \
            WBREG_rd    =%d,   \
            WBREG_ebreak    =%d,   \
            WBREG_rdWen    =%d,   \
                  "   
         ,IDREG_en  
         ,IDREG_pc  
         ,IDREG_inst

         ,EXREG_en  
         ,EXREG_ctrl_wb 
         ,EXREG_ctrl_mem
         ,EXREG_ctrl_ex 
         ,has_hazard
         ,EXREG_pc     
         ,EXREG_rs1
         ,EXREG_rs2
         ,EXREG_rs1data
         ,EXREG_rs2data
         ,EXREG_imm    
         ,EXREG_rd     
         ,EXREG_ctrl_ex[10]
         ,EXREG_ctrl_ex[9]
         ,EXREG_ctrl_ex[8]
         ,EXREG_ctrl_ex[7]
         ,EXREG_ctrl_ex[6:5]
         ,EXREG_ctrl_ex[4:0]
         ,forward_ALUSrc1
         ,forward_ALUSrc2
         ,forward_wdataSrc

         ,MEMREG_en  
         ,MEMREG_ctrl_mem
         ,MEMREG_ctrl_wb 
         ,MEMREG_dnpc  
         ,MEMREG_result
         ,MEMREG_wdata 
         ,MEMREG_csrdata 
         ,MEMREG_imm   
         ,MEMREG_rs2    
         ,MEMREG_rd    
         ,MEMREG_ctrl_mem[11]
         ,MEMREG_ctrl_mem[10]
         ,MEMREG_ctrl_mem[9]
         ,MEMREG_ctrl_mem[8]
         ,MEMREG_ctrl_mem[7:0]
         ,MEMREG_ctrl_wb[7:6]
         ,MEMREG_ctrl_wb[4:0]
         ,rddata

         ,WBREG_en  
         ,WBREG_ctrl_wb
         ,WBREG_rddata 
         ,WBREG_rd    
         ,WBREG_ctrl_wb[8]
         ,WBREG_ctrl_wb[5]
               );
end


ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .clk      (clk),
  .rst      (rst),
  .pc       (IDREG_pc     ),
  .inst     (IDREG_inst     ),
  .rdwen    (WBREG_ctrl_wb[5]    ),
  .rdin     (WBREG_rd     ),
  .rddata   (WBREG_rddata   ),
  .hazard_detect_mem_read(EXREG_ctrl_mem[9]),
  .hazard_detect_rd(EXREG_rd),
  .has_hazard(has_hazard),
  .ctrl_wb_out  (ctrl_wb  ),
  .ctrl_mem_out (ctrl_mem ),
  .ctrl_ex_out  (ctrl_ex  ),
  .rs1      (rs1),
  .rs2      (rs2),
  .rs1data  (rs1data  ),
  .rs2data  (rs2data  ),
  .imm      (imm      ),
  .rdout    (rdout    )
);

always@(posedge clk)
begin
  if(rst|pcSrc)begin
    EXREG_ctrl_wb <=0;
    EXREG_ctrl_mem<=0;
    EXREG_ctrl_ex <=0;
    EXREG_pc      <=0;
    EXREG_rs1     <=0;
    EXREG_rs2     <=0;
    EXREG_rs1data <=0;
    EXREG_rs2data <=0;
    EXREG_imm     <=0;
    EXREG_rd      <=0;
  end
  else if(EXREG_en)begin
    EXREG_ctrl_wb <=ctrl_wb ;
    EXREG_ctrl_mem<=ctrl_mem;
    EXREG_ctrl_ex <=ctrl_ex ;
    EXREG_pc      <=IDREG_pc ;
    EXREG_rs1     <=rs1     ;
    EXREG_rs2     <=rs2     ;
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
  .forward_ALUSrc1(forward_ALUSrc1),
  .forward_ALUSrc2(forward_ALUSrc2),
  .forward_data_mem(rddata),
  .forward_data_wb(WBREG_rddata),
  .forward_wdataSrc(forward_wdataSrc),
  .forward_wdata_mem(rddata),
  .forward_wdata_wb(WBREG_rddata),
  .dnpc   (dnpc   ) ,
  .result (result ) ,
  .csrdata(csrdata) ,
  .wdata (wdata ) 
);
`ifdef MULTICYCLE 
assign forward_ALUSrc1=0;
assign forward_ALUSrc2=0;
assign forward_wdataSrc=0;
`else
assign forward_ALUSrc1= EXREG_rs1==0?0
                       :MEMREG_ctrl_wb[5]&(MEMREG_rd==EXREG_rs1)?2
                       :WBREG_ctrl_wb[5]&(WBREG_rd==EXREG_rs1)?1
                       :0;
assign forward_ALUSrc2= EXREG_rs2==0?0
                       :MEMREG_ctrl_wb[5]&(MEMREG_rd==EXREG_rs2)?2
                       :WBREG_ctrl_wb[5]&(WBREG_rd==EXREG_rs2)?1
                       :0;
assign forward_wdataSrc= EXREG_rs2==0?0
                       :EXREG_ctrl_mem[8]&(MEMREG_rd==EXREG_rs2)?2
                       :EXREG_ctrl_mem[8]&(WBREG_rd==EXREG_rs2)?1
                       :0;
`endif

always@(posedge clk)
begin
  if(rst|pcSrc)begin
    MEMREG_ctrl_mem<=0;
    MEMREG_ctrl_wb <=0;
    MEMREG_dnpc    <=0;
    MEMREG_result  <=0;
    MEMREG_wdata    <=0;
    MEMREG_csrdata    <=0;
    MEMREG_imm    <=0;
    MEMREG_rs2      <=0;
    MEMREG_rd      <=0;
  end 
  else if(MEMREG_en)begin
    MEMREG_ctrl_mem<= EXREG_ctrl_mem;
    MEMREG_ctrl_wb <= EXREG_ctrl_wb ;
    MEMREG_dnpc    <= dnpc;
    MEMREG_result  <= result;
    MEMREG_wdata    <= wdata;
    MEMREG_csrdata    <= csrdata;
    MEMREG_imm     <= EXREG_imm;
    MEMREG_rs2      <= EXREG_rs2;
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
    if(WBREG_en==1)vmem_write(addr, doutA, wmask,dout);
    //vmem_write(addr, doutA, wmask,dout);
end

`ifdef MULTICYCLE 
always @(*)begin
  set_pc(pc,dnpc,inst);
end
`else
always @(*)begin
  set_pc(IDREG_pc,dnpc,IDREG_inst);
end
`endif


always@(posedge clk)
begin
  if(rst)begin
    WBREG_ctrl_wb <=0 ;
    WBREG_rddata<=0;
    WBREG_rd<=0;
  end
  else if(WBREG_en)begin
    WBREG_ctrl_wb <=MEMREG_ctrl_wb ;
    WBREG_rddata<=rddata;
    WBREG_rd<=MEMREG_rd;
  end
end
wire[63:0] rddata_raw=
        MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_alu?MEMREG_result
        :MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_mem?din
        :MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_imm?MEMREG_imm
        :MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_csr?MEMREG_csrdata
        :0;
assign rddata=
    MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_b?SEXT(rddata_raw,0)
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_bu?{{56'd0},rddata_raw[7:0]}
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_h?SEXT(rddata_raw,1)
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_hu?{{48'd0},rddata_raw[15:0]}
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_w?SEXT(rddata_raw,2)
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_wu?{{32'd0},rddata_raw[31:0]}
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_d?rddata_raw
    :0;
endmodule
