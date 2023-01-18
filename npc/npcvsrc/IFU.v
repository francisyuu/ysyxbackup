
module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input IFU_en          ,
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
  else if(IFU_en)begin
    pc<=npc;
    pc_valid_o<=1;
  end
  else if(pc_ready_i)pc_valid_o<=0;
end

//always @(*) begin
    //inst_read(pc,inst64);
//end

assign inst=pc[2] ? inst64[63:32]:inst64[31:0];

endmodule
