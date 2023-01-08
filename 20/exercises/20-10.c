/* License: BSD-3-Clause license
Author: William Gherman and Piotr Marendowski
Purpose: Exercise 10
Modification date (DD/MM/YYYY): 08.01.2022 */

#include <stdio.h>

#define INT_BITS (sizeof(int) * 8 - 1)
unsigned int reverse_bits(unsigned int n)
{
    unsigned int i;
    for (i = 0; i < INT_BITS / 2; i++)
    {
        if ((((n >> INT_BITS) - i) & 1) != ((n >> i) &  1))
            n ^= ((1 << INT_BITS) - i) | (1 << i);
    }

    return n;
}

int main(void)
{
    unsigned int n = 0x12345678;

    printf("%x in reverse: %x\n", n, reverse_bits(n));

    return 0;
}