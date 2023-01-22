
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


module ysyx_22050133_axi_arbiter # (
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(//IF&MEM输入信号
    input                               clk,
    input                               rst,

    // Advanced eXtensible Interface Slave1
    output                              s1_axi_aw_ready_o,       
    input                               s1_axi_aw_valid_i,
    input [AXI_ADDR_WIDTH-1:0]          s1_axi_aw_addr_i,
    input [2:0]                         s1_axi_aw_prot_i,
    //input [AXI_ID_WIDTH-1:0]          s1_axi_aw_id_i,
    //input [AXI_USER_WIDTH-1:0]        s1_axi_aw_user_i,
    //input [7:0]                       s1_axi_aw_len_i,
    //input [2:0]                       s1_axi_aw_size_i,
    //input [1:0]                       s1_axi_aw_burst_i,
    //input                             s1_axi_aw_lock_i,
    //input [3:0]                       s1_axi_aw_cache_i,
    //input [3:0]                       s1_axi_aw_qos_i,
    //input [3:0]                       s1_axi_aw_region_i,

    output                              s1_axi_w_ready_o,        
    input                               s1_axi_w_valid_i,
    input [AXI_DATA_WIDTH-1:0]          s1_axi_w_data_i,
    input [AXI_DATA_WIDTH/8-1:0]        s1_axi_w_strb_i,
    //input                             s1_axi_w_last_i,
    //input [AXI_USER_WIDTH-1:0]        s1_axi_w_user_i,
    
    input                               s1_axi_b_ready_i,      
    output                              s1_axi_b_valid_o,
    output      [1:0]                   s1_axi_b_resp_o,          
    //output      [AXI_ID_WIDTH-1:0]    s1_axi_b_id_o,
    //output      [AXI_USER_WIDTH-1:0]  s1_axi_b_user_o,

    output                              s1_axi_ar_ready_o,       
    input                               s1_axi_ar_valid_i,
    input [AXI_ADDR_WIDTH-1:0]          s1_axi_ar_addr_i,
    input [2:0]                         s1_axi_ar_prot_i,
    //input [AXI_ID_WIDTH-1:0]          s1_axi_ar_id_i,
    //input [AXI_USER_WIDTH-1:0]        s1_axi_ar_user_i,
    //input [7:0]                       s1_axi_ar_len_i,
    //input [2:0]                       s1_axi_ar_size_i,
    //input [1:0]                       s1_axi_ar_burst_i,
    //input                             s1_axi_ar_lock_i,
    //input [3:0]                       s1_axi_ar_cache_i,
    //input [3:0]                       s1_axi_ar_qos_i,
    //input [3:0]                       s1_axi_ar_region_i,
    
    input                               s1_axi_r_ready_i,            
    output                              s1_axi_r_valid_o,        
    output      [1:0]                   s1_axi_r_resp_o,
    output      [AXI_DATA_WIDTH-1:0]    s1_axi_r_data_o,
    //output                            s1_axi_r_last_o,
    //output      [AXI_ID_WIDTH-1:0]    s1_axi_r_id_o,
    //output      [AXI_USER_WIDTH-1:0]  s1_axi_r_user_o
    //
    // Advanced eXtensible Interface Slave2
    output                              s2_axi_aw_ready_o,       
    input                               s2_axi_aw_valid_i,
    input [AXI_ADDR_WIDTH-1:0]          s2_axi_aw_addr_i,
    input [2:0]                         s2_axi_aw_prot_i,
    //input [AXI_ID_WIDTH-1:0]          s2_axi_aw_id_i,
    //input [AXI_USER_WIDTH-1:0]        s2_axi_aw_user_i,
    //input [7:0]                       s2_axi_aw_len_i,
    //input [2:0]                       s2_axi_aw_size_i,
    //input [1:0]                       s2_axi_aw_burst_i,
    //input                             s2_axi_aw_lock_i,
    //input [3:0]                       s2_axi_aw_cache_i,
    //input [3:0]                       s2_axi_aw_qos_i,
    //input [3:0]                       s2_axi_aw_region_i,

    output                              s2_axi_w_ready_o,        
    input                               s2_axi_w_valid_i,
    input [AXI_DATA_WIDTH-1:0]          s2_axi_w_data_i,
    input [AXI_DATA_WIDTH/8-1:0]        s2_axi_w_strb_i,
    //input                             s2_axi_w_last_i,
    //input [AXI_USER_WIDTH-1:0]        s2_axi_w_user_i,
    
    input                               s2_axi_b_ready_i,      
    output                              s2_axi_b_valid_o,
    output      [1:0]                   s2_axi_b_resp_o,          
    //output      [AXI_ID_WIDTH-1:0]    s2_axi_b_id_o,
    //output      [AXI_USER_WIDTH-1:0]  s2_axi_b_user_o,

    output                              s2_axi_ar_ready_o,       
    input                               s2_axi_ar_valid_i,
    input [AXI_ADDR_WIDTH-1:0]          s2_axi_ar_addr_i,
    input [2:0]                         s2_axi_ar_prot_i,
    //input [AXI_ID_WIDTH-1:0]          s2_axi_ar_id_i,
    //input [AXI_USER_WIDTH-1:0]        s2_axi_ar_user_i,
    //input [7:0]                       s2_axi_ar_len_i,
    //input [2:0]                       s2_axi_ar_size_i,
    //input [1:0]                       s2_axi_ar_burst_i,
    //input                             s2_axi_ar_lock_i,
    //input [3:0]                       s2_axi_ar_cache_i,
    //input [3:0]                       s2_axi_ar_qos_i,
    //input [3:0]                       s2_axi_ar_region_i,
    
    input                               s2_axi_r_ready_i,            
    output                              s2_axi_r_valid_o,        
    output      [1:0]                   s2_axi_r_resp_o,
    output      [AXI_DATA_WIDTH-1:0]    s2_axi_r_data_o,
    //output                            s2_axi_r_last_o,
    //output      [AXI_ID_WIDTH-1:0]    s2_axi_r_id_o,
    //output      [AXI_USER_WIDTH-1:0]  s2_axi_r_user_o     
    //
    // Advanced eXtensible Interface  Master
    input                               axi_aw_ready_i,             
    output                              axi_aw_valid_o,
    output     [AXI_ADDR_WIDTH-1:0]     axi_aw_addr_o,
    output     [2:0]                    axi_aw_prot_o,
    //output     [AXI_ID_WIDTH-1:0]     axi_aw_id_o,
    //output     [AXI_USER_WIDTH-1:0]   axi_aw_user_o,
    //output     [7:0]                  axi_aw_len_o,
    //output     [2:0]                  axi_aw_size_o,
    //output     [1:0]                  axi_aw_burst_o,
    //output                            axi_aw_lock_o,
    //output     [3:0]                  axi_aw_cache_o,
    //output     [3:0]                  axi_aw_qos_o,
    //output     [3:0]                  axi_aw_region_o,

    input                               axi_w_ready_i,              
    output                              axi_w_valid_o,
    output     [AXI_DATA_WIDTH-1:0]     axi_w_data_o,
    output     [AXI_DATA_WIDTH/8-1:0]   axi_w_strb_o,
    //output                            axi_w_last_o,
    //output     [AXI_USER_WIDTH-1:0]   axi_w_user_o,
    
    output                              axi_b_ready_o,          
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,               
    //input  [AXI_ID_WIDTH-1:0]         axi_b_id_i,
    //input  [AXI_USER_WIDTH-1:0]       axi_b_user_i,

    input                               axi_ar_ready_i,             
    output                              axi_ar_valid_o,
    output     [AXI_ADDR_WIDTH-1:0]     axi_ar_addr_o,
    output     [2:0]                    axi_ar_prot_o,
    //output     [AXI_ID_WIDTH-1:0]     axi_ar_id_o,
    //output     [AXI_USER_WIDTH-1:0]   axi_ar_user_o,
    //output     [7:0]                  axi_ar_len_o,
    //output     [2:0]                  axi_ar_size_o,
    //output     [1:0]                  axi_ar_burst_o,
    //output                            axi_ar_lock_o,
    //output     [3:0]                  axi_ar_cache_o,
    //output     [3:0]                  axi_ar_qos_o,
    //output     [3:0]                  axi_ar_region_o,
    
    output                              axi_r_ready_o,          
    input                               axi_r_valid_i,             
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i
    //input                             axi_r_last_i,
    //input  [AXI_ID_WIDTH-1:0]         axi_r_id_i,
    //input  [AXI_USER_WIDTH-1:0]       axi_r_user_i       
);

