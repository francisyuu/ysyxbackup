module ysyx_22050133_cache#(
	parameter ADDR_WIDTH=32,
	parameter TAG_WIDTH=20,
	parameter INDEX_WIDTH=6,
	parameter INDEX_DEPTH=$pow(2,INDEX_WIDTH),
	parameter OFFSET_WIDTH=6,
	parameter WAY_DEPTH=2,
	parameter WAY_WIDTH=$clog2(WAY_DEPTH)
)(
	input clk,
	input rst,
	input [63:0] addr_i,
	output [63:0] data_o,
	input addr_valid_i,
	output addr_ready_o,
	input data_ready_i,
	output data_valid_o,
);
parameter TAGL=ADDR_WIDTH-1;
parameter TAGR=ADDR_WIDTH-TAG_WIDTH;
parameter INDEXL=TAGR-1;
parameter INDEXR=TAGR-INDEX_WIDTH;
parameter RAM_WIDTH=INDEX_WIDTH+OFFSET_WIDTH-10;
parameter RAM_DEPTH=$pow(2,RAM_WIDTH);
parameter RAML=INDEX_WIDTH+OFFSET_WIDTH-1;
parameter RAMR=10;


reg [511:0] WB_buffer;
reg [63:0] addr;
reg [TAG_WIDTH-1:0] tag[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg valid[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg dirty[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
wire[TAG_WIDTH-1:0] tag_in=addr[TAGL:TAGR];
wire[INDEX_WIDTH-1:0] index_in=addr[INDEXL:INDEXR];
wire[WAY_DEPTH-1:0]hit_wayflag;
wire[WAY_WIDTH-1:0]hit_waynum=hit_wayflag==2'b01 ? 0
													:hit_wayflag==2'b10 ? 1
													:0;

wire [127:0]RAM_Q[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
reg RAM_CEN[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
reg RAM_WEN;
reg [127:0]RAM_BWEN;
wire [5:0] RAM_A=addr[9:4];
reg [127:0]RAM_D;
wire [RAM_WIDTH-1:0]RAM_N=addr[RAML:RAMR];

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
				.D(RAM_D),
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
    S_IDLE:if(addr_valid_i&addr_ready_o)next_state=S_TAGCMP;
    S_TAGCMP:
			if(|hit_wayflag)next_state=S_HIT;
			else if(dirty[hit_waynum][index_in])next_state=S_WB;
			else next_state=S_READ;
		S_HIT:if(data_ready_i&data_valid_o)next_state=S_IDLE;
			else next_state=S_HIT;
		S_WB:begin
			end
		S_READ:begin
			end
    default:next_state=S_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
  end
  else begin
    case(state)
			S_IDLE:if(next_state==S_TAGCMP)begin
				addr<=addr_i;
			end
			S_TAGCMP:if(next_state==S_HIT)begin
				RAM_CEN[hit_waynum][RAM_N]<=0;
			end
			else begin
			end
			S_HIT:if(next_state==S_IDLE)begin
				data_valid_o<=0;
			end
			else begin
				data_o<=RAM_Q[hit_waynum][RAM_N];
				data_valid_o<=1;
			end
			S_WB:begin
				
			end
			default:begin
			end
    endcase
  end
end
endmodule
