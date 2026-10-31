// Experiment 4: Binary to Gray code converter
// Source: VLSI_CODES_formatted (1).pdf

`timescale 1ns / 1ps
module binary_to_gray_tb;
    reg [3:0] Binary;
    wire [3:0] Gray;
    binary_to_gray uut(
        .Binary(Binary),
        .Gray(Gray)
    );
    integer i;
    initial begin
        $monitor("Time=%0t | Binary=%b | Gray=%b",
                 $time, Binary, Gray);
        for (i = 0; i < 16; i = i + 1) begin
            Binary = i;
            #10;
        end
        $finish;
    end
endmodule
