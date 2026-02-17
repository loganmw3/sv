module bin_to_thermo #(
    parameter DIN_WIDTH = 8
) (
    input logic [DIN_WIDTH-1:0] din,
    output logic [2**DIN_WIDTH-1:0] dout
);
  // your code here
  always_comb begin
    dout = '1;
    for(integer i=0; i<(2**DIN_WIDTH); i++)begin
      if(i > din) begin
        dout[i] = 1'b0;
      end
    end
  end
endmodule : bin_to_thermo