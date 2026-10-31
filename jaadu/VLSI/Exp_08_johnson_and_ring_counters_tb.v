// Experiment 8: Johnson counter/ Ring counter
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module johnson_ring_counter_tb;
    reg clk, rst;
    wire [3:0] q_johnson, q_ring;
    johnson_counter_4bit uut1 (
        .clk(clk),
        .rst(rst),
        .q(q_johnson)
    );
    ring_counter_4bit uut2 (
        .clk(clk),
        .rst(rst),
        .q(q_ring)
    );
    initial clk = 0;
    always #5 clk = ~clk;
    initial begin
        $monitor("Time=%0t | rst=%b | Johnson=%b | Ring=%b",
                 $time, rst, q_johnson, q_ring);
        rst = 1;
        #12 rst = 0;
        #160;
        $display("Johnson / Ring Counter simulation completed");
        $finish;
    end
endmodule
