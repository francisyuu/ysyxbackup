
module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input pcREG_en          ,
  input flush          ,
  input     [63:0] dnpc,
  input            pcSrc,
  input     [63:0] inst64,
  input            pc_ready_i,
  output reg pc_valid_o,
  output reg[63:0] pc,
  output reg[63:0] pc1,
  output [31:0] inst
);

wire[63:0] npc=pcSrc?dnpc:pc+4;
`ifdef ysyx_22050133_MULTICYCLE
always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
    pc1<=64'h8000_0000;
    pc_valid_o<=1;
  end
  else if(pcREG_en)begin
    pc<=npc;
    pc1<=npc;
    pc_valid_o<=1;
  end
  else begin
    pc_valid_o<=0;
  end
  //else if(pc_ready_i)pc_valid_o<=0;
end
assign inst=inst64[31:0];

`else

reg inst_store;
reg[31:0]inst_stored;
always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
    pc1<=64'h0000_0000;
    pc_valid_o<=1;
    inst_stored<=0;
  end
  else if(pcREG_en)begin
    pc<=npc;
    if(flush)pc1<=0;
    else pc1<=pc;
    pc_valid_o<=1;
    inst_store<=0;
    inst_stored<=0;
  end
  else if(inst_store==0)begin
    pc_valid_o<=0;
    inst_store<=1;
    inst_stored<=inst64[31:0];
  end
end
assign inst=pc1==0?0:inst_store ? inst_stored:inst64[31:0];
`endif
endmodule
