// Experiment 7: 3 Bit synchronous Up and Down Counter
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module sync_updown_counter_tb;
    reg clk, rst, up_down;
    wire [2:0] q;
    sync_updown_counter uut (
        .clk(clk),
        .rst(rst),
        .up_down(up_down),
        .q(q)
    );
    initial clk = 0;
    always #5 clk = ~clk;
    initial begin
        $monitor("Time=%0t | rst=%b | up_down=%b | q=%b | Decimal=%0d",
                 $time, rst, up_down, q, q);
        rst = 1;
        up_down = 1;
        #12 rst = 0;

        // Count up
        up_down = 1;
        #40;

        // Count down
        up_down = 0;
        #40;
        $display("3-bit Synchronous Up/Down Counter simulation completed");
        $finish;
    end
endmodule
