module simple_router #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] din,
    input logic din_en,
    input logic [1:0] addr,
    output logic [DATA_WIDTH-1:0] dout0, 
    output logic [DATA_WIDTH-1:0] dout1, 
    output logic [DATA_WIDTH-1:0] dout2, 
    output logic [DATA_WIDTH-1:0] dout3 
);
always_comb begin
    dout0 = '0;
    dout1 = '0;
    dout2 = '0;
    dout3 = '0;
    if(din_en) begin
        case(addr)
        2'b00: dout0 = din;
        2'b01: dout1 = din;
        2'b10: dout2 = din;
        2'b11: dout3 = din;
        default: ;
        endcase
    end
end
endmodule : simple_router
