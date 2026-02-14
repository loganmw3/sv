module mod_exp (
    input  logic [3:0] a,
    input  logic [3:0] b,
    input  logic [3:0] m,
    output logic [3:0] y
);
  // your code here
  logic [63:0] temp;
  assign temp = a**b;
  assign y = (temp)%m;
endmodule