module one_hot_prev_sol #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] din,
    output logic onehot
);
    logic[$clog2(DATA_WIDTH):0] cnt;
    always_comb begin : counter
        cnt = '0;
        for(integer i=0; i<DATA_WIDTH; i++) begin
            if(din[i] == 1'b1) cnt = cnt + 1'b1;
        end
    end
    assign onehot = (cnt == 1);
endmodule : one_hot_prev_sol