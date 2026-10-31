// Experiment 1: 4:1 Multiplexer
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module tb_mux4to1;
reg I0, I1, I2, I3;
reg S0, S1;
wire Y;

// Instantiate the design
mux4to1 uut (
    .I0(I0),
    .I1(I1),
    .I2(I2),
    .I3(I3),
    .S0(S0),
    .S1(S1),
    .Y(Y)
);
initial begin

    // Test Case 1
    I0 = 1; I1 = 0; I2 = 0; I3 = 0;
    S1 = 0; S0 = 0;
    #10;

    // Test Case 2
    I0 = 0; I1 = 1; I2 = 0; I3 = 0;
    S1 = 0; S0 = 1;
    #10;

    // Test Case 3
    I0 = 0; I1 = 0; I2 = 1; I3 = 0;
    S1 = 1; S0 = 0;
    #10;

    // Test Case 4
    I0 = 0; I1 = 0; I2 = 0; I3 = 1;
    S1 = 1; S0 = 1;
    #10;

    // Test Case 5
    I0 = 1; I1 = 0; I2 = 1; I3 = 0;
    S1 = 0; S0 = 1;
    #10;

    // Test Case 6
    I0 = 0; I1 = 1; I2 = 0; I3 = 1;
    S1 = 1; S0 = 1;
    #10;
    $finish;
end
endmodule
