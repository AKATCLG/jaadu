/* Experiment 6: To interface two multiplexed 7-segment (common cathode config) displays with the 8051microcontroller and write an Embedded C program to display a counting sequence O to 9.
 * Source: 8051_codes.pdf
 */

#include <REG51.H>
 
sbit D1 = P3^2;
sbit D2 = P3^3;
sbit D3 = P3^4;
sbit D4 = P3^5;
 
unsigned char code seg[] = {
    0x3F, 0x06, 0x5B, 0x4F, 0x66,
    0x6D, 0x7D, 0x07, 0x7F, 0x6F
};
 
void delay()
{
    unsigned int i;
    for(i = 0; i < 500; i++);
}
 
void display(unsigned char n)
{
    unsigned int i;
 
    for(i = 0; i < 100; i++)
    {
        P3 = 0x00;
        P2 = 0x00;
 
        P2 = seg[0];
        D1 = 1;
        delay();
        D1 = 0;
 
        P2 = 0x00;
 
        P2 = seg[n];
        D2 = 1;
        delay();
        D2 = 0;
    }
}
 
void main()
{
    unsigned char count;
 
    P3 = 0x00;
    P2 = 0x00;
 
    D3 = 0;
    D4 = 0;
 
    while(1)
    {
        for(count = 0; count <= 9; count++)
        {
            display(count);
        }
    }
}
