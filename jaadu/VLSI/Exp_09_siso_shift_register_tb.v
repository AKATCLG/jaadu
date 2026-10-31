// Experiment 9: SISO Shift Register.
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module siso_shift_register_tb;
    reg clk, rst, si;
    wire so;
    siso_shift_register uut (
        .clk(clk),
        .rst(rst),
        .si(si),
        .so(so)
    );
    initial clk = 0;
    always #5 clk = ~clk;
    initial begin
        $monitor("Time=%0t | rst=%b | si=%b | so=%b",
                 $time, rst, si, so);
        rst = 1;
        si = 0;
        #12 rst = 0;

        // Serial input data
        si = 1; #10;
        si = 1; #10;
        si = 0; #10;
        si = 0; #10;
        si = 1; #10;
        si = 1; #10;
        si = 1; #10;
        si = 1; #10;
        $display("SISO Shift Register simulation completed");
        $finish;
    end
endmodule
