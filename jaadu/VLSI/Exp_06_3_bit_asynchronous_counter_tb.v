// Experiment 6: 3 Bit Asynchronous Counter
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module async_counter_3bit_tb;
    reg clk, rst;
    wire [2:0] q;
    async_counter_3bit uut (
        .clk(clk),
        .rst(rst),
        .q(q)
    );
    initial clk = 0;
    always #5 clk = ~clk;
    initial begin
        $monitor("Time=%0t | rst=%b | q=%b | Decimal=%0d",
                 $time, rst, q, q);
        rst = 1;
        #12 rst = 0;
        #160;
        $display("3-bit Asynchronous Counter simulation completed");
        $finish;
    end
endmodule
