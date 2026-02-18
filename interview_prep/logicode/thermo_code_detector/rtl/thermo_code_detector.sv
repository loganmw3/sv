module thermo_code_detector (
    input logic [7:0] codeIn,
    output logic isThermometer
);
  // your code here
  // assign isThermometer = 
  // (codeIn & (codeIn + 1'b1)) == '0 
  // | (~codeIn & (~codeIn + 1'b1)) == '0 
  // && codeIn != '1 
  // && codeIn != '0;
  logic [2:0] transitions;
  always_comb begin
    transitions = '0;
    for(int i=0; i<7; i++) begin
      if(codeIn[i] != codeIn[i+1]) transitions++;
    end
  end
  assign isThermometer = (transitions == 3'd1);
endmodule : thermo_code_detector