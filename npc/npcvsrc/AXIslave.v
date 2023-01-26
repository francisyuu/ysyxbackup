
//`include "defines.v"

//// Burst types
//`define AXI_BURST_TYPE_FIXED                                2'b00               //突发类型  FIFO
//`define AXI_BURST_TYPE_INCR                                 2'b01               //ram  
//`define AXI_BURST_TYPE_WRAP                                 2'b10
//// Access permissions
//`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
//`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
//`define AXI_PROT_SECURE_ACCESS                              3'b000
//`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
//`define AXI_PROT_DATA_ACCESS                                3'b000
//`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
//// Memory types (AR)
//`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
//`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
//`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
//`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
//`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
//`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
//`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
//`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
//`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
//`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
//`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
//`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
//// Memory types (AW)
//`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
//`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
//`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
//`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
//`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
//`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
//`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
//`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
//`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
//`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
//`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
//`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

//`define AXI_SIZE_BYTES_1                                    3'b000                //突发宽度一个数据的宽度
//`define AXI_SIZE_BYTES_2                                    3'b001
//`define AXI_SIZE_BYTES_4                                    3'b010
//`define AXI_SIZE_BYTES_8                                    3'b011
//`define AXI_SIZE_BYTES_16                                   3'b100
//`define AXI_SIZE_BYTES_32                                   3'b101
//`define AXI_SIZE_BYTES_64                                   3'b110
//`define AXI_SIZE_BYTES_128                                  3'b111


module ysyx_22050133_axi_slave # (
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(//IF&MEM输入信号
    input                               clk,
    input                               rst,

    // Advanced eXtensible Interface
    output reg                          axi_aw_ready_o,       
    input                               axi_aw_valid_i,
    input [AXI_ADDR_WIDTH-1:0]          axi_aw_addr_i,
    input [2:0]                         axi_aw_prot_i,
    //input [AXI_ID_WIDTH-1:0]          axi_aw_id_i,
    //input [AXI_USER_WIDTH-1:0]        axi_aw_user_i,
    input [7:0]                       axi_aw_len_i,
    input [2:0]                       axi_aw_size_i,
    input [1:0]                       axi_aw_burst_i,
    //input                             axi_aw_lock_i,
    //input [3:0]                       axi_aw_cache_i,
    //input [3:0]                       axi_aw_qos_i,
    //input [3:0]                       axi_aw_region_i,

    output reg                          axi_w_ready_o,        
    input                               axi_w_valid_i,
    input [AXI_DATA_WIDTH-1:0]          axi_w_data_i,
    input [AXI_DATA_WIDTH/8-1:0]        axi_w_strb_i,
    input                             axi_w_last_i,
    //input [AXI_USER_WIDTH-1:0]        axi_w_user_i,
    
    input                               axi_b_ready_i,      
    output reg                          axi_b_valid_o,
    output reg  [1:0]                   axi_b_resp_o,          
    //output reg  [AXI_ID_WIDTH-1:0]    axi_b_id_o,
    //output reg  [AXI_USER_WIDTH-1:0]  axi_b_user_o,

    output reg                          axi_ar_ready_o,       
    input                               axi_ar_valid_i,
    input [AXI_ADDR_WIDTH-1:0]          axi_ar_addr_i,
    input [2:0]                         axi_ar_prot_i,
    //input [AXI_ID_WIDTH-1:0]          axi_ar_id_i,
    //input [AXI_USER_WIDTH-1:0]        axi_ar_user_i,
    input [7:0]                       axi_ar_len_i,
    input [2:0]                       axi_ar_size_i,
    input [1:0]                       axi_ar_burst_i,
    //input                             axi_ar_lock_i,
    //input [3:0]                       axi_ar_cache_i,
    //input [3:0]                       axi_ar_qos_i,
    //input [3:0]                       axi_ar_region_i,
    
    input                               axi_r_ready_i,            
    output reg                          axi_r_valid_o,        
    output reg  [1:0]                   axi_r_resp_o,
    output reg  [AXI_DATA_WIDTH-1:0]    axi_r_data_o,
    output reg                        axi_r_last_o
    //output reg  [AXI_ID_WIDTH-1:0]    axi_r_id_o,
    //output reg  [AXI_USER_WIDTH-1:0]  axi_r_user_o
);

parameter RS_IDLE = 1;
parameter RS_RHS = 2;

parameter WS_IDLE = 1;
parameter WS_WHS = 2;
parameter WS_BHS = 3;

reg  [AXI_ADDR_WIDTH-1:0] ar_pc;          
reg  [AXI_ADDR_WIDTH-1:0] ar_addr;        
reg  [2:0]                ar_prot;        
reg  [7:0]                ar_len;         
reg  [2:0]                ar_size;        
reg  [1:0]                ar_burst;       
//
reg  [AXI_ADDR_WIDTH-1:0] aw_addr;        
reg  [2:0]                aw_prot;        
reg  [7:0]                aw_len;         
reg  [2:0]                aw_size;        
reg  [1:0]                aw_burst;       

reg[15:0] rstate;
reg[15:0] next_rstate;
reg[15:0] wstate;
reg[15:0] next_wstate;
    //// ------------------State Machine------------------TODO
    
    //// 写通道状态切换
    
always@(posedge clk)begin
  if(rst)wstate<=WS_IDLE;
  else wstate<=next_wstate;
end

