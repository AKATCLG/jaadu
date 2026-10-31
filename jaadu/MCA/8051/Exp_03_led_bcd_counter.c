/* Experiment 3: To interface LEDs with the 8051 microcontroller and write an Embedded C program to implement BCD counting sequence.
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
    unsigned char count = 0;
 
    while(1)
    {
        P2 = count;
        delay();
 
        if(count == 9)
            count = 0;
        else
            count++;
    }
}
