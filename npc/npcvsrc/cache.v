module ysyx_22050133_cache#(
  parameter RW_DATA_WIDTH     = 64,
  parameter RW_ADDR_WIDTH     = 64,
	parameter ADDR_WIDTH=32,
	parameter TAG_WIDTH=20,
	parameter INDEX_WIDTH=6,
	parameter INDEX_DEPTH=$pow(2,INDEX_WIDTH),
	parameter OFFSET_WIDTH=6,
	parameter BURST_LEN=$pow(2,OFFSET_WIDTH)/8-1,
	parameter WAY_DEPTH=2,
	parameter WAY_WIDTH=$clog2(WAY_DEPTH)
)(
	input clk,
	input rst,

  input                               rw_addr_valid_i,         
  output reg                          rw_addr_ready_o,     
  input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,    
  input                               rw_we_i,    
	//input  [7:0]                        rw_len_i,    
  input  [2:0]                        rw_size_i,    
	//input  [1:0]                        rw_burst_i,    
	input                               rw_if_i,         
  //input                               w_data_valid_i,     
  //output reg                          w_data_ready_o,     
  input  [RW_DATA_WIDTH-1:0]          w_data_i,  
  output reg                          rw_data_valid_o,     
  input                               r_data_ready_i,     
  output [RW_DATA_WIDTH-1:0]      r_data_o,  

  output                              cache_rw_addr_valid_o,       
  input                               cache_rw_addr_ready_i,     
  output  [RW_ADDR_WIDTH-1:0]         cache_rw_addr_o,    
  output                              cache_rw_we_o,    
  output  [7:0]                       cache_rw_len_o,    
  output  [2:0]                       cache_rw_size_o,    
  output  [1:0]                       cache_rw_burst_o,    
  output                              cache_rw_if_o,         
  output                              cache_w_data_valid_o,     
  input                               cache_w_data_ready_i,     
  output  [RW_DATA_WIDTH-1:0]         cache_w_data_o,  
  input                               cache_r_data_valid_i,     
  output                              cache_r_data_ready_o,     
  input  [RW_DATA_WIDTH-1:0]          cache_r_data_i
);
parameter TAGL=ADDR_WIDTH-1;
parameter TAGR=ADDR_WIDTH-TAG_WIDTH;
parameter INDEXL=TAGR-1;
parameter INDEXR=TAGR-INDEX_WIDTH;
parameter RAM_WIDTH=INDEX_WIDTH+OFFSET_WIDTH-10;
parameter RAM_DEPTH=$pow(2,RAM_WIDTH);
parameter RAML=INDEX_WIDTH+OFFSET_WIDTH-1;
parameter RAMR=10;


