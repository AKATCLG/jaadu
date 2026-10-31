/* Experiment 5: To interface a 7-segment (common cathode config) displays with the 8051 microcontroller and write an Embedded C program to display a counting sequence O to 9.
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
    unsigned char seg_code[] =
    {
        0x3F,  // 0
        0x06,  // 1
        0x5B,  // 2
        0x4F,  // 3
        0x66,  // 4
        0x6D,  // 5
        0x7D,  // 6
        0x07,  // 7
        0x7F,  // 8
        0x6F   // 9
    };
 
    unsigned char i;
 
    while(1)
    {
        for(i = 0; i < 10; i++)
        {
            P2 = seg_code[i];
            delay();
        }
    }
}
