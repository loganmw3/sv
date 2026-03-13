module bubble_sort #(
    parameter DATA_WIDTH = 3,
    parameter MEM_DEPTH = 8
) (
    input [DATA_WIDTH-1:0] din,
    input sortit,
    input clk,
    input rst,
    output logic [MEM_DEPTH*DATA_WIDTH-1:0] dout
);
parameter MEM_WIDTH = $clog2(MEM_DEPTH);
logic [DATA_WIDTH-1:0] memory [MEM_DEPTH];
logic [MEM_WIDTH-1:0] count;
logic [MEM_DEPTH*DATA_WIDTH-1:0] reconstruct;

always_ff @(posedge clk) begin : counter
    if(rst) begin
        count <= '0;
    end else if(~sortit) begin
        count <= (count + 1'b1);
    end
end

always_ff @(posedge clk) begin : fill_mem
    if(rst) begin
        for(integer i=0; i<MEM_DEPTH; i++) begin
            memory[i] <= '0;
        end
    end else if (~sortit) begin
        memory[count] <= din;
    end
end

always_ff @(posedge clk) begin : assign_dout
    if(rst) begin
        dout <= '0;
    end else if (sortit) begin
        dout <= reconstruct;
    end else begin // Need this because dout should only be non-zero for one cycle after sortit is high
        dout <= '0;
    end
end

logic [DATA_WIDTH-1:0] temp;
always_comb begin :  sort_block
    if(sortit) begin
        for(integer right = MEM_DEPTH-1; right > 0; right--) begin
            for(integer left=0; left < right; left++) begin
                if(memory[left] < memory[right]) begin
                    temp = memory[left];
                    memory[left] = memory[right];
                    memory[right] = temp;
                end
            end
        end
    end
end

always_comb begin : reconstruct_block
    reconstruct = '0;
    for(integer i=0; i<MEM_DEPTH; i++) begin
        reconstruct[i*DATA_WIDTH +: DATA_WIDTH] = memory[i];
    end

end

endmodule : bubble_sort
