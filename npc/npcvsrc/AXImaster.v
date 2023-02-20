module ysyx_22050133_axi_master # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32
    //parameter AXI_ID_WIDTH      = 4
)(
    input                               clk,
    input                               rst,

    input                               rw_addr_valid_i,         
    output                              rw_addr_ready_o,     
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,    
    input                               rw_we_i,    
    input  [7:0]                        rw_len_i,    
    input  [2:0]                        rw_size_i,    
    input  [1:0]                        rw_burst_i,    
    //input                               rw_if_i,         
    input                               w_data_valid_i,     
    output reg                          w_data_ready_o,     
    input  [RW_DATA_WIDTH-1:0]          w_data_i,  
    output reg                          r_data_valid_o,     
    input                               r_data_ready_i,     
    output [RW_DATA_WIDTH-1:0]          r_data_o,  
    //input                               rw_block_i,
    output                              rw_block_o,

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,             
    output reg                          axi_aw_valid_o,
    //output     [AXI_ID_WIDTH-1:0]       axi_aw_id_o,
    output reg [AXI_ADDR_WIDTH-1:0]     axi_aw_addr_o,
    output reg [7:0]                    axi_aw_len_o,
    output reg [2:0]                    axi_aw_size_o,
    output reg [1:0]                    axi_aw_burst_o,

    input                               axi_w_ready_i,              
    output reg                          axi_w_valid_o,
    output reg [AXI_DATA_WIDTH-1:0]     axi_w_data_o,
    output reg [AXI_DATA_WIDTH/8-1:0]   axi_w_strb_o,
    output reg                          axi_w_last_o,
    
    output reg                          axi_b_ready_o,          
    input                               axi_b_valid_i,
		//input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
		//input  [1:0]                        axi_b_resp_i,               

    input                               axi_ar_ready_i,             
    output reg                          axi_ar_valid_o,
    //output     [AXI_ID_WIDTH-1:0]       axi_ar_id_o,
    output reg [AXI_ADDR_WIDTH-1:0]     axi_ar_addr_o,
    output reg [7:0]                    axi_ar_len_o,
    output reg [2:0]                    axi_ar_size_o,
    output reg [1:0]                    axi_ar_burst_o,
    
    output reg                          axi_r_ready_o,          
    input                               axi_r_valid_i,             
    //input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    //input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i
    //input                               axi_r_last_i
);
//assign axi_aw_id_o     =0;
//assign axi_ar_id_o     =0;
//assign axi_ar_id_o     ={3'd0,rw_if_i};

assign rw_block_o=~(~rw_addr_valid_i&rw_addr_ready_o);
wire [7:0]mask=rw_size_i== `ysyx_22050133_AXI_SIZE_BYTES_1 ? 8'h01
              :rw_size_i== `ysyx_22050133_AXI_SIZE_BYTES_2 ? 8'h03
              :rw_size_i== `ysyx_22050133_AXI_SIZE_BYTES_4 ? 8'h0f
              :rw_size_i== `ysyx_22050133_AXI_SIZE_BYTES_8 ? 8'hff
              :8'h00;
wire [63:0]maskb=
  rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_1 ?  64'h00000000000000ff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_2 ? 64'h000000000000ffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_4 ? 64'h00000000ffffffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_8 ? 64'hffffffffffffffff
  :64'h0000000000000000;

`ifdef ysyx_22050133_FAKEAXI
wire[RW_ADDR_WIDTH-1:0]rw_addr_in=rw_addr_i;
wire[RW_DATA_WIDTH-1:0]r_data=rw_if_i?inst64:din;
wire[RW_DATA_WIDTH-1:0]inst64;
wire[RW_DATA_WIDTH-1:0]din;

wire [5:0]r_shift={rw_addr_i[2:0],3'd0};
wire [RW_DATA_WIDTH-1:0]r_data_i_shift=(r_data>>r_shift)&maskb;

assign    rw_addr_ready_o=1;
always@(*)begin
    w_data_ready_o=1;
    r_data_valid_o=1;
    //$display("if=%d,addr=%h,shift=%d,mask=%h,data=%h",rw_if_i,rw_addr_i,r_shift,maskb,r_data);
end
reg [RW_DATA_WIDTH-1:0]      r_data_o_reg;  
assign r_data_o=r_data_o_reg;

always@(posedge clk)begin
    if(rw_addr_valid_i==1)r_data_o_reg<=r_data_i_shift;
end
wire [RW_ADDR_WIDTH-1:0]instaddr=(rw_addr_valid_i&rw_if_i) ? rw_addr_in:0;
wire [RW_ADDR_WIDTH-1:0]raddr=(rw_addr_valid_i&(~rw_if_i)&(rw_we_i==0)) ? rw_addr_in:0;
wire [RW_ADDR_WIDTH-1:0]waddr=(rw_addr_valid_i&(~rw_if_i)&rw_we_i) ? rw_addr_in:0;

always@(*)begin
          inst_read({32'd0,instaddr},inst64);
end
always@(*)begin
          vmem_read({32'd0,raddr},din);
end
always@(*)begin
        vmem_write({32'd0,waddr},w_data_i,mask);
end
`else