assign s2_axi_aw_ready_o=w_channel?axi_aw_ready_i:0;
assign s1_axi_aw_ready_o=~w_channel?axi_aw_ready_i:0;
//assign axi_aw_ready_i=w_channel?  s2_axi_aw_ready_o  :s1_axi_aw_ready_o;   
assign axi_aw_valid_o=w_channel?  s2_axi_aw_valid_i  :s1_axi_aw_valid_i;
assign axi_aw_addr_o=w_channel?   s2_axi_aw_addr_i   :s1_axi_aw_addr_i;
assign axi_aw_prot_o=w_channel?   s2_axi_aw_prot_i   :s1_axi_aw_prot_i;
//assign axi_aw_id_o=w_channel?     s2_axi_aw_id_i     :s1_axi_aw_id_i;
//assign axi_aw_user_o=w_channel?   s2_axi_aw_user_i   :s1_axi_aw_user_i;
//assign axi_aw_len_o=w_channel?    s2_axi_aw_len_i    :s1_axi_aw_len_i;
//assign axi_aw_size_o=w_channel?   s2_axi_aw_size_i   :s1_axi_aw_size_i;
//assign axi_aw_burst_o=w_channel?  s2_axi_aw_burst_i  :s1_axi_aw_burst_i;
//assign axi_aw_lock_o=w_channel?   s2_axi_aw_lock_i   :s1_axi_aw_lock_i;
//assign axi_aw_cache_o=w_channel?  s2_axi_aw_cache_i  :s1_axi_aw_cache_i;
//assign axi_aw_qos_o=w_channel?    s2_axi_aw_qos_i    :s1_axi_aw_qos_i;
//assign axi_aw_region_o=w_channel? s2_axi_aw_region_i :s1_axi_aw_region_i;

