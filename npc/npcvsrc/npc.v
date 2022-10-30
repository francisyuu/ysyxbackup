`timescale 1ns/1ns
`include "npcvsrc/npcdefine.v"
//`include "npcdefine.v"
module ysyx_22050133_NPC(
  input               clk     ,
  input               rst     ,
  output    [63:0]    pc      ,
  output    [63:0]    npc     ,
  input     [31:0]    inst    ,
  output    [63:0]    addr    ,
  output              wen     ,
  input     [63:0]    din     ,
  output    [63:0]    dout    
  );
wire [4:0]  rs1;
wire [4:0]  rs2;
wire [4:0]  rd;
wire [63:0]  dnpc;
wire rdwen;
wire [63:0]  rddata;
wire [63:0]  rs1data;
wire [63:0]  rs2data;
wire [63:0] immI;
wire [63:0] immS;
wire [63:0] immB;
wire [63:0] immU;
wire [63:0] immJ;
wire [6:0]  funct7;
wire [2:0]  funct3;
wire [6:0]  opcode;



ysyx_22050133_RegisterFile ysyx_22050133_RegisterFile_dut(
  .clk    (clk    ),
  .rddata (rddata ),
  .rd     (rd     ),
  .wen    (rdwen  ),
  .rs1    (rs1    ),
  .rs1data(rs1data),
  .rs2    (rs2    ),
  .rs2data(rs2data)
);

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .rst(rst),
  .dnpc(dnpc),
  .pc(pc)  ,
  .npc(npc)  
  );
ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .inst  (inst  ),
  .rs1   (rs1   ),
  .rs2   (rs2   ),
  .rd    (rd    ),
  .immI  (immI  ),
  .immS  (immS  ),
  .immB  (immB  ),
  .immU  (immU  ),
  .immJ  (immJ  ),
  .funct7(funct7),
  .funct3(funct3),
  .opcode(opcode)
);

ysyx_22050133_EXU ysyx_22050133_EXU_dut(
  .clk         (clk   ),
  .rst         (rst   ),  
  .pc          (pc    ),  
  .rs1         (rs1   ),
  .rs2         (rs2   ),
  .rd          (rd    ),
  .rs1data     (rs1data),
  .rs2data     (rs2data),
  .immI        (immI  ),
  .immS        (immS  ),
  .immB        (immB  ),
  .immU        (immU  ),
  .immJ        (immJ  ),
  .funct7      (funct7),
  .funct3      (funct3),
  .opcode      (opcode),
  .dnpc        (dnpc  ),
  .rdwen       (rdwen ),
  .rddata      (rddata),
  .addr        (addr  ),
  .wen         (wen   ),
  .din         (din   ),
  .dout        (dout  )
);

endmodule

module ysyx_22050133_IFU(
  input clk          ,
  input rst          ,
  input     [63:0] dnpc,
  output reg[63:0] pc,
  output reg[63:0] npc
  );
always@(posedge clk)
begin
  if(rst)begin
    pc<=64'h8000_0000;
    npc<=64'h8000_0000;
  end
  else begin
    if(dnpc==0)begin
      //npc<=npc+4;
      pc<=pc+4;
    end
    else begin
      //npc<=dnpc+4;
      pc<=dnpc;
    end
  end
end
endmodule

module ysyx_22050133_IDU(
  input     [31:0] inst  ,
  output    [4:0]  rs1   ,
  output    [4:0]  rs2   ,
  output    [4:0]  rd    ,
  output    [63:0] immI  ,
  output    [63:0] immS  ,
  output    [63:0] immB  ,
  output    [63:0] immU  ,
  output    [63:0] immJ  ,
  output    [6:0]  funct7,
  output    [2:0]  funct3,
  output    [6:0]  opcode
);
assign rs1=inst[19:15];
assign rs2=inst[24:20];
assign rd=inst[11:7];
assign funct7=inst[31:25];
assign funct3=inst[14:12];
assign opcode=inst[6:0];

generate
  for(genvar i=12;i<64;i=i+1)begin
    assign immI[i]=inst[31];
  end
endgenerate
assign immI[11:0]=inst[31:20];

