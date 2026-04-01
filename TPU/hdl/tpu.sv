module tpu 
import types::*; 
#(
    parameter NUM_SPADS = 8,
    parameter int SPAD_DEPTH = 256
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

// Assign output (hardcode for now)
// assign mem_raddr = '0;
// assign mem_ren = '0;
// assign mem_waddr = '0;
// assign mem_wdata = '0;
// assign mem_wen = '0;

// Local Parameters
localparam IDLE = 0, CONFIGURE = 1;
localparam LOAD_META_REQ = 2, LOAD_META_WAIT = 3, LOAD_READ_REQ = 4, LOAD_READ_WAIT = 5, LOAD_WRITE = 6;
localparam STORE_READ_SPAD = 7, STORE_MEM_WRITE = 8;
localparam GEMM_PREP = 9, GEMM_RUN = 10, GEMM_WAIT_DONE = 11;
localparam COMMIT = 12;

localparam OPCODE_CONFIG = 5'b10001;
localparam OPCODE_LOAD   = 5'b00111;
localparam OPCODE_STORE  = 5'b00110;
localparam OPCODE_GEMM   = 5'b11111;

// State Machine
logic [3:0] state, state_next;

// CONFIG Stuff
logic                         meta_mem_wen;
logic [$clog2(NUM_SPADS)-1:0] meta_mem_waddr;
spad_meta_t                   meta_mem_wdata;
logic                         meta_mem_ren;
logic [$clog2(NUM_SPADS)-1:0] meta_mem_raddr;
spad_meta_t                   meta_mem_rdata;

// Load Registers
logic [$clog2(NUM_SPADS)-1:0] load_spad_reg;
logic [31:0]                  load_ptr_reg;
logic [7:0]                   load_rows_reg;
logic [7:0]                   load_cols_reg;
logic [15:0]                  load_total_reg;
logic [15:0]                  load_idx_reg;
logic [7:0]                   load_data_reg;

// Scratchpad signals
logic                         spad_wen;
logic [$clog2(NUM_SPADS)-1:0] spad_wspad;
logic [$clog2(SPAD_DEPTH)-1:0] spad_waddr;
logic [7:0]                   spad_wdata;

logic                         spad_ren;
logic [$clog2(NUM_SPADS)-1:0] spad_rspad;
logic [$clog2(SPAD_DEPTH)-1:0] spad_raddr;
logic [7:0]                   spad_rdata;


always_ff @(posedge clk) begin : state_machine_ff
    if(rst) begin
        state <= IDLE;
    end else begin
        state <= state_next;
        if (state == LOAD_META_WAIT) begin
            load_spad_reg  <= instruction[58:56];
            load_ptr_reg   <= meta_mem_rdata.ptr;
            load_rows_reg  <= meta_mem_rdata.rows;
            load_cols_reg  <= meta_mem_rdata.cols;
            load_total_reg <= meta_mem_rdata.rows * meta_mem_rdata.cols;
            load_idx_reg   <= '0;
        end

        if (state == LOAD_READ_WAIT && mem_rvalid) load_data_reg <= mem_rdata;

        if (state == LOAD_WRITE) load_idx_reg <= load_idx_reg + 1'b1;


    end
end

always_comb begin : state_machine_comb
    // State
    state_next = state;

    // Main mem
    // Read
    mem_raddr = '0;
    mem_ren   = 1'b0;

    // Write
    mem_waddr = '0;
    mem_wdata = '0;
    mem_wen   = 1'b0;

    // Meta Mem
    // Read
    meta_mem_ren = '0;
    meta_mem_raddr = '0;

    // Write
    meta_mem_wen = '0;
    meta_mem_waddr = '0;
    meta_mem_wdata = '0;

    // Commit
    commit_en = '0;

    // Scratchpad
    spad_wen = 1'b0;
    spad_wspad = '0;
    spad_waddr = '0;
    spad_wdata = '0;

    spad_ren = 1'b0;
    spad_rspad = '0;
    spad_raddr = '0;

    case(state)
    IDLE:
        // Decode
        case(instruction[63:59])
        OPCODE_CONFIG: begin // CONFIG
        state_next = CONFIGURE;
        end
        OPCODE_LOAD: begin // LOAD
        state_next = LOAD_META_REQ;
        end
        // OPCODE_STORE: begin // STORE

        // end
        // OPCODE_GEMM: begin // GEMM

        // end
        default state_next = IDLE;
    endcase

    CONFIGURE: begin
        meta_mem_wen = 1'b1;
        meta_mem_waddr = instruction[58:56]; // Target spad
        meta_mem_wdata.ptr = instruction[47:16];
        meta_mem_wdata.rows = instruction[15:8];
        meta_mem_wdata.cols = instruction[7:0];
        meta_mem_wdata.valid = 1'b1;
        state_next = COMMIT;
    end

    LOAD_META_REQ: begin
        // Request Metadata from meta mem
        meta_mem_ren = 1'b1;
        meta_mem_raddr = instruction[58:56];
        state_next = LOAD_META_WAIT;
    end

    LOAD_META_WAIT: begin
        state_next = LOAD_READ_REQ;
    end

    LOAD_READ_REQ: begin
        mem_ren   = 1'b1;
        mem_raddr = load_ptr_reg + {16'd0, load_idx_reg};
        state_next = LOAD_READ_WAIT;
    end

    LOAD_READ_WAIT: begin
        state_next = mem_rvalid ? LOAD_WRITE: LOAD_READ_WAIT;
    end

    LOAD_WRITE: begin
        spad_wen   = 1'b1;
        spad_wspad = load_spad_reg;
        spad_waddr = load_idx_reg[$clog2(SPAD_DEPTH)-1:0];
        spad_wdata = load_data_reg;

        if (load_idx_reg + 16'd1 >= load_total_reg) begin
            state_next = COMMIT;
        end else begin
            state_next = LOAD_READ_REQ;
        end

    end
    // STORE: begin

    // end
    // MATMUL: begin

    // end
    COMMIT: begin
        commit_en = 1'b1;
        state_next = IDLE;
    end

    default: state_next = IDLE;
    endcase
end

metadata_regs #(
    .NUM_SPADS(NUM_SPADS)
) metadata_regs_i (
    .clk(clk),    // input logic clk,
    .rst(rst),    // input logic rst,

    .meta_mem_ren(meta_mem_ren),     // input logic meta_mem_ren,
    .meta_mem_raddr(meta_mem_raddr),   // input logic [$clog2(NUM_SPADS)-1:0] meta_mem_raddr,
    .meta_mem_rdata(meta_mem_rdata),    // output spad_meta_t meta_mem_rdata

    .meta_mem_wen(meta_mem_wen),     // input logic meta_mem_wen,
    .meta_mem_waddr(meta_mem_waddr),   // input logic [$clog2(NUM_SPADS)-1:0] meta_mem_waddr,
    .meta_mem_wdata(meta_mem_wdata)   // input spad_meta_t meta_mem_wdata,
);

scratchpad #(
    .NUM_SPADS(NUM_SPADS),
    .SPAD_DEPTH(SPAD_DEPTH)
) sp_i (
    .clk(clk),
    .rst(rst),

    .spad_wen(spad_wen),
    .spad_wspad(spad_wspad),
    .spad_waddr(spad_waddr),
    .spad_wdata(spad_wdata),

    .spad_ren(spad_ren),
    .spad_rspad(spad_rspad),
    .spad_raddr(spad_raddr),
    .spad_rdata(spad_rdata)

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