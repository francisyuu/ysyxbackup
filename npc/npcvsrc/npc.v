`timescale 1ns/1ns
`include "npcvsrc/npcdefine.v"
//`include "npcdefine.v"
module ysyx_22050133_NPC # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
  input               clk     ,
  input               rst     
  );

wire displayinfo=0;

wire pcSrc;
wire pop=has_hazard;

`ifdef MULTICYCLE 
wire flush=0;
wire block=block_axi_ifu|block_axi_mem;
//wire block=block_axi_ifu;
`else
wire flush=pcSrc&(~block);
//wire block=(block_axi_mem|block_axi_ifu|has_hazard)&(~pcSrc);
wire block=(block_axi_mem|block_axi_ifu);
`endif

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
  else if(IDREG_en==1&(~block))begin
    IDREG_en<=0;
    EXREG_en<=1;
  end
  else if(EXREG_en==1&(~block))begin
    EXREG_en<=0;
    MEMREG_en<=1;
  end
  else if(MEMREG_en==1&(~block))begin
    MEMREG_en<=0;
    WBREG_en<=1;
  end
  else if(WBREG_en==1&(~block))begin
    WBREG_en<=0;
    IDREG_en<=1;
  end
end

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .IFU_en(WBREG_en&(~block)),
  .rst(rst),
  .dnpc(dnpc),
  .pcSrc(pcSrc),
  .inst64(ifu_data_read_o),
  .pc_ready_i(ifu_rw_ready_o),
  .pc_valid_o(ifu_rw_valid_i),
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
  .rst(rst),
  .IFU_en(~(block|pop)),
  .dnpc(dnpc),
  .pcSrc(pcSrc),
  .inst64(ifu_data_read_o),
  .pc_ready_i(ifu_rw_ready_o),
  .pc_valid_o(ifu_rw_valid_i),
  .pc(pc),
  .inst(inst)
  );
`endif

wire                               ifu_rw_valid_i;         
wire                               ifu_rw_ready_o;     
wire [RW_DATA_WIDTH-1:0]           ifu_data_read_o;  
wire  [RW_DATA_WIDTH-1:0]          ifu_rw_w_data_i;  
wire  [RW_ADDR_WIDTH-1:0]          ifu_rw_addr_i;    
wire  [7:0]                        ifu_rw_size_i;    

// Advanced eXtensible Interface
wire                               ifu_axi_aw_ready_i;             
wire                               ifu_axi_aw_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          ifu_axi_aw_addr_o;
wire [2:0]                         ifu_axi_aw_prot_o;
//wire [AXI_ID_WIDTH-1:0]           ifu_axi_aw_id_o;
//wire [AXI_USER_WIDTH-1:0]         ifu_axi_aw_user_o;
//wire [7:0]                        ifu_axi_aw_len_o;
//wire [2:0]                        ifu_axi_aw_size_o;
//wire [1:0]                        ifu_axi_aw_burst_o;
//wire                              ifu_axi_aw_lock_o;
//wire [3:0]                        ifu_axi_aw_cache_o;
//wire [3:0]                        ifu_axi_aw_qos_o;
//wire [3:0]                        ifu_axi_aw_region_o;

wire                               ifu_axi_w_ready_i;              
wire                               ifu_axi_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          ifu_axi_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        ifu_axi_w_strb_o;
//wire                              ifu_axi_w_last_o;
//wire [AXI_USER_WIDTH-1:0]         ifu_axi_w_user_o;

wire                               ifu_axi_b_ready_o;          
wire                               ifu_axi_b_valid_i;
wire  [1:0]                        ifu_axi_b_resp_i;               
//wire  [AXI_ID_WIDTH-1:0]           ifu_axi_b_id_i;
//wire  [AXI_USER_WIDTH-1:0]         ifu_axi_b_user_i;

wire                               ifu_axi_ar_ready_i;             
wire                               ifu_axi_ar_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          ifu_axi_ar_addr_o;
wire [2:0]                         ifu_axi_ar_prot_o;
//wire [AXI_ID_WIDTH-1:0]           ifu_axi_ar_id_o;
//wire [AXI_USER_WIDTH-1:0]         ifu_axi_ar_user_o;
//wire [7:0]                        ifu_axi_ar_len_o;
//wire [2:0]                        ifu_axi_ar_size_o;
//wire [1:0]                        ifu_axi_ar_burst_o;
//wire                              ifu_axi_ar_lock_o;
//wire [3:0]                        ifu_axi_ar_cache_o;
//wire [3:0]                        ifu_axi_ar_qos_o;
//wire [3:0]                        ifu_axi_ar_region_o;

wire                               ifu_axi_r_ready_o;          
wire                               ifu_axi_r_valid_i;             
wire  [1:0]                        ifu_axi_r_resp_i;
wire  [AXI_DATA_WIDTH-1:0]         ifu_axi_r_data_i;
//wire                               ifu_axi_r_last_i;
//wire  [AXI_ID_WIDTH-1:0]           ifu_axi_r_id_i;
//wire  [AXI_USER_WIDTH-1:0]         ifu_axi_r_user_i

