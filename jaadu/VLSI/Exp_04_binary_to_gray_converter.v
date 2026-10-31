// Experiment 4: Binary to Gray code converter
// Source: VLSI_CODES_formatted (1).pdf

module binary_to_gray(
    input [3:0] Binary,
    output [3:0] Gray
);
    assign Gray[3] = Binary[3];
    assign Gray[2] = Binary[3] ^ Binary[2];
    assign Gray[1] = Binary[2] ^ Binary[1];
    assign Gray[0] = Binary[1] ^ Binary[0];
endmodule
