module ysyx_22050133_RegisterFile #(ADDR_WIDTH = 32, DATA_WIDTH = 64) (
  input clk,
  input [DATA_WIDTH-1:0] rddata,
  input [4:0] rd,
  input wen,
  input [4:0] rs1,
  output [DATA_WIDTH-1:0] rs1data,
  input [4:0] rs2,
  output [DATA_WIDTH-1:0] rs2data
);
always@(*)set_gpr_ptr(rf);

reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];
assign rs1data = rs1==0 ? 0
                      :(rd==rs1&wen==1)?rddata
                      :rf[rs1];
assign rs2data = rs2==0 ? 0
                      :(rd==rs2&wen==1)?rddata
                      :rf[rs2];
always @(posedge clk) begin
  if (wen) rf[rd] <= rddata;
end
endmodule