wire block_axi_ifu=~(~ifu_rw_valid_i&ifu_rw_ready_o);
//always@(posedge clk)begin
  //$display("
//end

ysyx_22050133_axi_master ysyx_22050133_axi_master_ifu(
    .clk              (clk),
    .rst              (rst),

    .rw_valid_i       (ifu_rw_valid_i),            
    .rw_ready_o       (ifu_rw_ready_o),     
    .data_read_o      (ifu_data_read_o),  
    .rw_w_data_i      (ifu_rw_w_data_i),  
    .rw_addr_i        (pc),    
    .rw_size_i        (0),    
    .rw_if_i          (1),    
    // Advanced eXtensible Intenterface
    .axi_aw_ready_i   (ifu_axi_aw_ready_i),               
    .axi_aw_valid_o   (ifu_axi_aw_valid_o),
    .axi_aw_addr_o    (ifu_axi_aw_addr_o),
    .axi_aw_prot_o    (ifu_axi_aw_prot_o),
  //.axi_aw_id_o      (ifu_axi_aw_id_o),
  //.axi_aw_user_o    (ifu_axi_aw_user_o),
  //.axi_aw_len_o     (ifu_axi_aw_len_o),
  //.axi_aw_size_o    (ifu_axi_aw_size_o),
  //.axi_aw_burst_o   (ifu_axi_aw_burst_o),
  //.axi_aw_lock_o    (ifu_axi_aw_lock_o),
  //.axi_aw_cache_o   (ifu_axi_aw_cache_o),
  //.axi_aw_qos_o     (ifu_axi_aw_qos_o),
  //.axi_aw_region_o  (ifu_axi_aw_region_o),
                                           
    .axi_w_ready_i    (ifu_axi_w_ready_i),                
    .axi_w_valid_o    (ifu_axi_w_valid_o),
    .axi_w_data_o     (ifu_axi_w_data_o),
    .axi_w_strb_o     (ifu_axi_w_strb_o),
    //.axi_w_last_o   (ifu_axi_w_last_o),
    //.axi_w_user_o   (ifu_axi_w_user_o),
                                           
    .axi_b_ready_o    (ifu_axi_b_ready_o),            
    .axi_b_valid_i    (ifu_axi_b_valid_i),
    .axi_b_resp_i     (ifu_axi_b_resp_i),                 
    //.axi_b_id_i     (ifu_axi_b_id_i),
    //.axi_b_user_i   (ifu_axi_b_user_i),
                                           
    .axi_ar_ready_i   (ifu_axi_ar_ready_i),               
    .axi_ar_valid_o   (ifu_axi_ar_valid_o),
    .axi_ar_addr_o    (ifu_axi_ar_addr_o),
    .axi_ar_prot_o    (ifu_axi_ar_prot_o),
  //.axi_ar_id_o      (ifu_axi_ar_id_o),
  //.axi_ar_user_o    (ifu_axi_ar_user_o),
  //.axi_ar_len_o     (ifu_axi_ar_len_o),
  //.axi_ar_size_o    (ifu_axi_ar_size_o),
  //.axi_ar_burst_o   (ifu_axi_ar_burst_o),
  //.axi_ar_lock_o    (ifu_axi_ar_lock_o),
  //.axi_ar_cache_o   (ifu_axi_ar_cache_o),
  //.axi_ar_qos_o     (ifu_axi_ar_qos_o),
  //.axi_ar_region_o  (ifu_axi_ar_region_o),
                                           
    .axi_r_ready_o    (ifu_axi_r_ready_o),            
    .axi_r_valid_i    (ifu_axi_r_valid_i),                
    .axi_r_resp_i     (ifu_axi_r_resp_i),
    .axi_r_data_i     (ifu_axi_r_data_i)
  //.axi_r_last_i     (ifu_axi_r_last_i),
  //.axi_r_id_i       (ifu_axi_r_id_i),
  //.axi_r_user_i     (ifu_axi_r_user_i)           
);
// Advanced eXtensible Interface
wire                               axi_aw_ready_i;             
wire                               axi_aw_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          axi_aw_addr_o;
wire [2:0]                         axi_aw_prot_o;
//wire [AXI_ID_WIDTH-1:0]          axi_aw_id_o;
//wire [AXI_USER_WIDTH-1:0]        axi_aw_user_o;
//wire [7:0]                       axi_aw_len_o;
//wire [2:0]                       axi_aw_size_o;
//wire [1:0]                       axi_aw_burst_o;
//wire                             axi_aw_lock_o;
//wire [3:0]                       axi_aw_cache_o;
//wire [3:0]                       axi_aw_qos_o;
//wire [3:0]                       axi_aw_region_o;

wire                               axi_w_ready_i;              
wire                               axi_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          axi_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        axi_w_strb_o;
//wire                             axi_w_last_o;
//wire [AXI_USER_WIDTH-1:0]        axi_w_user_o;

wire                               axi_b_ready_o;          
wire                               axi_b_valid_i;
wire  [1:0]                        axi_b_resp_i;               
//wire  [AXI_ID_WIDTH-1:0]         axi_b_id_i;
//wire  [AXI_USER_WIDTH-1:0]       axi_b_user_i;

