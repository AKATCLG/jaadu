// Experiment 3: 4 BIT ALU
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module alu4bit_tb;
    reg [3:0] A, B;
    reg [2:0] ALU_Sel;
    reg Cin;
    wire [3:0] Result;
    wire Zero, Carry, Negative;
    alu_4bit uut (
        .A(A),
        .B(B),
        .ALU_Sel(ALU_Sel),
        .Cin(Cin),
        .Result(Result),
        .Zero(Zero),
        .Carry(Carry),
        .Negative(Negative)
    );
    initial begin
        $monitor("Time=%0t | Sel=%b | A=%h B=%h Cin=%b | Result=%h | Zero=%b Carry=%b Negative=%b",
                 $time, ALU_Sel, A, B, Cin, Result, Zero, Carry, Negative);
        A = 4'h5;
        B = 4'h3;
        Cin = 0;
        ALU_Sel = 3'b000; #10;
        ALU_Sel = 3'b001; #10;
        ALU_Sel = 3'b010; #10;
        ALU_Sel = 3'b011; #10;
        ALU_Sel = 3'b100; #10;
        ALU_Sel = 3'b101; #10;
        ALU_Sel = 3'b110; #10;
        ALU_Sel = 3'b111; #10;
        $finish;
    end
endmodule
