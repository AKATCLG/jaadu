/* Experiment 7: To interface two multiplexed 7-segment(common cathode config) displays with the 8051microcontroller and write an Embedded C program to display A to F.
 * Source: 8051_codes.pdf
 */

#include <reg51.h>
 
sbit D1 = P3^0;
sbit D2 = P3^1;
 
unsigned char seg[] = {0x77,0x7C,0x39,0x5E,0x79,0x71};
 
void delay()
{
    int i;
    for(i=0;i<500;i++);
}
 
void main()
{
    unsigned char i,j;
 
    while(1)
    {
        for(i=0;i<6;i++)
        {
            for(j=0;j<100;j++)
            {
                D1=0; D2=0; P2=0;
                P2=seg[i]; D1=1; delay(); D1=0;
                P2=0;
                P2=seg[i]; D2=1; delay(); D2=0;
            }
        }
    }
}
