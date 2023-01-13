
module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input IFU_en          ,
  input     [63:0] dnpc,
  input            PCsrc,
  output reg[63:0] pc,
  output reg[31:0] inst
);

wire[63:0] npc=PCsrc?dnpc:pc+4;

always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
  end
  else if(IFU_en)begin
    pc<=npc;
  end
end

wire [63:0] inst64;
always @(*) begin
    inst_read(pc,inst64);
end

assign inst=pc[2] ? inst64[63:32]:inst64[31:0];

endmodule