wire                               axi_ar_ready_i;             
wire                               axi_ar_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          axi_ar_addr_o;
wire [2:0]                         axi_ar_prot_o;
//wire [AXI_ID_WIDTH-1:0]          axi_ar_id_o;
//wire [AXI_USER_WIDTH-1:0]        axi_ar_user_o;
//wire [7:0]                       axi_ar_len_o;
//wire [2:0]                       axi_ar_size_o;
//wire [1:0]                       axi_ar_burst_o;
//wire                             axi_ar_lock_o;
//wire [3:0]                       axi_ar_cache_o;
//wire [3:0]                       axi_ar_qos_o;
//wire [3:0]                       axi_ar_region_o;

wire                               axi_r_ready_o;          
wire                               axi_r_valid_i;             
wire  [1:0]                        axi_r_resp_i;
wire  [AXI_DATA_WIDTH-1:0]         axi_r_data_i;
//wire                             axi_r_last_i;
//wire  [AXI_ID_WIDTH-1:0]         axi_r_id_i;
//wire  [AXI_USER_WIDTH-1:0]       axi_r_user_i

ysyx_22050133_axi_arbiter ysyx_22050133_axi_arbiter_dut(
    .clk               (clk),               
    .rst               (rst),
                       
    .s1_axi_aw_ready_o    (ifu_axi_aw_ready_i),                
    .s1_axi_aw_valid_i    (ifu_axi_aw_valid_o),
    .s1_axi_aw_addr_i     (ifu_axi_aw_addr_o),
    .s1_axi_aw_prot_i     (ifu_axi_aw_prot_o),
    //.s1_axi_aw_id_i       (ifu_axi_aw_id_o),
    //.s1_axi_aw_user_i     (ifu_axi_aw_user_o),
    //.s1_axi_aw_len_i      (ifu_axi_aw_len_o),
    //.s1_axi_aw_size_i     (ifu_axi_aw_size_o),
    //.s1_axi_aw_burst_i    (ifu_axi_aw_burst_o),
    //.s1_axi_aw_lock_i     (ifu_axi_aw_lock_o),
    //.s1_axi_aw_cache_i    (ifu_axi_aw_cache_o),
    //.s1_axi_aw_qos_i      (ifu_axi_aw_qos_o),
    //.s1_axi_aw_region_i   (ifu_axi_aw_region_o),
                                            
    .s1_axi_w_ready_o     (ifu_axi_w_ready_i),                  
    .s1_axi_w_valid_i     (ifu_axi_w_valid_o),
    .s1_axi_w_data_i      (ifu_axi_w_data_o),
    .s1_axi_w_strb_i      (ifu_axi_w_strb_o),
    //.s1_axi_w_last_i      (ifu_axi_w_last_o),
    //.s1_axi_w_user_i      (ifu_axi_w_user_o),
                       
    .s1_axi_b_ready_i     (ifu_axi_b_ready_o),                  
    .s1_axi_b_valid_o     (ifu_axi_b_valid_i),
    .s1_axi_b_resp_o      (ifu_axi_b_resp_i),                   
    //.s1_axi_b_id_o        (ifu_axi_b_id_i),
    //.s1_axi_b_user_o      (ifu_axi_b_user_i),
                                            
    .s1_axi_ar_ready_o    (ifu_axi_ar_ready_i),                  
    .s1_axi_ar_valid_i    (ifu_axi_ar_valid_o),
    .s1_axi_ar_addr_i     (ifu_axi_ar_addr_o),
    .s1_axi_ar_prot_i     (ifu_axi_ar_prot_o),
    //.s1_axi_ar_id_i       (ifu_axi_ar_id_o),
    //.s1_axi_ar_user_i     (ifu_axi_ar_user_o),
    //.s1_axi_ar_len_i      (ifu_axi_ar_len_o),
    //.s1_axi_ar_size_i     (ifu_axi_ar_size_o),
    //.s1_axi_ar_burst_i    (ifu_axi_ar_burst_o),
    //.s1_axi_ar_lock_i     (ifu_axi_ar_lock_o),
    //.s1_axi_ar_cache_i    (ifu_axi_ar_cache_o),
    //.s1_axi_ar_qos_i      (ifu_axi_ar_qos_o),
    //.s1_axi_ar_region_i   (ifu_axi_ar_region_o),
                       
    .s1_axi_r_ready_i     (ifu_axi_r_ready_o),                   
    .s1_axi_r_valid_o     (ifu_axi_r_valid_i),                  
    .s1_axi_r_resp_o      (ifu_axi_r_resp_i),
    .s1_axi_r_data_o      (ifu_axi_r_data_i),
    //.s1_axi_r_last_o      (ifu_axi_r_last_i),
    //.s1_axi_r_id_o        (ifu_axi_r_id_i),
    //.s1_axi_r_user_o      (ifu_axi_r_user_i)          

    .s2_axi_aw_ready_o    (mem_axi_aw_ready_i),                
    .s2_axi_aw_valid_i    (mem_axi_aw_valid_o),
    .s2_axi_aw_addr_i     (mem_axi_aw_addr_o),
    .s2_axi_aw_prot_i     (mem_axi_aw_prot_o),
    //.s2_axi_aw_id_i       (mem_axi_aw_id_o),
    //.s2_axi_aw_user_i     (mem_axi_aw_user_o),
    //.s2_axi_aw_len_i      (mem_axi_aw_len_o),
    //.s2_axi_aw_size_i     (mem_axi_aw_size_o),
    //.s2_axi_aw_burst_i    (mem_axi_aw_burst_o),
    //.s2_axi_aw_lock_i     (mem_axi_aw_lock_o),
    //.s2_axi_aw_cache_i    (mem_axi_aw_cache_o),
    //.s2_axi_aw_qos_i      (mem_axi_aw_qos_o),
    //.s2_axi_aw_region_i   (mem_axi_aw_region_o),
                                            
    .s2_axi_w_ready_o     (mem_axi_w_ready_i),                  
    .s2_axi_w_valid_i     (mem_axi_w_valid_o),
    .s2_axi_w_data_i      (mem_axi_w_data_o),
    .s2_axi_w_strb_i      (mem_axi_w_strb_o),
    //.axi_w_last_i      (mem_axi_w_last_o),
    //.axi_w_user_i      (mem_axi_w_user_o),
                       
    .s2_axi_b_ready_i     (mem_axi_b_ready_o),                  
    .s2_axi_b_valid_o     (mem_axi_b_valid_i),
    .s2_axi_b_resp_o      (mem_axi_b_resp_i),                   
    //.s2_axi_b_id_o        (mem_axi_b_id_i),
    //.s2_axi_b_user_o      (mem_axi_b_user_i),
                                            
    .s2_axi_ar_ready_o    (mem_axi_ar_ready_i),                  
    .s2_axi_ar_valid_i    (mem_axi_ar_valid_o),
    .s2_axi_ar_addr_i     (mem_axi_ar_addr_o),
    .s2_axi_ar_prot_i     (mem_axi_ar_prot_o),
    //.s2_axi_ar_id_i       (mem_axi_ar_id_o),
    //.s2_axi_ar_user_i     (mem_axi_ar_user_o),
    //.s2_axi_ar_len_i      (mem_axi_ar_len_o),
    //.s2_axi_ar_size_i     (mem_axi_ar_size_o),
    //.s2_axi_ar_burst_i    (mem_axi_ar_burst_o),
    //.s2_axi_ar_lock_i     (mem_axi_ar_lock_o),
    //.s2_axi_ar_cache_i    (mem_axi_ar_cache_o),
    //.s2_axi_ar_qos_i      (mem_axi_ar_qos_o),
    //.s2_axi_ar_region_i   (mem_axi_ar_region_o),
                       
    .s2_axi_r_ready_i     (mem_axi_r_ready_o),                   
    .s2_axi_r_valid_o     (mem_axi_r_valid_i),                  
    .s2_axi_r_resp_o      (mem_axi_r_resp_i),
    .s2_axi_r_data_o      (mem_axi_r_data_i),
    //.s2_axi_r_last_o      (mem_axi_r_last_i),
    //.s2_axi_r_id_o        (mem_axi_r_id_i),
    //.s2_axi_r_user_o      (mem_axi_r_user_i)          
    //
    .axi_aw_ready_i   (axi_aw_ready_i),               
    .axi_aw_valid_o   (axi_aw_valid_o),
    .axi_aw_addr_o    (axi_aw_addr_o),
    .axi_aw_prot_o    (axi_aw_prot_o),
  //.axi_aw_id_o      (axi_aw_id_o),
  //.axi_aw_user_o    (axi_aw_user_o),
  //.axi_aw_len_o     (axi_aw_len_o),
  //.axi_aw_size_o    (axi_aw_size_o),
  //.axi_aw_burst_o   (axi_aw_burst_o),
  //.axi_aw_lock_o    (axi_aw_lock_o),
  //.axi_aw_cache_o   (axi_aw_cache_o),
  //.axi_aw_qos_o     (axi_aw_qos_o),
  //.axi_aw_region_o  (axi_aw_region_o),
                                       
    .axi_w_ready_i    (axi_w_ready_i),                
    .axi_w_valid_o    (axi_w_valid_o),
    .axi_w_data_o     (axi_w_data_o),
    .axi_w_strb_o     (axi_w_strb_o),
    //.axi_w_last_o   (axi_w_last_o),
    //.axi_w_user_o   (axi_w_user_o),
                                       
    .axi_b_ready_o    (axi_b_ready_o),            
    .axi_b_valid_i    (axi_b_valid_i),
    .axi_b_resp_i     (axi_b_resp_i),                 
    //.axi_b_id_i     (axi_b_id_i),
    //.axi_b_user_i   (axi_b_user_i),
                                       
    .axi_ar_ready_i   (axi_ar_ready_i),               
    .axi_ar_valid_o   (axi_ar_valid_o),
    .axi_ar_addr_o    (axi_ar_addr_o),
    .axi_ar_prot_o    (axi_ar_prot_o),
  //.axi_ar_id_o      (axi_ar_id_o),
  //.axi_ar_user_o    (axi_ar_user_o),
  //.axi_ar_len_o     (axi_ar_len_o),
  //.axi_ar_size_o    (axi_ar_size_o),
  //.axi_ar_burst_o   (axi_ar_burst_o),
  //.axi_ar_lock_o    (axi_ar_lock_o),
  //.axi_ar_cache_o   (axi_ar_cache_o),
  //.axi_ar_qos_o     (axi_ar_qos_o),
  //.axi_ar_region_o  (axi_ar_region_o),
                                       
    .axi_r_ready_o    (axi_r_ready_o),            
    .axi_r_valid_i    (axi_r_valid_i),                
    .axi_r_resp_i     (axi_r_resp_i),
    .axi_r_data_i     (axi_r_data_i)
  //.axi_r_last_i     (axi_r_last_i),
  //.axi_r_id_i       (axi_r_id_i),
  //.axi_r_user_i     (axi_r_user_i)           
);

