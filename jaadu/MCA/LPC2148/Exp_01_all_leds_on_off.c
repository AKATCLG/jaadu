/* Experiment 1: To interface LEDs with the LPC2148 microcontroller and write an Embedded C program to turn all LEDs ON and OFF simultaneously.
 * Source: LPC2148.pdf
 */

#include <lpc214x.h>
 
#define LED_MASK 0xFF000000
 
void delay()
{
    unsigned int i;
    for(i = 0; i < 500000; i++);
}
 
int main()
{
    PINSEL2 = 0x00000000;
 
    IODIR1 |= LED_MASK;
 
    while(1)
    {
        IOSET1 = LED_MASK;  // All LEDs ON
        delay();
 
        IOCLR1 = LED_MASK;  // All LEDs OFF
        delay();
    }
}
