module log2_int (
    input  logic signed [15:0] in_0,
    output logic signed [7:0]  out
);

  logic [3:0] max;

  always_comb begin
    out = '0;
    max = '0;

    if (in_0 > 0) begin
      // this gives an error that im not really sure how to fix.
      // Its just a synthesis warning so if you run make twice its fine
      // Something with i's width...
      for (integer i=15; i >= 0; i--) begin
        if (in_0[i]) begin
          max = i;
          break;
        end
      end
      out = {4'd0, max};
    end
  end

endmodule : log2_int
