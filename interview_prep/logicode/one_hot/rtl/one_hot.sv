module one_hot #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] din,
    output logic onehot
);
assign onehot = (((din & (din-1)) == 0) & (din != 0));


endmodule