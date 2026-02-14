module majority (
    input  logic a,
    input  logic b,
    input  logic c,
    output logic out
);
    // your code here
    assign out = a&b | a&c | b&c;
endmodule : majority