generate
  for(genvar i=12;i<64;i=i+1)begin
    assign immS[i]=inst[31];
  end
endgenerate
assign immS[11:0]={inst[31:25],inst[11:7]};

generate
  for(genvar i=13;i<64;i=i+1)begin
    assign immB[i]=inst[31];
  end
endgenerate
assign immB[12:0]={inst[31],inst[7],inst[30:25],inst[11:8],1'b0};

generate
  for(genvar i=32;i<64;i=i+1)begin
    assign immU[i]=inst[31];
  end
endgenerate
assign immU[31:0]={inst[31:12],12'd0};

generate
  for(genvar i=21;i<64;i=i+1)begin
    assign immJ[i]=inst[31];
  end
endgenerate
assign immJ[20:0]={inst[31],inst[19:12],inst[20],inst[30:21],1'd0};

endmodule

module ysyx_22050133_EXU(
  input            clk        ,
  input            rst        ,
  input     [63:0] pc         ,
  input     [4:0]  rs1        ,
  input     [4:0]  rs2        ,
  input     [4:0]  rd         ,
  input     [63:0] rs1data    ,
  input     [63:0] rs2data    ,
  input     [63:0] immI       ,
  input     [63:0] immS       ,
  input     [63:0] immB       ,
  input     [63:0] immU       ,
  input     [63:0] immJ       ,
  input     [6:0]  funct7     ,
  input     [2:0]  funct3     ,
  input     [6:0]  opcode     ,
  output reg[63:0] dnpc       ,
  output reg       rdwen      ,
  output reg[63:0] rddata     ,
  output reg[63:0] addr       ,
  output reg       wen        ,
  input     [63:0] din        ,
  output reg[63:0] dout
);

reg[63:0] add_a;
reg[63:0] add_b;
wire[63:0] add_s;
wire c;
always@(*)
begin
  case(opcode)
    `ysyx_22050133_OP_LUI:begin
      rddata=immU;
      rdwen=1;
      dnpc=0;
    end
    `ysyx_22050133_OP_AUIPC:begin
      rddata=pc+immU;
      rdwen=1;
      dnpc=0;
    end
    `ysyx_22050133_OP_JAL:begin
      rddata=pc+4;
      rdwen=1;
      dnpc=pc+immJ;
   //$monitor("pc=%x immJ=%x",pc,immJ);
    end
    `ysyx_22050133_OP_JALR:begin
      rddata=pc+4;
      rdwen=1;
      dnpc=(rs1data+immI)&64'hfffffffe;
   //$monitor("pc=%x immJ=%x",pc,immI);
    end
    `ysyx_22050133_OP_SXX:begin
      rddata=0;
      rdwen=0;
      dnpc=0;
   //$monitor("pc=%x immJ=%x",pc,immI);
    end
    `ysyx_22050133_OP_XXI:begin
      dnpc=0;
      case(funct3)
        `ysyx_22050133_F3_ADDI:begin
          rddata=rs1data+immI;
          rdwen=1;
        end
        default:begin
          rddata=0;
          rdwen=0;
        end
      endcase
    end
    `ysyx_22050133_OP_EXX:begin
      rddata=0;
      rdwen=0;
      dnpc=0;
      case(rs2)
        `ysyx_22050133_rs2_EBREAK:begin
          if(funct7==`ysyx_22050133_F7_EBREAK&&
            rs1==`ysyx_22050133_rs1_EBREAK&&
            rd==`ysyx_22050133_rd_EBREAK)begin
            stoptask();
          end
        end
      default:begin
      end
      endcase
    end
    default:begin
      $display("UDINST:pc:0x%x",pc);
      rddata=0;
      rdwen=0;
      dnpc=0;
    end
  endcase
end

endmodule

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

reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0]/* verilator public */;
assign rs1data = rs1==0?0:rf[rs1];
assign rs2data = rs2==0?0:rf[rs2];
always @(posedge clk) begin
  if (wen) rf[rd] <= rddata;
  //$monitor("r1=%x",rf[1]);
end
endmodule

module adder(
	input [63:0] a,
	input [63:0] b,
	output[63:0] s,
	output c
);
assign s=a+b;
assign c=1;
endmodule
