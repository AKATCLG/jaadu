// Experiment 5: JK FF and T FF
// Source: VLSI_CODES_formatted (1).pdf

module t_ff (
input wire clk,
input wire rst,
input wire t,
output reg q,
output wire qbar
);
assign qbar = ~q;
always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 1'b0;
    else if (t)
        q <= ~q;  // Toggle
    else
        q <= q;   // Hold
end
endmodule
