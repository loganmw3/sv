module basic_alu #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] a,
    input logic [DATA_WIDTH-1:0] b,
    output logic [DATA_WIDTH-1:0] not_a,
    output logic [DATA_WIDTH-1:0] a_and_b,
    output logic [DATA_WIDTH-1:0] a_nand_b,
    output logic [DATA_WIDTH-1:0] a_or_b,
    output logic [DATA_WIDTH-1:0] a_nor_b,
    output logic [DATA_WIDTH-1:0] a_xor_b,
    output logic [DATA_WIDTH-1:0] a_xnor_b
);
    assign not_a = ~a;
    assign a_and_b = a&b;
    assign a_nand_b = ~(a&b);
    assign a_or_b = a|b;
    assign a_nor_b = ~(a|b);
    assign a_xor_b = a^b;
    assign a_xnor_b = ~(a^b);
endmodule : basic_alu
