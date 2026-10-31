/* Experiment 3: simultaneously 4 led on and off
 * Source: LPC2148.pdf
 */

#include <lpc214x.h>
 
#define LED_MASK 0xFF000000
 
void delay()
{
    unsigned int i;
    for(i = 0; i < 5000000; i++);
}
 
int main()
{
    PINSEL2 = 0x00000000;
 
    IODIR1 |= LED_MASK;
 
    while(1)
    {
        IOSET1 = 0x0F000000;
        IOCLR1 = 0xF0000000;
        delay();
 
        IOSET1 = 0xF0000000;
        IOCLR1 = 0x0F000000;
        delay();
    }
}