parameter AWS_IDLE = 1;
parameter AWS_AWHS = 2;
parameter AWS_BHS = 3;

parameter WS_IDLE = 1;
parameter WS_WHS = 2;
parameter WS_DHS = 3;
parameter WS_BHS = 4;

parameter RS_IDLE = 1;
parameter RS_ARHS = 2;//address handshake
parameter RS_RHS = 3;//address handshake
parameter RS_DHS = 4;//address handshake


reg r_addr_ready_o;
reg w_addr_ready_o;
assign rw_addr_ready_o=r_addr_ready_o&w_addr_ready_o;
//assign rw_ready_o=r_ready_o;

reg[3:0] rstate;
reg[3:0] next_rstate;

reg[3:0] awstate;
reg[3:0] next_awstate;

reg[3:0] wstate;
reg[3:0] next_wstate;

    //// ------------------State Machine------------------TODO
    //// 写通道状态切换

always@(posedge clk)begin
  if(rst)awstate<=AWS_IDLE;
  else awstate<=next_awstate;
end

always@(*) begin
  if(rst)next_awstate=AWS_IDLE;
  else case(awstate)
    AWS_IDLE:if(rw_addr_ready_o&rw_addr_valid_i&rw_we_i)next_awstate=AWS_AWHS;
    else next_awstate=AWS_IDLE;
    AWS_AWHS:if(axi_aw_valid_o&axi_aw_ready_i)next_awstate=AWS_BHS;
    else next_awstate=AWS_AWHS;
    AWS_BHS:if(axi_b_ready_o&axi_b_valid_i)next_awstate=AWS_IDLE;
    else next_awstate=AWS_BHS;
    default:next_awstate=AWS_IDLE;
  endcase
end

always@(posedge clk)begin
  if(rst)begin
          w_addr_ready_o<=1;
          axi_aw_valid_o<=0;
          axi_aw_addr_o<=0;
          axi_aw_len_o<=0;
          axi_aw_size_o<=0;
          axi_aw_burst_o<=0;
  end
  else begin
    case(awstate)
      AWS_IDLE:
        if(next_awstate==AWS_AWHS)begin
          w_addr_ready_o<=0;
          axi_aw_valid_o<=1;
          axi_aw_addr_o<=rw_addr_i;
          axi_aw_len_o<=rw_len_i;
          axi_aw_size_o<=rw_size_i;
          axi_aw_burst_o<=rw_burst_i;
        end
        else begin
          w_addr_ready_o<=1;
        end
      AWS_AWHS:if(next_awstate==AWS_BHS)begin
          axi_aw_valid_o<=0;
      end
      AWS_BHS:if(next_awstate==AWS_IDLE)begin
        w_addr_ready_o<=1;
      end
      default:begin
      end
    endcase
  end
end
    