wire[127:0]data_o=RAM_Q[waynum][RAM_N]>>shift;
assign r_data_o=data_o[RW_DATA_WIDTH-1:0];
assign cache_w_data_o=data_o[RW_DATA_WIDTH-1:0];
reg [511:0] WB_buffer;
reg [63:0] addr;
reg [TAG_WIDTH-1:0] tag[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg valid[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg dirty[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
wire[TAG_WIDTH-1:0] tag_in=addr[TAGL:TAGR];
wire[INDEX_WIDTH-1:0] index_in=addr[INDEXL:INDEXR];
wire[WAY_DEPTH-1:0]hit_wayflag;
wire[WAY_WIDTH-1:0]hit_waynum_i=hit_wayflag==2'b01 ? 0
													:hit_wayflag==2'b10 ? 1
													:0;
reg[WAY_WIDTH-1:0]waynum;

wire [127:0]RAM_Q[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
reg RAM_CEN[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
wire [RW_DATA_WIDTH-1:0]maskn=
	rw_size==ysyx_22050133_AXI_SIZE_BYTES_1 ? 64'hffffffffffffff00
	:rw_size==ysyx_22050133_AXI_SIZE_BYTES_2 ? 64'hffffffffffff0000
	:rw_size==ysyx_22050133_AXI_SIZE_BYTES_4 ? 64'hffffffff00000000
	:rw_size==ysyx_22050133_AXI_SIZE_BYTES_8 ? 64'h0000000000000000
	:64'hffffffffffffffff;
reg RAM_WEN;
wire [6:0]shift={addr[3:0],3'd0};
wire [127:0]RAM_BWEN=maskn<<shift;
wire [5:0] RAM_A=addr[9:4];
wire [127:0]RAM_D=w_data<<shift;
wire [RAM_WIDTH-1:0]RAM_N=addr[RAML:RAMR];
reg [RAM_WIDTH-1:0]random;

generate
	genvar i;
	genvar j;
	for(i=0;i<WAY_DEPTH;i=i+1)begin
	assign hit_wayflag[i]=(tag[i][index_in]==tag_in&valid[i][index_in]);
		for(j=0;j<RAM_DEPTH;j=j+1)begin
			S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U0
			(
				.Q(RAM_Q[i][j]),
			  .CLK(clk),
				.CEN(RAM_CEN[i][j]),
				.WEN(RAM_WEN),
				.BWEN(RAM_BWEN),
				.A(RAM_A),
				.D(RAM_D)
			);
		end
	end
endgenerate

parameter S_IDLE=1;
parameter S_TAGCMP=2;
parameter S_HIT=3;
parameter S_MISS=4;

reg[15:0] state;
reg[15:0] next_state;

always@(posedge clk)begin
  if(rst)state<=S_IDLE;
  else state<=next_state;
end

always@(*) begin
  if(rst)next_state=S_IDLE;
  else case(state)
		S_IDLE:if(rw_addr_valid_i&rw_addr_ready_o)begin
						if(|hit_wayflag)next_state=S_HIT;
						else if(dirty[hit_waynum_i][index_in])next_state=S_WA;
						else next_state=S_RA;
					end
				else next_state=S_IDLE
		S_HIT:if(data_ready_i&rw_data_valid_o)next_state=S_IDLE;
			else next_state=S_HIT;
		S_WA:if(cache_rw_addr_ready_i)next_state=S_W;
			else next_state=S_WA;
		S_W:if(cache_w_data_ready_i&cache_w_data_valid_o&(cache_rw_len_o==0))next_state=S_RA;
  	S_RA:if(cache_rw_addr_valid_o&cache_rw_addr_ready_i)next_state=S_R;
	  S_R:if(cache_r_data_valid_o&(cache_rw_len_o==0))next_state=S_HIT;
    default:next_state=S_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
  end
  else begin
    case(state)
			S_IDLE:if(next_state==S_HIT)begin
					addr<=rw_addr_i;
					we<=rw_we_i;
					size<=rw_size_i;
					w_data<=w_data_i;
					waynum<=hit_waynum_i;
					RAM_CEN[hit_waynum_i][RAM_N]<=0;
					RAM_WEN<=~rw_we_i;
				end
				else if(next_state==S_WA)begin
					cache_rw_addr_valid_o<=1;
					cache_rw_addr_o<={tag[random][index_in],index_in,6'd0};
					cache_rw_we_o<=1;
					cache_rw_len_o<=BURST_LEN;
					cache_rw_size_o<=ysyx_22050133_AXI_SIZE_BYTES_8;
					cache_rw_burst_o<=ysyx_22050133_AXI_BURST_TYPE_INCR;
					cache_rw_if_o<=rw_if_i;
					valid[random][index_i]=0;

					index=index_in;
					addr<={tag[random][index_in],index_in,6'd0};
					addr0<=rw_addr_i;
					we<=rw_we_i;
					size<=rw_size_i;
					w_data<=w_data_i;
					w_data0<=w_data_i;
					rw_if<=rw_if_i;
					waynum<=random;
					RAM_CEN[random][RAM_N]<=0;
				end
				else if(next_state==S_RA)begin
				RAM_CEN[waynum][RAM_N]<=0;
				end
				else begin
				end
			S_HIT:if(next_state==S_IDLE)begin
				RAM_CEN[waynum][RAM_N]<=0;
				data_valid_o<=0;
			end
			else if(rw_data_valid_o==0)begin
				rw_data_valid_o<=1;
			end
			S_WA:if(next_state==S_W)begin
				cache_w_data_valid_o<=1;
			end
			S_W:begin
				if(cache_rw_addr_valid_o&cache_w_data_ready_i)begin
					if(cache_rw_len_dyn==0)begin
						cache_rw_addr_valid_o<=1;
						cache_rw_addr_o<=addr0;
						cache_rw_we_o<=0;
						cache_rw_len_o<=BURST_LEN;
						cache_rw_size_o<=ysyx_22050133_AXI_SIZE_BYTES_8;
						cache_rw_burst_o<=ysyx_22050133_AXI_BURST_TYPE_INCR;
						cache_rw_if_o<=rw_if;
						cache_w_data_valid_o<=0;
						tag[waynum][index]<=addr0[TAGL:TAGR];
					end
					else begin
						addr<=addr+8;
						cache_w_data_valid_o<=0;
						cache_rw_len_o<=cache_rw_len_o-1;
					end
				end
				else begin
					cache_w_data_valid_o<=1;
				end
			end
			S_RA:if(cache_rw_addr_valid_o&cache_rw_addr_ready_i)begin
						cache_rw_addr_valid_o<=0;
						cache_r_addr_ready_o<=1;
					end
			S_R:if(cache_r_data_valid_o&cache_r_data_ready_o)begin
							RAM_CEN[waynum][RAM_N]<=0;
							RAM_WEN<=0;
							w_data<=cache_r_data_i;
							cache_rw_len_o<=cache_rw_len_o-1;
							cache_r_data_ready_o<=0;
					end
					else if(next_state=S_HIT)begin
							RAM_CEN[waynum][RAM_N]<=0;
							RAM_WEN<=~we;
							w_data<=wdata0;
							addr<=addr0
							we<=rw_we_i;
							size<=rw_size_i;
							waynum<=hit_waynum_i;
						end
					else begin
						RAM_WEN<=1;
						addr<=addr+8;
						cache_r_data_ready_o<=1;
					end
			default:begin
			end
    endcase
  end
end
endmodule
