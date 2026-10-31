// Experiment 1: 4:1 Multiplexer
// Source: VLSI_CODES_formatted (1).pdf

module mux4to1(
input I0,I1,I2,I3,
input S0,S1,
output Y
    );
    assign Y = (~S0&~S1&I0)|(~S0&S1&I1)|(S0&~S1&I2)|(S0&S1&I3);
endmodule