assign s2_axi_w_ready_o=w_channel?axi_w_ready_i:0;
assign s1_axi_w_ready_o=~w_channel?axi_w_ready_i:0;
//assign axi_w_ready_i=w_channel?   s2_axi_w_ready_o   :s1_axi_w_ready_o;    
assign axi_w_valid_o=w_channel?   s2_axi_w_valid_i   :s1_axi_w_valid_i;
assign axi_w_data_o=w_channel?    s2_axi_w_data_i    :s1_axi_w_data_i;
assign axi_w_strb_o=w_channel?    s2_axi_w_strb_i    :s1_axi_w_strb_i;
//assign axi_w_last_o=w_channel?    s2_axi_w_last_i    :s1_axi_w_last_i;
//assign axi_w_user_o=w_channel?    s2_axi_w_user_i    :s1_axi_w_user_i;

assign axi_b_ready_o=w_channel?   s2_axi_b_ready_i   :s1_axi_b_ready_i;    
//assign axi_b_valid_i=w_channel?   s2_axi_b_valid_o   :s1_axi_b_valid_o;
//assign axi_b_resp_i=w_channel?    s2_axi_b_resp_o    :s1_axi_b_resp_o;     
//assign axi_b_id_i=w_channel?      s2_axi_b_id_o      :s1_axi_b_id_o;
//assign axi_b_user_i=w_channel?    s2_axi_b_user_o    :s1_axi_b_user_o;
assign s2_axi_b_valid_o=w_channel?axi_b_valid_i:0;
assign s2_axi_b_resp_o=w_channel?axi_b_resp_i:0;
//assign s2_axi_b_id_o=w_channel?axi_b_id_i:0;
//assign s2_axi_b_user_o=w_channel?axi_b_user_i:0;
assign s1_axi_b_valid_o=~w_channel?axi_b_valid_i:0;
assign s1_axi_b_resp_o=~w_channel?axi_b_resp_i:0;
//assign s1_axi_b_id_o=~w_channel?axi_b_id_i:0;
//assign s1_axi_b_user_o=~w_channel?axi_b_user_i:0;

