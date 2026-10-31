/* Experiment 8: To write and execute an Embedded C program to interface a relay, buzzer, and LED with the 8051 microcontroller and control them to turn ON and OFF
 * Source: 8051_codes.pdf
 */

#include <REG51.H>
 
sbit RELAY = P1^6;
sbit BUZZER = P3^7;
sbit LED = P2^0;
 
void delay(void)
{
    unsigned int i, j;
 
    for(i = 0; i < 500; i++)
    {
        for(j = 0; j < 100; j++);
    }
}
 
void main(void)
{
    while(1)
    {
        RELAY = 1;
        BUZZER = 1;
        LED = 1;
 
        delay();
 
        RELAY = 0;
        BUZZER = 0;
        LED = 0;
 
        delay();
    }
}