always@(posedge clk)
begin
  if(WBREG_ctrl_wb[8])stopsim();
  if(rst|flush)begin
    IDREG_pc<=0;
    IDREG_inst<=0;
  end
  else if(IDREG_en&(~(block|pop)))begin
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
`ifdef REGINFO
  $monitor("\
    pc        =%h,inst      =%h,\
    IDREG_en  =%h,     IDREG_pc  =%h,     IDREG_inst=%h,     \
    block_axi_ifu=%d,  block_axi_mem=%d,  block=%d,  \
EXREG_en  =%h,     EXREG_ctrl_wb =%h, EXREG_ctrl_mem=%h, \
    EXREG_ctrl_ex =%h, has_hazard=%d,     EXREG_pc     =%h,  \
    EXREG_rs1    =%d,  EXREG_rs2    =%d,  \
    EXREG_rs1data=%h,  EXREG_rs2data=%h,  \
    EXREG_imm    =%h,  \
    EXREG_rd     =%d,  EXREG_npcSrc =%d,  EXREG_ALUSEXT=%d,  \
    EXREG_addSrc =%d,  EXREG_ALUSrc1=%d,  EXREG_ALUSrc2=%d,  \
    EXREG_ALUop  =%d,  result       =%h,  dnpc         =%h,  \
    MEMREG_pcSrcJ=%d,  MEMREG_pcSrcB=%d,  pcSrc        =%d,  \
    forward_ALUSrc1=%h,forward_ALUSrc2=%h,forward_wdataSrc=%h,\
MEMREG_en  =%h,    MEMREG_ctrl_mem=%h,MEMREG_ctrl_wb =%h,\
    MEMREG_result=%h,  MEMREG_wdata =%h,  \
    MEMREG_csrdata =%h,  \
    MEMREG_imm   =%h,  MEMREG_rs2    =%d, MEMREG_rd    =%d,  \
    MEMREG_read=%d,    MEMREG_write=%d,   MEMREG_wmask=%h,  \
    WBREG_rdSrc    =%d,WBREG_rdSEXT   =%d,rddata      =%h \
WBREG_en  =%h,     WBREG_ctrl_wb=%h,  WBREG_rddata =%h,   \
    WBREG_rd  =%d,     WBREG_ebreak =%d,  WBREG_rdWen    =%d,   \
ifu_rw_valid_i=%d, rw_ready_o=%d, data_read_o=%h,\
    aw_ready_i=%d, aw_valid_o=%d, aw_addr_o=%h, aw_prot=%h\
    w_ready_i =%d, w_valid_o =%d,  w_data_o=%h,  w_strb=%h\
    b_ready_o =%d, b_valid_i =%d,  b_resp_i=%h, \
    ar_ready_i=%d, ar_valid_o=%d, ar_addr_o=%h, ar_prot=%h\
    r_ready_o =%d, r_valid_i =%d,  r_resp_i=%h, r_data_i=%h\
mem_rw_valid_i=%d, rw_ready_o=%d, data_read_o=%h,\
    rw_wdata_i=%h, rw_addr_i =%h,  rw_size_i=%h,\
    aw_ready_i=%d, aw_valid_o=%d, aw_addr_o=%h, aw_prot=%h\
    w_ready_i =%d, w_valid_o =%d,  w_data_o=%h,  w_strb=%h\
    b_ready_o =%d, b_valid_i =%d,  b_resp_i=%h, \
    ar_ready_i=%d, ar_valid_o=%d, ar_addr_o=%h, ar_prot=%h\
    r_ready_o =%d, r_valid_i =%d,  r_resp_i=%h, r_data_i=%h\
    "   
         ,pc,inst
         ,IDREG_en  ,IDREG_pc  ,IDREG_inst
         ,block_axi_ifu,block_axi_mem,block

         ,EXREG_en  ,EXREG_ctrl_wb ,EXREG_ctrl_mem
         ,EXREG_ctrl_ex ,has_hazard
         ,EXREG_pc     ,EXREG_rs1,EXREG_rs2
         ,EXREG_rs1data,EXREG_rs2data
         ,EXREG_imm    
         ,EXREG_rd     ,EXREG_ctrl_ex[10],EXREG_ctrl_ex[9]
         ,EXREG_ctrl_ex[8],EXREG_ctrl_ex[7],EXREG_ctrl_ex[6:5]
         ,EXREG_ctrl_ex[4:0],result,dnpc
         ,EXREG_ctrl_mem[11],EXREG_ctrl_mem[10],pcSrc
         ,forward_ALUSrc1,forward_ALUSrc2,forward_wdataSrc

         ,MEMREG_en  ,MEMREG_ctrl_mem,MEMREG_ctrl_wb 
         ,MEMREG_result,MEMREG_wdata 
         ,MEMREG_csrdata 
         ,MEMREG_imm   ,MEMREG_rs2    ,MEMREG_rd    
         ,MEMREG_ctrl_mem[9],MEMREG_ctrl_mem[8],MEMREG_ctrl_mem[7:0]
         ,MEMREG_ctrl_wb[7:6],MEMREG_ctrl_wb[4:0],rddata

         ,WBREG_en  ,WBREG_ctrl_wb,WBREG_rddata 
         ,WBREG_rd    ,WBREG_ctrl_wb[8],WBREG_ctrl_wb[5]
         ,ifu_rw_valid_i,ifu_rw_ready_o,ifu_data_read_o
         ,ifu_axi_aw_ready_i,ifu_axi_aw_valid_o,ifu_axi_aw_addr_o,ifu_axi_aw_prot_o
         ,ifu_axi_w_ready_i, ifu_axi_w_valid_o, ifu_axi_w_data_o, ifu_axi_w_strb_o
         ,ifu_axi_b_ready_o, ifu_axi_b_valid_i, ifu_axi_b_resp_i
         ,ifu_axi_ar_ready_i,ifu_axi_ar_valid_o,ifu_axi_ar_addr_o,ifu_axi_ar_prot_o
         ,ifu_axi_r_ready_o, ifu_axi_r_valid_i, ifu_axi_r_resp_i, ifu_axi_r_data_i
         ,mem_rw_valid_i,mem_rw_ready_o,din
         ,MEMREG_wdata,addr,MEMREG_ctrl_mem[7:0]
         ,mem_axi_aw_ready_i,mem_axi_aw_valid_o,mem_axi_aw_addr_o,mem_axi_aw_prot_o
         ,mem_axi_w_ready_i, mem_axi_w_valid_o, mem_axi_w_data_o, mem_axi_w_strb_o
         ,mem_axi_b_ready_o, mem_axi_b_valid_i, mem_axi_b_resp_i
         ,mem_axi_ar_ready_i,mem_axi_ar_valid_o,mem_axi_ar_addr_o,mem_axi_ar_prot_o
         ,mem_axi_r_ready_o, mem_axi_r_valid_i, mem_axi_r_resp_i, mem_axi_r_data_i
               );
`endif
end


ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .clk      (clk),
  .rst      (rst),
  .pc       (IDREG_pc     ),
  .inst     (IDREG_inst     ),
  .rdwen    (WBREG_ctrl_wb[5]&(~block)    ),
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
  if(rst|flush)begin
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
  else if(EXREG_en&(~block))begin
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

