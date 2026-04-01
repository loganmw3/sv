module tpu 
import types::*; 
#(
    parameter NUM_SPADS = 8
)(
    input logic clk,
    input logic rst,

    input logic [63:0] instruction,

    // Read interface w memory
    output logic [31:0] mem_raddr,
    output logic        mem_ren,
    input  logic [7:0]  mem_rdata,
    input  logic        mem_rvalid,

    output logic [31:0] mem_waddr,
    output logic [7:0]  mem_wdata,
    output logic        mem_wen,

    output logic        commit_en 
);

// Assign output
assign mem_raddr = '0;
assign mem_ren = '0;
assign mem_waddr = '0;
assign mem_wdata = '0;
assign mem_wen = '0;

// Local Parameters
localparam IDLE = 0, CONFIGURE = 1, LOAD = 2, STORE = 3, MATMUL = 4, COMMIT = 5;
localparam OPCODE_CONFIG = 5'b10001;
localparam OPCODE_LOAD   = 5'b00111;
localparam OPCODE_STORE  = 5'b00110;
localparam OPCODE_GEMM   = 5'b11111;

// State Machine
logic [2:0] state, state_next;

// CONFIG Stuff
logic meta_mem_wen;
logic [$clog2(NUM_SPADS)-1:0] meta_mem_waddr;
spad_meta_t meta_mem_wdata;
logic meta_mem_ren;
logic [$clog2(NUM_SPADS)-1:0] meta_mem_raddr;
spad_meta_t meta_mem_rdata;


always_ff @(posedge clk) begin : state_machine_ff
    if(rst) begin
        state <= IDLE;
    end else begin
        state <= state_next;
    end
end

always_comb begin : state_machine_comb
    state_next = state;
    meta_mem_wen = '0;
    meta_mem_waddr = '0;
    meta_mem_wdata = '0;
    commit_en = '0;
    meta_mem_ren = '0;
    meta_mem_raddr = '0;
    case(state)
    IDLE:
        // Decode
        case(instruction[63:59])
        OPCODE_CONFIG: begin // CONFIG
        state_next = CONFIGURE;
        end
        // OPCODE_LOAD: begin // LOAD

        // end
        // OPCODE_STORE: begin // STORE

        // end
        // OPCODE_GEMM: begin // GEMM

        // end
        default state_next = IDLE;
    endcase

    CONFIGURE: begin
        meta_mem_wen = 1'b1;
        meta_mem_waddr = instruction[58:56]; // Target spad
        meta_mem_wdata.rows = instruction[15:8];
        meta_mem_wdata.cols = instruction[7:0];
        meta_mem_wdata.ptr = 32'd0;
        meta_mem_wdata.valid = 1'b1;
        state_next = COMMIT;
    end

    // LOAD:

    // STORE:

    // MATMUL:

    COMMIT: begin
        commit_en = 1'b1;
        state_next = IDLE;
    end

    default: state_next = IDLE;
    endcase
end

metadata_regs metadata_regs_i
#(
    .NUM_SPADS(NUM_SPADS)
)(
    .clk(clk),    // input logic clk,
    .rst(rst),    // input logic rst,

    .meta_mem_ren(meta_mem_ren),     // input logic meta_mem_ren,
    .meta_mem_raddr(meta_mem_raddr),   // input logic [$clog2(NUM_SPADS)-1:0] meta_mem_raddr,
    .meta_mem_rdata(meta_mem_rdata),    // output spad_meta_t meta_mem_rdata

    .meta_mem_wen(meta_mem_wen),     // input logic meta_mem_wen,
    .meta_mem_waddr(meta_mem_waddr),   // input logic [$clog2(NUM_SPADS)-1:0] meta_mem_waddr,
    .meta_mem_wdata(meta_mem_wdata)   // input spad_meta_t meta_mem_wdata,
);


// systolic_array sys_arr
// #(
//     .N(8),
//     .K(8)
// )(
//     .clk(clk),   // input  logic clk,
//     .rst(rst),   // input  logic rst,

//     .start('0),    // input  logic start,
//     .valid('0),    // input  logic valid,

//     .a_row('0),    // input  logic unsigned [7:0] a_row [N],
//     .b_col('0),    // input  logic unsigned [7:0] b_col [N],

//     .c('0),        // output logic unsigned [31:0] c [N][N],
//     .done('0)      // output logic done
// );

endmodule : tpu