// Experiment 5: JK FF and T FF
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module t_ff_tb;
    reg clk, rst, t;
    wire q, qbar;
    t_ff uut (
        .clk(clk),
        .rst(rst),
        .t(t),
        .q(q),
        .qbar(qbar)
    );
    initial clk = 0;
    always #5 clk = ~clk;
    initial begin
        $monitor("Time=%0t | rst=%b t=%b | q=%b qbar=%b",
                 $time, rst, t, q, qbar);
        rst = 1;
        t = 0;
        #12 rst = 0;
        t = 1; #10; // Toggle
        t = 1; #10; // Toggle again
        t = 0; #10; // Hold
        t = 0; #10; // Hold again
        t = 1; #10; // Toggle
        $display("T Flip-Flop simulation completed");
        $finish;
    end
endmodule
