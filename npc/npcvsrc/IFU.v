
module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input pcREG_en          ,
  input     [63:0] dnpc,
  input            pcSrc,
  input     [63:0] inst64,
  input            pc_ready_i,
  output reg pc_valid_o,
  output reg[63:0] pc,
  output [31:0] inst
);

wire[63:0] npc=pcSrc?dnpc:pc+4;

always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
    pc_valid_o<=1;
  end
  else if(pcREG_en)begin
    pc<=npc;
    pc_valid_o<=1;
  end
  else if(pc_ready_i)pc_valid_o<=0;
end
assign inst=inst64[31:0];

endmodule
