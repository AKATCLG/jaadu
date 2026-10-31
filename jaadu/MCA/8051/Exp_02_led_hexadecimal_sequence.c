/* Experiment 2: To interface LEDs with the 8051 microcontroller and write an Embedded C program to implement hexadecimal sequence.
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
    unsigned char count;
 
    while(1)
    {
        for(count = 0; count < 16; count++)
        {
            P2 = count;
            delay();
        }
    }
}
