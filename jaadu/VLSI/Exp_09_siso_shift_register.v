// Experiment 9: SISO Shift Register.
// Source: VLSI_CODES_formatted (1).pdf

module siso_shift_register (
    input wire clk,
    input wire rst,
    input wire si,
    output wire so
);
    reg [3:0] shreg;
    always @(posedge clk or posedge rst) begin
        if (rst)
            shreg <= 4'b0000;
        else
            shreg <= {si, shreg[3:1]};
    end
    assign so = shreg[0];
endmodule