reg                               mem_rw_valid_i;         
always@(posedge clk)
begin
  //if(rst|flush)begin
  if(rst)begin
    MEMREG_ctrl_mem<=0;
    MEMREG_ctrl_wb <=0;
    //MEMREG_dnpc    <=0;
    MEMREG_result  <=0;
    MEMREG_wdata    <=0;
    MEMREG_csrdata    <=0;
    MEMREG_imm    <=0;
    MEMREG_rs2      <=0;
    MEMREG_rd      <=0;
    mem_rw_valid_i<=0;
  end 
  else if(MEMREG_en&(~block))begin
    MEMREG_ctrl_mem<= EXREG_ctrl_mem;
    MEMREG_ctrl_wb <= EXREG_ctrl_wb ;
    //MEMREG_dnpc    <= dnpc;
    MEMREG_result  <= result;
    MEMREG_wdata    <= wdata;
    MEMREG_csrdata    <= csrdata;
    MEMREG_imm     <= EXREG_imm;
    MEMREG_rs2      <= EXREG_rs2;
    MEMREG_rd      <= EXREG_rd;
//`ifdef MULTICYCLE
    if(EXREG_ctrl_mem[9]|EXREG_ctrl_mem[8])mem_rw_valid_i<=1;
  end
  else if(mem_rw_ready_o)mem_rw_valid_i<=0;
