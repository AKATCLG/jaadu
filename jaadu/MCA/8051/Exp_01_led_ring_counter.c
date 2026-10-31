/* Experiment 1: To interface LEDs with the 8051 microcontroller and write an Embedded C program to implement a ring counter sequence
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
    unsigned char led;
 
    led = 0x01;
 
    while(1)
    {
        P2 = led;
        delay();
 
        led = led << 1;
 
        if(led == 0x00)
        {
            led = 0x01;
        }
    }
}
