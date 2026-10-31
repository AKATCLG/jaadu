# jaadu

Lab programs extracted from the supplied PDFs, organized into two sections.

## MCA

- [8051](MCA/8051): 11 Embedded C experiments.
- [LPC2148](MCA/LPC2148): 5 Embedded C experiments.

## VLSI

[Verilog programs and testbenches](VLSI): 9 experiments, including separate JK and T flip-flop designs and testbenches for Experiment 5.

## Experiment index

Experiment numbers follow each source PDF independently. Filenames contain the experiment number and a brief description; `_tb.v` denotes a testbench.

| File | Description |
| --- | --- |
| [MCA/8051/Exp_01_led_ring_counter.c](MCA/8051/Exp_01_led_ring_counter.c) | To interface LEDs with the 8051 microcontroller and write an Embedded C program to implement a ring counter sequence |
| [MCA/8051/Exp_02_led_hexadecimal_sequence.c](MCA/8051/Exp_02_led_hexadecimal_sequence.c) | To interface LEDs with the 8051 microcontroller and write an Embedded C program to implement hexadecimal sequence. |
| [MCA/8051/Exp_03_led_bcd_counter.c](MCA/8051/Exp_03_led_bcd_counter.c) | To interface LEDs with the 8051 microcontroller and write an Embedded C program to implement BCD counting sequence. |
| [MCA/8051/Exp_04_seven_segment_a_to_f.c](MCA/8051/Exp_04_seven_segment_a_to_f.c) | To interface a 7-segment (common cathode config) displays with the 8051 microcontroller and write an Embedded C program to display from A to F. |
| [MCA/8051/Exp_05_seven_segment_0_to_9.c](MCA/8051/Exp_05_seven_segment_0_to_9.c) | To interface a 7-segment (common cathode config) displays with the 8051 microcontroller and write an Embedded C program to display a counting sequence O to 9. |
| [MCA/8051/Exp_06_multiplexed_seven_segment_0_to_9.c](MCA/8051/Exp_06_multiplexed_seven_segment_0_to_9.c) | To interface two multiplexed 7-segment (common cathode config) displays with the 8051microcontroller and write an Embedded C program to display a counting sequence O to 9. |
| [MCA/8051/Exp_07_multiplexed_seven_segment_a_to_f.c](MCA/8051/Exp_07_multiplexed_seven_segment_a_to_f.c) | To interface two multiplexed 7-segment(common cathode config) displays with the 8051microcontroller and write an Embedded C program to display A to F. |
| [MCA/8051/Exp_08_relay_buzzer_led_on_off.c](MCA/8051/Exp_08_relay_buzzer_led_on_off.c) | To write and execute an Embedded C program to interface a relay, buzzer, and LED with the 8051 microcontroller and control them to turn ON and OFF |
| [MCA/8051/Exp_09_push_button_relay_buzzer_led_chasing.c](MCA/8051/Exp_09_push_button_relay_buzzer_led_chasing.c) | To write and execute an Embedded C program to interface push buttons, LEDs, relay, and buzzer with the 8051 microcontroller, such that Button 1 activates the relay and buzzer and produces LED chasing from left to right, while Button 2 deactivates the relay and buzzer and produces LED chasing from right to left |
| [MCA/8051/Exp_10_lcd_first_line_message.c](MCA/8051/Exp_10_lcd_first_line_message.c) | To interface a 16x2 LCD with the 8051 microcontroller and write an Embedded C program to display a message on the first line of the LCD. |
| [MCA/8051/Exp_11_lcd_second_line_message.c](MCA/8051/Exp_11_lcd_second_line_message.c) | To interface a 16x2 LCD with the 8051 microcontroller and write an Embedded C program to display a message on the second line of the LCD |
| [MCA/LPC2148/Exp_01_all_leds_on_off.c](MCA/LPC2148/Exp_01_all_leds_on_off.c) | To interface LEDs with the LPC2148 microcontroller and write an Embedded C program to turn all LEDs ON and OFF simultaneously. |
| [MCA/LPC2148/Exp_02_four_leds_on_four_off.c](MCA/LPC2148/Exp_02_four_leds_on_four_off.c) | To interface eight LEDs with the LPC2148 microcontroller and write an Embedded C program to control four LEDs in the ON state and the remaining four LEDs in the OFF state. |
| [MCA/LPC2148/Exp_03_alternating_four_led_groups.c](MCA/LPC2148/Exp_03_alternating_four_led_groups.c) | simultaneously 4 led on and off |
| [MCA/LPC2148/Exp_04_rtc_date_time_uart.c](MCA/LPC2148/Exp_04_rtc_date_time_uart.c) | To configure and program the on-chip Real-Time Clock (RTC) of the LPC2148 microcontroller using Embedded C to display the current date and time. |
| [MCA/LPC2148/Exp_05_glcd_butterfly_image.c](MCA/LPC2148/Exp_05_glcd_butterfly_image.c) | To interface a Graphical LCD (GLCD) with the LPC2148 microcontroller and write an Embedded C program to display a simple graphical image. |
| [VLSI/Exp_01_4_to_1_multiplexer.v](VLSI/Exp_01_4_to_1_multiplexer.v) | 4:1 Multiplexer |
| [VLSI/Exp_01_4_to_1_multiplexer_tb.v](VLSI/Exp_01_4_to_1_multiplexer_tb.v) | 4:1 Multiplexer (testbench) |
| [VLSI/Exp_02_full_adder_using_half_adders.v](VLSI/Exp_02_full_adder_using_half_adders.v) | Full adder using two half adder |
| [VLSI/Exp_02_full_adder_using_half_adders_tb.v](VLSI/Exp_02_full_adder_using_half_adders_tb.v) | Full adder using two half adder (testbench) |
| [VLSI/Exp_03_4_bit_alu.v](VLSI/Exp_03_4_bit_alu.v) | 4 BIT ALU |
| [VLSI/Exp_03_4_bit_alu_tb.v](VLSI/Exp_03_4_bit_alu_tb.v) | 4 BIT ALU (testbench) |
| [VLSI/Exp_04_binary_to_gray_converter.v](VLSI/Exp_04_binary_to_gray_converter.v) | Binary to Gray code converter |
| [VLSI/Exp_04_binary_to_gray_converter_tb.v](VLSI/Exp_04_binary_to_gray_converter_tb.v) | Binary to Gray code converter (testbench) |
| [VLSI/Exp_05_jk_flip_flop.v](VLSI/Exp_05_jk_flip_flop.v) | JK FF and T FF |
| [VLSI/Exp_05_jk_flip_flop_tb.v](VLSI/Exp_05_jk_flip_flop_tb.v) | JK FF and T FF (testbench) |
| [VLSI/Exp_05_t_flip_flop.v](VLSI/Exp_05_t_flip_flop.v) | JK FF and T FF |
| [VLSI/Exp_05_t_flip_flop_tb.v](VLSI/Exp_05_t_flip_flop_tb.v) | JK FF and T FF (testbench) |
| [VLSI/Exp_06_3_bit_asynchronous_counter.v](VLSI/Exp_06_3_bit_asynchronous_counter.v) | 3 Bit Asynchronous Counter |
| [VLSI/Exp_06_3_bit_asynchronous_counter_tb.v](VLSI/Exp_06_3_bit_asynchronous_counter_tb.v) | 3 Bit Asynchronous Counter (testbench) |
| [VLSI/Exp_07_3_bit_synchronous_up_down_counter.v](VLSI/Exp_07_3_bit_synchronous_up_down_counter.v) | 3 Bit synchronous Up and Down Counter |
| [VLSI/Exp_07_3_bit_synchronous_up_down_counter_tb.v](VLSI/Exp_07_3_bit_synchronous_up_down_counter_tb.v) | 3 Bit synchronous Up and Down Counter (testbench) |
| [VLSI/Exp_08_johnson_and_ring_counters.v](VLSI/Exp_08_johnson_and_ring_counters.v) | Johnson counter/ Ring counter |
| [VLSI/Exp_08_johnson_and_ring_counters_tb.v](VLSI/Exp_08_johnson_and_ring_counters_tb.v) | Johnson counter/ Ring counter (testbench) |
| [VLSI/Exp_09_siso_shift_register.v](VLSI/Exp_09_siso_shift_register.v) | SISO Shift Register. |
| [VLSI/Exp_09_siso_shift_register_tb.v](VLSI/Exp_09_siso_shift_register_tb.v) | SISO Shift Register. (testbench) |

## Usage and source notes

- Build each MCA experiment separately with a target-specific embedded compiler, device headers, and board configuration (for example, a suitable Keil project). Each C file is a standalone program.
- For VLSI, compile a design together with its matching `_tb.v` file. Example with Icarus Verilog:

  ```sh
  iverilog -o simulation VLSI/Exp_02_full_adder_using_half_adders.v VLSI/Exp_02_full_adder_using_half_adders_tb.v
  vvp simulation
  ```

- Sources: `8051_codes.pdf`, `LPC2148.pdf`, and `VLSI_CODES_formatted (1).pdf` supplied by the user.
- Code logic and wiring values are preserved from the PDFs; page markers and document headings were removed and code formatting normalized. These programs have not been compiled or tested on hardware.
- In VLSI Experiment 1, the supplied equation treats `{S0,S1}` as the selection order; the testbench changes selectors in `{S1,S0}` order. This source inconsistency is retained.
- LPC2148 Experiment 4 initializes the RTC to a fixed date/time from the source; adjust it when using the program.