//`else
    //if(EXREG_ctrl_mem[9]|EXREG_ctrl_mem[8])mem_rw_valid_i<=1;
    //else if(mem_rw_ready_o)mem_rw_valid_i<=0;
    //end
//`endif
end
//assign pcSrc=MEMREG_ctrl_mem[11]|(MEMREG_ctrl_mem[10]&MEMREG_result[0]);
assign pcSrc=EXREG_ctrl_mem[11]|(EXREG_ctrl_mem[10]&result[0]);

assign addr=MEMREG_result;
wire[7:0] w_size=MEMREG_ctrl_mem[7:0];
wire[63:0] dout=MEMREG_wdata;

wire                               mem_rw_ready_o;     
wire [RW_DATA_WIDTH-1:0]           mem_data_read_o;  
wire  [RW_DATA_WIDTH-1:0]          mem_rw_w_data_i;  
wire  [RW_ADDR_WIDTH-1:0]          mem_rw_addr_i;    
wire  [7:0]                        mem_rw_size_i;    

// Advanced eXtensible Interface
wire                               mem_axi_aw_ready_i;             
wire                               mem_axi_aw_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          mem_axi_aw_addr_o;
wire [2:0]                         mem_axi_aw_prot_o;
//wire [AXI_ID_WIDTH-1:0]           mem_axi_aw_id_o;
//wire [AXI_USER_WIDTH-1:0]         mem_axi_aw_user_o;
//wire [7:0]                        mem_axi_aw_len_o;
//wire [2:0]                        mem_axi_aw_size_o;
//wire [1:0]                        mem_axi_aw_burst_o;
//wire                              mem_axi_aw_lock_o;
//wire [3:0]                        mem_axi_aw_cache_o;
//wire [3:0]                        mem_axi_aw_qos_o;
//wire [3:0]                        mem_axi_aw_region_o;

