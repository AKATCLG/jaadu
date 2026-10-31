/* Experiment 2: To interface eight LEDs with the LPC2148 microcontroller and write an Embedded C program to control four LEDs in the ON state and the remaining four LEDs in the OFF state.
 * Source: LPC2148.pdf
 */

#include <lpc214x.h>
 
#define LED_MASK 0xFF000000
 
int main()
{
    PINSEL2 = 0x00000000;
 
    IODIR1 |= LED_MASK;
 
    while(1)
    {
        IOSET1 = 0x0F000000;
        IOCLR1 = 0xF0000000;
    }
}
