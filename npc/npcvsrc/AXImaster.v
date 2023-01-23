
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


module ysyx_22050133_axi_master # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(//IF&MEM输入信号
    input                               clk,
    input                               rst,

    input                               rw_addr_valid_i,         
    output reg                          rw_addr_ready_o,     
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,    
    input                               rw_we_i,    
    input  [7:0]                        rw_len_i,    
    input  [2:0]                        rw_size_i,    
    input  [1:0]                        rw_burst_i,    
    input                               rw_if_i,         
    input                               w_data_valid_i,     
    output reg                          w_data_ready_o,     
    input  [RW_DATA_WIDTH-1:0]          rw_w_data_i,  
    output reg                          r_data_valid_o,     
    input                               r_data_ready_i,     
    output reg [RW_DATA_WIDTH-1:0]      data_read_o,  

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,             
    output reg                          axi_aw_valid_o,
    output reg [AXI_ADDR_WIDTH-1:0]     axi_aw_addr_o,
    output reg [2:0]                    axi_aw_prot_o,
    //output reg [AXI_ID_WIDTH-1:0]     axi_aw_id_o,
    //output reg [AXI_USER_WIDTH-1:0]   axi_aw_user_o,
    output reg [7:0]                  axi_aw_len_o,
    output reg [2:0]                  axi_aw_size_o,
    output reg [1:0]                  axi_aw_burst_o,
    //output reg                        axi_aw_lock_o,
    //output reg [3:0]                  axi_aw_cache_o,
    //output reg [3:0]                  axi_aw_qos_o,
    //output reg [3:0]                  axi_aw_region_o,

    input                               axi_w_ready_i,              
    output reg                          axi_w_valid_o,
    output reg [AXI_DATA_WIDTH-1:0]     axi_w_data_o,
    output reg [AXI_DATA_WIDTH/8-1:0]   axi_w_strb_o,
    output reg                        axi_w_last_o,
    //output reg [AXI_USER_WIDTH-1:0]   axi_w_user_o,
    
    output reg                          axi_b_ready_o,          
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,               
    //input  [AXI_ID_WIDTH-1:0]         axi_b_id_i,
    //input  [AXI_USER_WIDTH-1:0]       axi_b_user_i,

    input                               axi_ar_ready_i,             
    output reg                          axi_ar_valid_o,
    output reg [AXI_ADDR_WIDTH-1:0]     axi_ar_addr_o,
    output reg [2:0]                    axi_ar_prot_o,
    //output reg [AXI_ID_WIDTH-1:0]     axi_ar_id_o,
    //output reg [AXI_USER_WIDTH-1:0]   axi_ar_user_o,
    output reg [7:0]                  axi_ar_len_o,
    output reg [2:0]                  axi_ar_size_o,
    output reg [1:0]                  axi_ar_burst_o,
    //output reg                        axi_ar_lock_o,
    //output reg [3:0]                  axi_ar_cache_o,
    //output reg [3:0]                  axi_ar_qos_o,
    //output reg [3:0]                  axi_ar_region_o,
    
    output reg                          axi_r_ready_o,          
    input                               axi_r_valid_i,             
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i
    input                             axi_r_last_i,
    //input  [AXI_ID_WIDTH-1:0]         axi_r_id_i,
    //input  [AXI_USER_WIDTH-1:0]       axi_r_user_i
);
`ifdef FAKEAXI
wire[63:0]r_addr=rw_addr_i;
wire[63:0]r_data=rw_if_i?inst64:din;
wire[63:0]inst64;
wire[63:0]din;

wire[63:0] r_data_shifted=
          r_addr[2] ? 
            r_addr[1] ? 
              r_addr[0] ? {56'd0,r_data[63:56]}:{48'd0,r_data[63:48]}
              :r_addr[0] ? {40'd0,r_data[63:40]}:{32'd0,r_data[63:32]}
            :r_addr[1] ? 
              r_addr[0] ? {24'd0,r_data[63:24]}:{16'd0,r_data[63:16]}
              :r_addr[0] ? {8'd0,r_data[63:8]}:r_data;

always@(*)begin
    rw_ready_o=1;
end
always@(posedge clk)begin
    if(rw_valid_i==1)data_read_o=r_data_shifted;
end
wire [63:0]instaddr=(rw_valid_i&rw_if_i)?r_addr:0;
wire [63:0]raddr=(rw_valid_i&~rw_if_i&rw_size_i==0)?r_addr:0;
wire [63:0]waddr=(rw_valid_i&~rw_if_i&rw_size_i!=0)?r_addr:0;
always@(*)begin
          inst_read(instaddr,inst64);
end
always@(*)begin
          vmem_read(raddr,din);
end
always@(*)begin
        vmem_write(waddr,rw_w_data_i,rw_size_i);
end
`else

