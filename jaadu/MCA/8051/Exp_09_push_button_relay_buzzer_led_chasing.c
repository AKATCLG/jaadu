/* Experiment 9: To write and execute an Embedded C program to interface push buttons, LEDs, relay, and buzzer with the 8051 microcontroller, such that Button 1 activates the relay and buzzer and produces LED chasing from left to right, while Button 2 deactivates the relay and buzzer and produces LED chasing from right to left
 * Source: 8051_codes.pdf
 */

#include <REG51.H>
 
sbit B1 = P0^0;
sbit B2 = P0^1;
sbit RELAY = P1^6;
sbit BUZZER = P3^7;
 
void delay(void)
{
    unsigned int i, j;
 
    for(i = 0; i < 100; i++)
        for(j = 0; j < 100; j++);
}
 
void main(void)
{
    unsigned char i;
    unsigned char mode = 0;
 
    B1 = 1;
    B2 = 1;
 
    RELAY = 0;
    BUZZER = 0;
    P2 = 0x00;
 
    while(1)
    {
        if(B1 == 0)
            mode = 1;
 
        if(B2 == 0)
            mode = 2;
 
        if(mode == 1)
        {
            RELAY = 1;
            BUZZER = 1;
 
            for(i = 0; i < 8; i++)
            {
                if(B2 == 0)
                {
                    mode = 2;
                    break;
                }
 
                P2 = (1 << i);
                delay();
            }
        }
        else if(mode == 2)
        {
            RELAY = 0;
            BUZZER = 0;
 
            for(i = 0; i < 8; i++)
            {
                if(B1 == 0)
                {
                    mode = 1;
                    break;
                }
 
                P2 = (0x80 >> i);
                delay();
            }
        }
    }
}
