module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input pcREG_en          ,
  input     [31:0] dnpc,
  input            pcSrc,
  input     [31:0] instin,
  output reg pc_valid_o,
  output reg[31:0] pc,
  output [31:0] npc,
  output [31:0] inst
);

`ifdef ysyx_22050133_MULTICYCLE
assign npc=pc;
always@(posedge clk)
begin
  if(rst)begin
    pc<=32'h80000000;
    pc_valid_o<=1;
  end
  else if(pcREG_en)begin
    pc<=pcSrc?dnpc:pc+4;
    pc_valid_o<=1;
  end
  else begin
    pc_valid_o<=0;
  end
end
assign inst=pc==32'h7ffffffc ? 0 : instin[31:0];

`else

assign npc=pcSrc ? dnpc:pc+4;
reg inst_store;
reg[31:0]inst_stored;
always@(posedge clk)
begin
  if(rst)begin
    pc<=32'h7ffffffc;
    pc_valid_o<=1;
    inst_store<=0;
    inst_stored<=0;
  end
  else if(pcREG_en)begin
    pc<=npc;
    pc_valid_o<=1;
    inst_store<=0;
    inst_stored<=0;
  end
  else if(inst_store==0)begin
    pc_valid_o<=0;
    inst_store<=1;
    inst_stored<=instin[31:0];
  end
end
assign inst=pc==32'h7ffffffc ? 0:inst_store ? inst_stored:instin[31:0];
`endif
endmodule
