module barrel_shifter (
  input  logic [7:0] val,
  input  logic [2:0] ctrl,   
  output logic [7:0] out
);
  assign out = val >> ctrl;
endmodule : barrel_shifter