wire [7:0]strb=mask<<rw_addr_i[2:0];
wire [5:0]w_shift={rw_addr_i[2:0],3'd0};
wire [63:0]w_data_i_shift=w_data_i<<w_shift;
reg [7:0] w_len_cnt;

always@(posedge clk)begin
  if(rst)wstate<=WS_IDLE;
  else wstate<=next_wstate;
end

always@(*) begin
  if(rst)next_wstate=WS_IDLE;
  else case(wstate)
    WS_IDLE:if(w_data_ready_o&w_data_valid_i)next_wstate=WS_WHS;
    else next_wstate=WS_IDLE;
    WS_WHS:if(axi_w_valid_o&axi_w_ready_i)
            if(w_len_cnt==0)next_wstate=WS_BHS;
            else next_wstate=WS_DHS;
    else next_wstate=WS_WHS;
    WS_DHS:if(w_data_ready_o&w_data_valid_i)next_wstate=WS_WHS;
    else next_wstate=WS_BHS;
    WS_BHS:if(axi_b_ready_o&axi_b_valid_i)next_wstate=WS_IDLE;
    else next_wstate=WS_BHS;
    default:next_wstate=WS_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
          w_len_cnt<=0;
          w_data_ready_o<=1;
          axi_w_valid_o<=0;
          axi_w_data_o<=0;
          axi_w_strb_o<=0;
          axi_w_last_o<=0;
          axi_b_ready_o<=0;
  end
  else begin
    case(wstate)
      WS_IDLE:if(next_wstate==WS_WHS)begin
          w_len_cnt<=rw_len_i;
          w_data_ready_o<=0;
          axi_w_valid_o<=1;
          axi_w_data_o<=w_data_i_shift;
          axi_w_strb_o<=strb;
          if(rw_len_i==0)axi_w_last_o<=1;
          else axi_w_last_o<=0;
      end
      else begin
          w_data_ready_o<=1;
      end
      WS_WHS:begin
        if(next_wstate==WS_DHS)begin
          axi_w_valid_o<=0;
          w_data_ready_o<=1;
          w_len_cnt<=w_len_cnt-1;
        end
        else if(next_wstate==WS_BHS)begin
          axi_w_valid_o<=0;
          axi_b_ready_o<=1;
        end
      end
      WS_DHS:begin
        if(next_wstate==WS_WHS)begin
          w_data_ready_o<=0;
          axi_w_valid_o<=1;
          axi_w_data_o<=w_data_i_shift;
          axi_w_strb_o<=strb;
          if(rw_len_i==0)axi_w_last_o<=1;
          else axi_w_last_o<=0;
        end
      end
      WS_BHS:if(next_wstate==WS_IDLE)begin
          axi_b_ready_o<=0;
          axi_w_last_o<=0;
      end
    default:begin
    end
    endcase
  end
end
    

    //// 读通道状态切换
reg  [RW_ADDR_WIDTH-1:0] r_addr;        
reg  [7:0]               r_len;        
wire [5:0]r_shift={r_addr[2:0],3'd0};
wire [63:0]axi_r_data_i_shift=(axi_r_data_i>>r_shift)&maskb;

always@(posedge clk)begin
  if(rst)rstate<=RS_IDLE;
  else rstate<=next_rstate;
end

always@(*) begin
  if(rst)next_rstate=RS_IDLE;
  else case(rstate)
    RS_IDLE:if(rw_addr_ready_o&rw_addr_valid_i&(rw_we_i==0))next_rstate=RS_ARHS;
      else next_rstate=RS_IDLE;
    RS_ARHS:if(axi_ar_valid_o&axi_ar_ready_i)next_rstate=RS_RHS;
    else next_rstate=RS_ARHS;
    RS_RHS:if(axi_r_ready_o&axi_r_valid_i)next_rstate=RS_DHS;
    else next_rstate=RS_RHS;
    RS_DHS:if(r_data_valid_o&r_data_ready_i)
             if(r_len==0)next_rstate=RS_IDLE;
             else next_rstate=RS_RHS;
    else next_rstate=RS_DHS;
    default:next_rstate=RS_IDLE;
  endcase
end
reg [RW_DATA_WIDTH-1:0]      r_data_o_reg;  
assign r_data_o=r_data_o_reg;
always@(posedge clk)begin
  if(rst)begin
        r_addr<=0;
        r_len<=0;
        r_addr_ready_o<=1;
        r_data_valid_o<=0;
        r_data_o_reg<=0;
        axi_ar_valid_o<=0;
        axi_ar_addr_o<=0;
        axi_ar_len_o<=0;
        axi_ar_size_o<=0;
        axi_ar_burst_o<=0;
        axi_r_ready_o<=0;
  end
  else begin
    case(rstate)
      RS_IDLE:
      if(next_rstate==RS_ARHS)begin
        r_addr<=rw_addr_i;
        r_len<=rw_len_i;
        r_addr_ready_o<=0;
        axi_ar_valid_o<=1;
        axi_ar_addr_o<=rw_addr_i;
        axi_ar_len_o<=rw_len_i;
        axi_ar_size_o<=rw_size_i;
        axi_ar_burst_o<=rw_burst_i;
      end
      else begin
        r_addr_ready_o<=1;
      end
      RS_ARHS:if(next_rstate==RS_RHS)begin
        axi_ar_valid_o<=0;
        axi_r_ready_o<=1;
      end
      RS_RHS:if(next_rstate==RS_DHS)begin
          axi_r_ready_o<=0;
          r_data_valid_o<=1;
          if(r_len==0)r_addr_ready_o<=1;
          r_data_o_reg<=axi_r_data_i_shift;
      end
      RS_DHS:if(next_rstate==RS_RHS)begin
          r_data_valid_o<=0;
          axi_r_ready_o<=1;
          r_addr<=r_addr+8;
          r_len<=r_len-1;
      end
      else if(next_rstate==RS_IDLE)begin
          r_data_valid_o<=0;
          axi_r_ready_o<=0;
          r_addr_ready_o<=1;
      end
      default:begin
      end
    endcase
  end
end
`endif
endmodule
