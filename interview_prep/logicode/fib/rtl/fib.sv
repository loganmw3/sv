module fib (
    input  logic signed [7:0]  in_0,
    output logic signed [15:0] out
);

  logic [15:0] a, b, next;

  always_latch begin
    out = '0;
    if (in_0 <= 0) begin
      out = '0;
    end else begin
      a = 16'd0;   // fib(0)
      b = 16'd1;   // fib(1)
      for(integer i=0; i<in_0; i++) begin
        next = a+b;
        a = b;
        b = next;
      end
      out = a;
    end
  end

endmodule
