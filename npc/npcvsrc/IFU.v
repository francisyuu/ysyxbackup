
module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input pcREG_en          ,
  input flush          ,
  input     [63:0] dnpc,
  input            pcSrc,
  input     [63:0] inst64,
  input            pc_ready_i,
  output pc_valid_o,
  output reg[63:0] pc,
  output reg[63:0] pc2,
  output [31:0] inst
);

wire[63:0] npc=pcSrc?dnpc:pc+4;
reg[63:0] pc1;
//reg[63:0] pc2;

`ifdef ysyx_22050133_MULTICYCLE
assign pc_valid_o=1;
reg[1:0]clk_cnt;
always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
    pc1<=64'h0000_0000;
    pc2<=64'h0000_0000;
    clk_cnt<=0;
  end
  else begin
    pc1<=pc;
    pc2<=pc1;
    if(pcREG_en)begin
    pc<=npc;
    end
  end
end
assign inst=inst64[31:0];
`else
assign pc_valid_o=pcREG_en;
reg inst_store;
reg[31:0] inst_stored;
always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
    pc1<=64'h0000_0000;
    pc2<=64'h0000_0000;
    //pc_valid_o<=1;
  end
  else if(pcREG_en)begin
    pc<=npc;
    if(flush)begin
    pc1<=0;
    pc2<=0;
    inst_store<=0;
    end
    else begin
    pc1<=pc;
    pc2<=pc1;
    inst_store<=0;
    end
    //pc_valid_o<=1;
  end
  else if(inst_store==0)begin
    inst_store<=1;
    inst_stored<=inst64[31:0];
  end
  //else if(pc_ready_i)pc_valid_o<=0;
end
assign inst=pc2==0?0:inst_store?inst_stored:inst64[31:0];
`endif

endmodule
