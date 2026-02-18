module trailing_zeros #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] din,
    output logic [$clog2(DATA_WIDTH):0] dout
);
  // your code here
  always_comb begin
    dout = '0;
    for(integer i=0; i<DATA_WIDTH; i++) begin
      if(din[i]) break;
      else dout++;
    end
  end
endmodule : trailing_zeros