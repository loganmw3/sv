module reversing_bits #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] din,
    output logic [DATA_WIDTH-1:0] dout
);
    assign dout = { << {din}};
endmodule : reversing_bits
