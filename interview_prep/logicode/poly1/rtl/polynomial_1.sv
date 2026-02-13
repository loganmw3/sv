module polynomial_1 (
    input  logic [ 7:0] x,
    output logic [15:0] y
);
  // your code here
  assign y = ({8'd0, x} + 16'd1)*({8'd0, x} + 16'd1);
endmodule : polynomial_1