always@(*) begin
  if(rst)next_wstate=WS_IDLE;
  else case(wstate)
    WS_IDLE:if(axi_aw_ready_o&axi_aw_valid_i)next_wstate=WS_WHS;
      else next_wstate=WS_IDLE;
    WS_WHS:if(axi_w_ready_o&axi_w_valid_i&(aw_len==0))next_wstate=WS_BHS;
      else next_wstate=WS_WHS;
    WS_BHS:if(axi_b_valid_o&axi_b_ready_i)next_wstate=WS_IDLE;
      else next_wstate=WS_BHS;
    default:next_wstate=RS_IDLE;
  endcase
end

always@(posedge clk)begin
  if(rst)begin
    axi_aw_ready_o<=1;
    aw_addr<=0;
    aw_prot<=0;
    aw_len<=0;
    aw_size<=0;
    aw_burst<=0;
    axi_w_ready_o<=0;
    axi_b_valid_o<=0;
    axi_b_resp_o<=0;
  end
  else begin
    case(wstate)
      WS_IDLE:
      if(next_wstate==WS_WHS)begin
        axi_aw_ready_o<=0;
        aw_addr<=axi_aw_addr_i;
        aw_len<=axi_aw_len_i;
        axi_w_ready_o<=1;
      end
      else begin
        axi_aw_ready_o<=1;
        axi_w_ready_o<=0;
        axi_b_valid_o<=0;
      end
      WS_WHS:if(axi_w_ready_o&axi_w_valid_i)begin
        vmem_write({32'd0,aw_addr[31:3],3'd0}, axi_w_data_i, axi_w_strb_i);
        if(next_wstate==WS_BHS)begin
          axi_w_ready_o<=0;
          axi_b_valid_o<=1;
        end
        else begin
          aw_len<=aw_len-1;
          aw_addr<=aw_addr+8;
        end
      end
      WS_BHS:if(next_wstate==WS_IDLE)begin
        axi_aw_ready_o<=1;
        axi_b_valid_o<=0;
        axi_b_resp_o<=0;
      end
      default:begin
      end
    endcase
  end
end

    //// 读通道状态切换

always@(posedge clk)begin
  if(rst)rstate<=RS_IDLE;
  else rstate<=next_rstate;
end

always@(*) begin
  if(rst)next_rstate=RS_IDLE;
  else case(rstate)
    RS_IDLE:if(axi_ar_ready_o&axi_ar_valid_i)next_rstate=RS_RHS;
      else next_rstate=RS_IDLE;
    RS_RHS:if(axi_r_ready_i&axi_r_valid_o&(ar_len==0))next_rstate=RS_IDLE;
    else next_rstate=RS_RHS;
    default:next_rstate=RS_IDLE;
  endcase
end

wire [63:0] inst64;
wire [63:0] din;

always@(posedge clk)begin
  if(rst)begin
    ar_addr<=0;
    ar_prot<=0;
    ar_len<=0;
    ar_size<=0;
    ar_burst<=0;
    axi_ar_ready_o<=1;
    axi_r_valid_o<=0;
    axi_r_resp_o<=0;
    axi_r_data_o<=0;
    axi_r_last_o<=0;
  end
  else begin
    case(rstate)
      RS_IDLE:
      if(next_rstate==RS_RHS)begin
        ar_addr<=axi_ar_addr_i+8;
        ar_prot<=axi_ar_prot_i;
        ar_len<=axi_ar_len_i;
        axi_ar_ready_o<=0;
        axi_r_valid_o<=1;
        if(axi_ar_prot_i[2])begin
          inst_read({32'd0,axi_ar_addr_i},inst64);
          axi_r_data_o<=inst64;
        end
        else begin
          vmem_read({32'd0,axi_ar_addr_i}, din);
          axi_r_data_o<=din;
        end
      end
      else begin
        axi_ar_ready_o<=1;
        axi_r_valid_o<=0;
      end
      RS_RHS:if(axi_r_valid_o&axi_r_ready_i&(ar_len!=0))begin
        ar_len<=ar_len-1;
        ar_addr<=ar_addr+8;
        if(ar_prot[2])begin
          inst_read({32'd0,ar_addr},inst64);
          axi_r_data_o<=inst64;
        end
        else begin
          vmem_read({32'd0,ar_addr}, din);
          axi_r_data_o<=din;
        end
      end
      else if(next_rstate==RS_IDLE)begin
        axi_ar_ready_o<=1;
        axi_r_valid_o<=0;
      end
      default:begin
      end
    endcase
  end
end
    

    //// ------------------Write Transaction------------------
    //parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    //wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    //wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    //wire [7:0] axi_len      =  8'b0 ;
    //wire [2:0] axi_size     = AXI_SIZE[2:0];
    //// 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    //assign axi_aw_valid_o   = w_state_addr;
    //assign axi_aw_addr_o    = rw_addr_i;
    //assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    //assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    //assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    //assign axi_aw_len_o     = axi_len;
    //assign axi_aw_size_o    = axi_size;
    //assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    //assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    //assign axi_aw_cache_o   = `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    //assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    //assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可

    //// 写数据通道
    //assign axi_w_valid_o    = w_state_write;
    //assign axi_w_data_o     = rw_w_data_i ;
    //assign axi_w_strb_o     = rw_size_i;
    //assign axi_w_last_o     = 1'b0;
    //assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    //// 写应答通道
    //assign axi_b_ready_o    = w_state_resp;

    //// ------------------Read Transaction------------------

    //// Read address channel signals
    //assign axi_ar_valid_o   = r_state_addr;
    //assign axi_ar_addr_o    = rw_addr_i;
    //assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    //assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    //assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    //assign axi_ar_len_o     = axi_len;                                                                          
    //assign axi_ar_size_o    = axi_size;
    //assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    //assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    //assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    //assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    //// Read data channel signals
    //assign axi_r_ready_o    = r_state_read;

endmodule
