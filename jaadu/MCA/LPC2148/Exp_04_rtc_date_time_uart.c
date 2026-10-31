/* Experiment 4: To configure and program the on-chip Real-Time Clock (RTC) of the LPC2148 microcontroller using Embedded C to display the current date and time.
 * Source: LPC2148.pdf
 */

#include <lpc214x.h>
#include <stdio.h>
 
void delay()
{
    unsigned int i;
    for(i = 0; i < 500000; i++);
}
 
void UART0_Init()
{
    PINSEL0 |= 0x00000005;
 
    U0LCR = 0x83;
    U0DLL = 97;
    U0DLM = 0;
    U0FDR = 0x10;
    U0LCR = 0x03;
}
 
void UART0_Send(char ch)
{
    while(!(U0LSR & 0x20));
    U0THR = ch;
}
 
void UART0_String(char *str)
{
    while(*str)
    {
        UART0_Send(*str++);
    }
}
 
int main()
{
    char buffer[80];
 
    UART0_Init();
 
    CCR = 0x02;
 
    SEC = 0;
    MIN = 30;
    HOUR = 12;
 
    DOM = 30;
    MONTH = 10;
    YEAR = 2026;
 
    CCR = 0x11;
 
    while(1)
    {
        sprintf(buffer,
        "Date: %02d/%02d/%04d  Time: %02d:%02d:%02d\r\n",
        DOM, MONTH, YEAR, HOUR, MIN, SEC);
 
        UART0_String(buffer);
        delay();
    }
}