wire                               mem_axi_w_ready_i;              
wire                               mem_axi_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          mem_axi_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        mem_axi_w_strb_o;
//wire                              mem_axi_w_last_o;
//wire [AXI_USER_WIDTH-1:0]         mem_axi_w_user_o;

wire                               mem_axi_b_ready_o;          
wire                               mem_axi_b_valid_i;
wire  [1:0]                        mem_axi_b_resp_i;               
//wire  [AXI_ID_WIDTH-1:0]           mem_axi_b_id_i;
//wire  [AXI_USER_WIDTH-1:0]         mem_axi_b_user_i;

wire                               mem_axi_ar_ready_i;             
wire                               mem_axi_ar_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          mem_axi_ar_addr_o;
wire [2:0]                         mem_axi_ar_prot_o;
//wire [AXI_ID_WIDTH-1:0]           mem_axi_ar_id_o;
//wire [AXI_USER_WIDTH-1:0]         mem_axi_ar_user_o;
//wire [7:0]                        mem_axi_ar_len_o;
//wire [2:0]                        mem_axi_ar_size_o;
//wire [1:0]                        mem_axi_ar_burst_o;
//wire                              mem_axi_ar_lock_o;
//wire [3:0]                        mem_axi_ar_cache_o;
//wire [3:0]                        mem_axi_ar_qos_o;
//wire [3:0]                        mem_axi_ar_region_o;

wire                               mem_axi_r_ready_o;          
wire                               mem_axi_r_valid_i;             
wire  [1:0]                        mem_axi_r_resp_i;
wire  [AXI_DATA_WIDTH-1:0]         mem_axi_r_data_i;
//wire                               mem_axi_r_last_i;
//wire  [AXI_ID_WIDTH-1:0]           mem_axi_r_id_i;
//wire  [AXI_USER_WIDTH-1:0]         mem_axi_r_user_i

wire block_axi_mem=~(~mem_rw_valid_i&mem_rw_ready_o);
//always@(posedge clk)begin
  //$display("
//end

