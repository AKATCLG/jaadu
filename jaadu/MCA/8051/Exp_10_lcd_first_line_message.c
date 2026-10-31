/* Experiment 10: To interface a 16x2 LCD with the 8051 microcontroller and write an Embedded C program to display a message on the first line of the LCD.
 * Source: 8051_codes.pdf
 */

#include <REG51.H>
 
sbit RS = P2^2;
sbit RW = P2^1;
sbit EN = P2^0;
 
void delay()
{
    unsigned int i, j;
    for(i = 0; i < 100; i++)
        for(j = 0; j < 100; j++);
}
 
void cmd(unsigned char a)
{
    P1 = a;
    RS = 0;
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
}
 
void data_lcd(unsigned char a)
{
    P1 = a;
    RS = 1;
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
}
 
void main()
{
    unsigned char msg[] = "Hello World";
    unsigned char i;
 
    delay();
    cmd(0x38);
    cmd(0x0C);
    cmd(0x01);
    cmd(0x06);
    cmd(0x80);
 
    for(i = 0; msg[i] != '\0'; i++)
    {
        data_lcd(msg[i]);
    }
 
    while(1);
}
