// Experiment 2: Full adder using two half adder
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module full_adder_tb;
    reg A, B, Cin;
    wire Sum, Cout;
    full_adder uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );
    integer i;
    initial begin
        $monitor("Time=%0t | A=%b B=%b Cin=%b | Sum=%b Cout=%b",
                  $time, A, B, Cin, Sum, Cout);
        for (i = 0; i < 8; i = i + 1) begin
            {A, B, Cin} = i;
            #10;
        end
        $finish;
    end
endmodule
