/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 7
Modification date (DD/MM/YYYY): 08.01.2022 */

#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n)
{
    int j = i;

    i <<= n;
    j >>= (sizeof(int) * 8) - n;
    /* as in previous, but sizeof = 4, 4*8 = 32 - n = 28 in left = 23456781
    if you would write only n, it would just shift by 4 and get different results */

    return i ^ j;
}

unsigned int rotate_right(unsigned int i, int n)
{
    int j = i;

    i >>= n;
    j <<= (sizeof(int) * 8) - n;

    return i ^ j;
}

int main(void)
{
    unsigned int i;
    int n;

    printf("Enter a hexadecimal number: ");
    scanf("%x", &i);                            /*%hx - only for unsigned short*/
    printf("Enter number of bits to shift: ");
    scanf("%d", &n);

    printf("Bits shifted to left: %x\nBits shifted to right: %x\n",
     rotate_left(i, n), rotate_right(i, n));

    return 0;
}