parameter RS_IDLE = 1;
parameter RS_ARHS = 2;//address handshake
parameter RS_RHS = 3;//address handshake
parameter WS_IDLE = 1;
parameter WS_AWHS = 2;
parameter WS_WHS = 3;
parameter WS_BHS = 4;

reg  [RW_DATA_WIDTH-1:0] w_data;        //IF&MEM输入信号
reg  [RW_ADDR_WIDTH-1:0] w_addr;          //IF&MEM输入信号
reg  [7:0]               w_size;          //IF&MEM输信号
reg                      w_ready_o;          //IF&MEM输入信号
reg  [RW_ADDR_WIDTH-1:0] r_addr;          //IF&MEM输入信号
reg  [7:0]               r_size;          //IF&MEM输入信号
reg                      r_if;          //IF&MEM输入信号
reg                      r_ready_o;          //IF&MEM输入信号

assign rw_ready_o=r_ready_o&w_ready_o;
//assign rw_ready_o=r_ready_o;

wire [31:0] rw_addr_aligned = {rw_addr_i[31:3],3'd0};

reg[15:0] rstate;
reg[15:0] next_rstate;

reg[15:0] wstate;
reg[15:0] next_wstate;

    //// ------------------State Machine------------------TODO
    //// 写通道状态切换
wire [7:0]wmask=w_size<<w_addr[2:0];
wire [5:0]wdata_shift={3'd0,w_addr[2:0]}<<3;
wire [63:0]wdata_aligned=w_data<<wdata_shift;

always@(posedge clk)begin
  if(rst)wstate<=WS_IDLE;
  else wstate<=next_wstate;
end

always@(*) begin
  if(rst)next_wstate=S_IDLE;
  else case(wstate)
    S_IDLE:if(rw_addr_valid_i&rw_we_i)next_wstate=S_AWHS;
    else next_wstate=S_IDLE;
    S_AWHS:if(axi_aw_ready_i)next_wstate=S_BHS;
    else next_wstate=S_AWHS;
    S_BHS:if(axi_b_ready_o&axi_b_valid_i)next_wstate=S_IDLE;
    else next_wstate=S_BHS;
    default:next_wstate=S_IDLE;
  endcase
end

always@(*) begin
  if(rst)next_wstate=S_IDLE;
  else case(wstate)
    S_IDLE:if(w_data_valid_i)next_wstate=S_WHS;
    else next_wstate=S_IDLE;
    S_WHS:if(axi_w_valid_i)next_wstate=S_BHS;
    else next_wstate=S_AWHS;
    S_BHS:if(axi_b_ready_o&axi_b_valid_i)next_wstate=S_IDLE;
    else next_wstate=S_BHS;
    default:next_wstate=S_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
  end
  else begin
    case(wastate)
      S_IDLE:
        if(next_wstate==S_AWHS)begin
          rw_addr_ready_o<=0;
          w_addr<=rw_addr_i;
          w_burst<= rw_burst_i;
          w_size<= rw_size_i;
          axi_aw_valid_o<=1;
          axi_aw_addr_o<=rw_addr_i;
          axi_aw_prot_o<=0;
          axi_aw_len_o<=rw_len_i;
          axi_aw_size_o<=rw_burst_i;
          axi_aw_burst_o<=rw_burst_i;
        end
        else begin
        end
      S_AWHS:if(next_wstate==S_BHS)begin
      end
      S_BHS:if(next_wstate==S_IDLE)begin
        rw_addr_ready_o<=1;
      end
    default:begin
    end
    endcase
  end
end
    
always@(posedge clk)begin
  if(rst)begin
  end
  else begin
    case(wastate)
      S_IDLE:if(next_wstate==S_WHS)begin
        w_data_ready_o<=0;
        axi_w_valid_o<=1;
        axi_w_data_o<=rw_w_data_i;
        axi_w_strb_o<=
        axi_w_last_o<=
      end
      else begin
      end
      S_WHS:begin
        if(axi_w_ready_o)begin

        end
      end
    default:begin
    end
    endcase
  end
end
    

    //// 读通道状态切换
wire[63:0] axi_r_data_i_shifted=
          r_addr[2] ? 
            r_addr[1] ? 
              r_addr[0] ? {56'd0,axi_r_data_i[63:56]}:{48'd0,axi_r_data_i[63:48]}
              :r_addr[0] ? {40'd0,axi_r_data_i[63:40]}:{32'd0,axi_r_data_i[63:32]}
            :r_addr[1] ? 
              r_addr[0] ? {24'd0,axi_r_data_i[63:24]}:{16'd0,axi_r_data_i[63:16]}
              :r_addr[0] ? {8'd0,axi_r_data_i[63:8]}:axi_r_data_i;
always@(posedge clk)begin
  if(rst)rstate<=RS_IDLE;
  else rstate<=next_rstate;
end

always@(*) begin
  if(rst)next_rstate=RS_IDLE;
  else case(rstate)
    RS_IDLE:if(rw_valid_i&(rw_size_i==0))next_rstate=RS_ARHS;
      else next_rstate=RS_IDLE;
    RS_ARHS:if(axi_ar_ready_i)next_rstate=RS_RHS;
    else next_rstate=RS_ARHS;
    RS_RHS:if(axi_r_valid_i)next_rstate=RS_IDLE;
    else next_rstate=RS_RHS;
    default:next_rstate=RS_IDLE;
  endcase
end
always@(posedge clk)begin
`ifdef AXIINFO
  $display("RM:%d rwvalid=%d size=%d arvalid=%d,addr=%h,rready=%d,data=%h",rstate,rw_valid_i,rw_size_i,axi_ar_valid_o,axi_ar_addr_o,axi_r_ready_o,data_read_o);
`endif
  if(rst)begin
        r_addr<=0;
        r_size<=0;
        r_if<=0;
        r_ready_o<=1;
        data_read_o<=0;
        axi_ar_valid_o<=0;
        axi_ar_addr_o<=0;
        axi_ar_prot_o<=0;
        axi_r_ready_o<=0;
  end
  else begin
    case(rstate)
      RS_IDLE:
      if(next_rstate==RS_ARHS)begin
        r_addr<=rw_addr_i;
        r_size<=rw_size_i;
        r_if<=rw_if_i;
        r_ready_o<=0;
        axi_ar_valid_o<=1;
        axi_ar_addr_o<=rw_addr_aligned;
        axi_ar_prot_o<={rw_if_i,2'd0};
      end
      else begin
        r_addr<=0;
        r_size<=0;
        r_if<=0;
        r_ready_o<=1;
        //data_read_o<=0;
        axi_ar_valid_o<=0;
        axi_ar_addr_o<=0;
        axi_ar_prot_o<=0;
        axi_r_ready_o<=0;
      end
      RS_ARHS:if(next_rstate==RS_RHS)begin
        axi_ar_valid_o<=0;
        axi_ar_addr_o<=0;
        axi_ar_prot_o<=0;
        axi_r_ready_o<=1;
      end
      RS_RHS:if(next_rstate<=RS_IDLE)begin
        if(axi_r_resp_i[1]==0)
          data_read_o<=axi_r_data_i_shifted;
        else data_read_o<=0;
        axi_r_ready_o<=0;
        r_ready_o<=1;
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
`endif
endmodule
