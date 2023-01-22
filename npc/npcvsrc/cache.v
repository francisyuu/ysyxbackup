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
parameter RAML=INDEX_WIDTH+OFFSET_WIDTH-1;
parameter RAMR=10;

reg [TAG_WIDTH-1:0] tag[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg valid[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg dirty[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];

reg[15:0] state;
reg[15:0] next_state;

reg [63:0] addr;
wire[TAG_WIDTH-1:0] tag_in=addr[TAGL:TAGR];
wire[INDEX_WIDTH-1:0] index_in=addr[INDEXL:INDEXR];
wire[WAY_DEPTH-1:0]hit_wayflag;
generate
	genvar i;
	for(i=0;i<WAY_DEPTH;i=i+1)
	assign hit_wayflag[i]=(tag[i][index_in]==tag_in&valid[i][index_in]);
endgenerate
wire[WAY_WIDTH-1:0]hit_waynum=hit_wayflag==2'b01 ? 0
													:hit_wayflag==2'b10 ? 1
													:0;
wire [5:0] RAM_A=addr[9:4];
wire [RAM_WIDTH-1:0]RAM_N=addr[RAML:RAMR];
wire [RAM_WIDTH-1:0]RAM_Q[WAY_DEPTH-1:0];
reg CEN[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];

parameter S_IDLE=1;
parameter S_TAGCMP=2;
parameter S_HIT=3;
parameter S_MISS=4;

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
			else next_state=S_MISS;
		S_HIT:if(data_ready_i&data_valid_o)next_state=S_IDLE;
			else next_state=S_HIT;
		S_MISS:
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
				CEN[hit_waynum][RAM_N]<=1;
			end
			else begin
			end
			S_HIT:if(next_state==S_IDLE)begin
				data_valid_o<=0;
			end
			else begin
				data_o<=RAM_Q[hit_waynum];
				data_valid_o<=1;
			end
			S_MISS:
			default:begin
			end
    endcase
  end
end
endmodule
