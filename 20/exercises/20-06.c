/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 6
Modification date (DD/MM/YYYY): 08.01.2022 */

#include <stdio.h>

/*
   0x1234 = 00010010 00110100
        j = 00010010 00000000
        i = 00000000 00110100
    then XOR them
*/
unsigned short swap_bytes(unsigned short i)
{
    unsigned short j = i;

    j <<= 8;
    i >>= 8;

    return i ^ j;
}

unsigned short swap_bytes2(unsigned short i)
{
    return i >> 8 ^ 0x3400;
}

int main(void)
{
    unsigned short i;

    printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &i);

    printf("Number with bytes swapped:\n(swap1) %hx\n(swap2) %hx\n", swap_bytes(i), swap_bytes2(i));

    return 0;
}