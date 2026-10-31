/* Experiment 4: To interface a 7-segment (common cathode config) displays with the 8051 microcontroller and write an Embedded C program to display from A to F.
 * Source: 8051_codes.pdf
 */

#include <reg51.h>
 
void delay(void)
{
    unsigned int i, j;
 
    for(i = 0; i < 500; i++)
    {
        for(j = 0; j < 127; j++);
    }
}
 
void main(void)
{
    unsigned char seg_code[] = {
        0x77,   // A
        0x7C,   // b
        0x39,   // C
        0x5E,   // d
        0x79,   // E
        0x71    // F
    };
 
    unsigned char i;
 
    while(1)
    {
        for(i = 0; i < 6; i++)
        {
            P2 = seg_code[i];
            delay();
        }
    }
}