ysyx_22050133_axi_master ysyx_22050133_axi_master_mem(
    .clk              (clk),
    .rst              (rst),

    .rw_valid_i       (mem_rw_valid_i),            
    .rw_ready_o       (mem_rw_ready_o),     
    .data_read_o      (din),  
    .rw_w_data_i      (MEMREG_wdata),  
    .rw_addr_i        (addr),    
    .rw_size_i        (MEMREG_ctrl_mem[7:0]),    
    .rw_if_i          (0),    
    // Advanced eXtensible Intenterface
    .axi_aw_ready_i   (mem_axi_aw_ready_i),               
    .axi_aw_valid_o   (mem_axi_aw_valid_o),
    .axi_aw_addr_o    (mem_axi_aw_addr_o),
    .axi_aw_prot_o    (mem_axi_aw_prot_o),
  //.axi_aw_id_o      (mem_axi_aw_id_o),
  //.axi_aw_user_o    (mem_axi_aw_user_o),
  //.axi_aw_len_o     (mem_axi_aw_len_o),
  //.axi_aw_size_o    (mem_axi_aw_size_o),
  //.axi_aw_burst_o   (mem_axi_aw_burst_o),
  //.axi_aw_lock_o    (mem_axi_aw_lock_o),
  //.axi_aw_cache_o   (mem_axi_aw_cache_o),
  //.axi_aw_qos_o     (mem_axi_aw_qos_o),
  //.axi_aw_region_o  (mem_axi_aw_region_o),
                                           
    .axi_w_ready_i    (mem_axi_w_ready_i),                
    .axi_w_valid_o    (mem_axi_w_valid_o),
    .axi_w_data_o     (mem_axi_w_data_o),
    .axi_w_strb_o     (mem_axi_w_strb_o),
    //.axi_w_last_o   (mem_axi_w_last_o),
    //.axi_w_user_o   (mem_axi_w_user_o),
                                           
    .axi_b_ready_o    (mem_axi_b_ready_o),            
    .axi_b_valid_i    (mem_axi_b_valid_i),
    .axi_b_resp_i     (mem_axi_b_resp_i),                 
    //.axi_b_id_i     (mem_axi_b_id_i),
    //.axi_b_user_i   (mem_axi_b_user_i),
                                           
    .axi_ar_ready_i   (mem_axi_ar_ready_i),               
    .axi_ar_valid_o   (mem_axi_ar_valid_o),
    .axi_ar_addr_o    (mem_axi_ar_addr_o),
    .axi_ar_prot_o    (mem_axi_ar_prot_o),
  //.axi_ar_id_o      (mem_axi_ar_id_o),
  //.axi_ar_user_o    (mem_axi_ar_user_o),
  //.axi_ar_len_o     (mem_axi_ar_len_o),
  //.axi_ar_size_o    (mem_axi_ar_size_o),
  //.axi_ar_burst_o   (mem_axi_ar_burst_o),
  //.axi_ar_lock_o    (mem_axi_ar_lock_o),
  //.axi_ar_cache_o   (mem_axi_ar_cache_o),
  //.axi_ar_qos_o     (mem_axi_ar_qos_o),
  //.axi_ar_region_o  (mem_axi_ar_region_o),
                                           
    .axi_r_ready_o    (mem_axi_r_ready_o),            
    .axi_r_valid_i    (mem_axi_r_valid_i),                
    .axi_r_resp_i     (mem_axi_r_resp_i),
    .axi_r_data_i     (mem_axi_r_data_i)
  //.axi_r_last_i     (mem_axi_r_last_i),
  //.axi_r_id_i       (mem_axi_r_id_i),
  //.axi_r_user_i     (mem_axi_r_user_i)           
);

ysyx_22050133_axi_slave ysyx_22050133_axi_slave(
    .clk               (clk),               
    .rst               (rst),
                       
    .axi_aw_ready_o    (axi_aw_ready_i),                
    .axi_aw_valid_i    (axi_aw_valid_o),
    .axi_aw_addr_i     (axi_aw_addr_o),
    .axi_aw_prot_i     (axi_aw_prot_o),
    //.axi_aw_id_i       (axi_aw_id_o),
    //.axi_aw_user_i     (axi_aw_user_o),
    //.axi_aw_len_i      (axi_aw_len_o),
    //.axi_aw_size_i     (axi_aw_size_o),
    //.axi_aw_burst_i    (axi_aw_burst_o),
    //.axi_aw_lock_i     (axi_aw_lock_o),
    //.axi_aw_cache_i    (axi_aw_cache_o),
    //.axi_aw_qos_i      (axi_aw_qos_o),
    //.axi_aw_region_i   (axi_aw_region_o),
                                            
    .axi_w_ready_o     (axi_w_ready_i),                  
    .axi_w_valid_i     (axi_w_valid_o),
    .axi_w_data_i      (axi_w_data_o),
    .axi_w_strb_i      (axi_w_strb_o),
    //.axi_w_last_i      (axi_w_last_o),
    //.axi_w_user_i      (axi_w_user_o),
                       
    .axi_b_ready_i     (axi_b_ready_o),                  
    .axi_b_valid_o     (axi_b_valid_i),
    .axi_b_resp_o      (axi_b_resp_i),                   
    //.axi_b_id_o        (axi_b_id_i),
    //.axi_b_user_o      (axi_b_user_i),
                                            
    .axi_ar_ready_o    (axi_ar_ready_i),                  
    .axi_ar_valid_i    (axi_ar_valid_o),
    .axi_ar_addr_i     (axi_ar_addr_o),
    .axi_ar_prot_i     (axi_ar_prot_o),
    //.axi_ar_id_i       (axi_ar_id_o),
    //.axi_ar_user_i     (axi_ar_user_o),
    //.axi_ar_len_i      (axi_ar_len_o),
    //.axi_ar_size_i     (axi_ar_size_o),
    //.axi_ar_burst_i    (axi_ar_burst_o),
    //.axi_ar_lock_i     (axi_ar_lock_o),
    //.axi_ar_cache_i    (axi_ar_cache_o),
    //.axi_ar_qos_i      (axi_ar_qos_o),
    //.axi_ar_region_i   (axi_ar_region_o),
                       
    .axi_r_ready_i     (axi_r_ready_o),                   
    .axi_r_valid_o     (axi_r_valid_i),                  
    .axi_r_resp_o      (axi_r_resp_i),
    .axi_r_data_o      (axi_r_data_i)
    //.axi_r_last_o      (axi_r_last_i),
    //.axi_r_id_o        (axi_r_id_i),
    //.axi_r_user_o      (axi_r_user_i)          
);


`ifdef MULTICYCLE 
always @(*)begin
  set_pc(IDREG_pc,dnpc,IDREG_inst);
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
  else if(WBREG_en&(~block))begin
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
