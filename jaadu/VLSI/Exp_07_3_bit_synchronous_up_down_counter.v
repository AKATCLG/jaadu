// Experiment 7: 3 Bit synchronous Up and Down Counter
// Source: VLSI_CODES_formatted (1).pdf

module sync_updown_counter (
    input wire clk,
    input wire rst,
    input wire up_down,
    output reg [2:0] q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            q <= 3'b000;
        else if (up_down)
            q <= q + 1'b1;  // Count up
        else
            q <= q - 1'b1;  // Count down
    end
endmodule