assign s2_axi_ar_ready_o=r_channel?axi_ar_ready_i:0;
assign s1_axi_ar_ready_o=~r_channel?axi_ar_ready_i:0;
//assign axi_ar_ready_i=r_channel?  s2_axi_ar_ready_o  :s1_axi_ar_ready_o;   
assign axi_ar_valid_o=r_channel?  s2_axi_ar_valid_i  :s1_axi_ar_valid_i;
assign axi_ar_addr_o=r_channel?   s2_axi_ar_addr_i   :s1_axi_ar_addr_i;
assign axi_ar_prot_o=r_channel?   s2_axi_ar_prot_i   :s1_axi_ar_prot_i;
//assign axi_ar_id_o=r_channel?     s2_axi_ar_id_i     :s1_axi_ar_id_i;
//assign axi_ar_user_o=r_channel?   s2_axi_ar_user_i   :s1_axi_ar_user_i;
//assign axi_ar_len_o=r_channel?    s2_axi_ar_len_i    :s1_axi_ar_len_i;
//assign axi_ar_size_o=r_channel?   s2_axi_ar_size_i   :s1_axi_ar_size_i;
//assign axi_ar_burst_o=r_channel?  s2_axi_ar_burst_i  :s1_axi_ar_burst_i;
//assign axi_ar_lock_o=r_channel?   s2_axi_ar_lock_i   :s1_axi_ar_lock_i;
//assign axi_ar_cache_o=r_channel?  s2_axi_ar_cache_i  :s1_axi_ar_cache_i;
//assign axi_ar_qos_o=r_channel?    s2_axi_ar_qos_i    :s1_axi_ar_qos_i;
//assign axi_ar_region_o=r_channel? s2_axi_ar_region_i :s1_axi_ar_region_i;

assign axi_r_ready_o=r_channel?   s2_axi_r_ready_i   :s1_axi_r_ready_i;    
//assign axi_r_valid_i=r_channel?   s2_axi_r_valid_o   :s1_axi_r_valid_o;    
//assign axi_r_resp_i=r_channel?    s2_axi_r_resp_o    :s1_axi_r_resp_o;
//assign axi_r_data_i=r_channel?    s2_axi_r_data_o    :s1_axi_r_data_o
//assign axi_r_last_i=r_channel?    s2_axi_r_last_o    :s1_axi_r_last_o;
//assign axi_r_id_i=r_channel?      s2_axi_r_id_o      :s1_axi_r_id_o;
//assign axi_r_user_i=r_channel?    s2_axi_r_user_o    :s1_axi_r_user_o;
assign s2_axi_r_valid_o=r_channel?axi_r_valid_i:0;
assign s2_axi_r_resp_o=r_channel?axi_r_resp_i:0;
assign s2_axi_r_data_o=r_channel?axi_r_data_i:0;
//assign s2_axi_r_last_o=r_channel?axi_r_last_i:0;
//assign s2_axi_r_id_o=r_channel?axi_r_id_i:0;
//assign s2_axi_r_user_o=r_channel?axi_r_user_i:0;
assign s1_axi_r_valid_o=~r_channel?axi_r_valid_i:0;
assign s1_axi_r_resp_o=~r_channel?axi_r_resp_i:0;
assign s1_axi_r_data_o=~r_channel?axi_r_data_i:0;
//assign s1_axi_r_last_o=~r_channel?axi_r_last_i:0;
//assign s1_axi_r_id_o=~r_channel?axi_r_id_i:0;
//assign s1_axi_r_user_o=~r_channel?axi_r_user_i:0;

parameter RS_IDLE = 1;
parameter RS_S2 = 2;//address handshake
parameter WS_IDLE = 1;
parameter WS_S2 = 2;

reg r_channel;
reg w_channel;

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
    WS_IDLE:if(axi_aw_ready_i&s2_axi_aw_valid_i&(~s1_axi_aw_valid_i))next_wstate=WS_S2;
    else next_wstate=RS_IDLE;
    WS_S2:if(axi_b_valid_i&s2_axi_b_ready_i)next_wstate=WS_IDLE;
    else next_wstate=WS_S2;
    default:next_wstate=WS_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
        w_channel<=0;
  end
  else begin
    case(wstate)
      WS_IDLE:if(next_wstate==WS_S2)begin
        w_channel<=1;
      end
      else begin
        w_channel<=0;
      end
      WS_S2:if(next_wstate==WS_IDLE)begin
        w_channel<=0;
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
    RS_IDLE:if(axi_ar_ready_i&s2_axi_ar_valid_i&(~s1_axi_ar_valid_i))next_rstate=RS_S2;
      else next_rstate=RS_IDLE;
    RS_S2:if(axi_r_valid_i&s2_axi_r_ready_i)next_rstate=RS_IDLE;
    else next_rstate=RS_S2;
    default:next_rstate=RS_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
        r_channel<=1;
  end
  else begin
    case(rstate)
      RS_IDLE:
      if(next_rstate==RS_S2)begin
        r_channel<=1;
      end
      else begin
        r_channel<=0;
      end
      RS_S2:if(next_rstate==RS_IDLE)begin
        r_channel<=0;
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
