module cond_adder (
    input logic s,
    input logic [31:0] A,
    input logic [31:0] B,
    input logic [31:0] C,
    input logic [31:0] D,
    output logic [32:0] Z
);
  // your code here
  assign Z = s ? A+B : C+D;
endmodule : cond_adder
