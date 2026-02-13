module top_tb;
    //---------------------------------------------------------------------------------
    // Waveform generation.
    //---------------------------------------------------------------------------------
    initial begin
        $fsdbDumpfile("dump.fsdb");
        $fsdbDumpvars(0, "+all");
    end

    //---------------------------------------------------------------------------------
    // TODO: Declare cache port signals:
    //---------------------------------------------------------------------------------
    bit clk;
    bit rst;

    // CPU side signals (ufp -> upward facing port)
    logic [31:0] ufp_addr;
    logic [3:0] ufp_rmask;
    logic [3:0] ufp_wmask;
    logic [31:0] ufp_rdata;
    logic [31:0] ufp_wdata;
    logic ufp_resp;

    // Memory side signals (dfp -> downward facing port)
    logic [31:0] dfp_addr;
    logic dfp_read;
    logic dfp_write;
    logic [255:0] dfp_rdata;
    logic [255:0] dfp_wdata;
    logic dfp_resp;
    //---------------------------------------------------------------------------------
    // TODO: Instantiate the DUT:
    //---------------------------------------------------------------------------------
    cache dut (
        .clk(clk),
        .rst(rst),
        .ufp_addr(ufp_addr),
        .ufp_rmask(ufp_rmask),
        .ufp_wmask(ufp_wmask),
        .ufp_rdata(ufp_rdata),
        .ufp_wdata(ufp_wdata),
        .ufp_resp(ufp_resp),
        .dfp_addr(dfp_addr),
        .dfp_read(dfp_read),
        .dfp_write(dfp_write),
        .dfp_rdata(dfp_rdata),
        .dfp_wdata(dfp_wdata),
        .dfp_resp(dfp_resp)
    );
    //---------------------------------------------------------------------------------
    // TODO: Generate a clock:
    //---------------------------------------------------------------------------------
    int clock_half_period_ps;
    initial begin
        $value$plusargs("CLOCK_PERIOD_PS_ECE411=%d", clock_half_period_ps);
        clock_half_period_ps = clock_half_period_ps / 2;
    end

    always #(clock_half_period_ps) clk = ~clk;

    initial begin
        $fsdbDumpfile("dump.fsdb");
        if ($test$plusargs("NO_DUMP_ALL_ECE411")) begin
            $fsdbDumpvars(0, dut, "+all");
            $fsdbDumpoff();
        end else begin
            $fsdbDumpvars(0, "+all");
        end
        rst = 1'b1;
        ufp_rmask <= '0;
        ufp_wmask <= '0;
        repeat (2) @(posedge clk);
        rst <= 1'b0;
    end

    //---------------------------------------------------------------------------------
    // TODO: Verification constructs (recommended)
    //---------------------------------------------------------------------------------
    // Here's ASCII art of how the recommended testbench works:
    //                                +--------------+                           +-----------+
    //                       +------->| Golden model |---output_transaction_t--->|           |
    //                       |        +--------------+                           |           |
    //  input_transaction ---+                                                   | Check ==  |
    //                       |        +------+                                   |           |
    //                       +------->|  DUT |---output_transaction_t----------->|           |
    //                                +------+                                   +-----------+

    // Struct that defines an "input transaction" -- this is basically one
    // operation that's done on the cache.
    typedef struct packed {
        logic [31:0] address; // Address to read from.
        bit transaction_type; // Read or write? You could make an enum for this.
        // ... what else defines an input transaction? Think: rmask/wmask, data...

        // Note that it's useful to include the DFP signals here as well for
        // planned misses, like this:
        bit [255:0] dfp_rdata;
        // What else?
    } input_transaction_t;

    // The output transaction tells us how the cache is expected to behave due
    // to an input transaction.
    typedef struct packed {
        bit caused_writeback;
        bit caused_allocate;
        bit [31:0] returned_data;
        bit [255:0] dfp_writeback_data;
        // what else do you need?
    } output_transaction_t;

    logic [255:0] data_golden_arrays[4];
    // Similarly, make arrays for tags, valid, dirty, plru.

    function input_transaction_t generate_input_transaction();
        // This function generates an input transaction. 

        input_transaction_t inp;

        // Pick whether to generate a hit or miss.
        bit do_hit;
        std::randomize(do_hit);

        if (do_hit) begin
            // If we're generating a hit, we need to request an address that's
            // actually in the cache. Call:

            // get_cached_addresses(); Write this function to query golden tag
            // arrays, then fill out inp.address and other inp fields.
        end else begin // do miss
            // do:
            // std::randomize(inp) with {...};
            // Since it's a miss, we must fill out inp.dfp_* signals.
            // inp.address can be completely random.
        end
    endfunction : generate_input_transaction

    function output_transaction_t golden_cache_do(input_transaction_t inp);
        output_transaction_t out;
        // Do operations on the arrays, and fill up "out" correctly. Use "="
        // assignment here: this is not RTL. It is a behavioral software model 
        // of the cache.
    endfunction : golden_cache_do

    task drive_dut(input input_transaction_t inp, output output_transaction_t out);
        // Do inp operation on the DUT by driving with "<=".
        // Fill out an output_transaction_t struct while doing so depending on
        // what the DUT does. Refer to mp_verif to see how to drive and
        // monitor DUT signals. It may be useful to use fork...join, or to
        // also take as input the golden model's output struct to make it
        // easier to drive.
    endtask : drive_dut

    function compare_outputs(output_transaction_t golden_out, output_transaction_t dut_out);
        // Compare the output structs, and $error() if there's a mismatch.
    endfunction : compare_outputs

    //---------------------------------------------------------------------------------
    // TODO: Main initial block that calls your tasks, then calls $finish
    //---------------------------------------------------------------------------------

endmodule : top_tb