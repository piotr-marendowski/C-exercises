/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 13
Modification date (DD/MM/YYYY): 09.01.2022 */

#include <stdio.h>

unsigned int delete_rightmost_bit(unsigned int n)
{
    n &= n - 1;

    if (n > 0)
        delete_rightmost_bit(n);
    else
        return n;
}

int main(void)
{
    unsigned int n = 0x12345678;

    printf("n: 0x%x, after statement: 0x%x\n", n, delete_rightmost_bit(n));

    return 0;
}

/*
n =   0001 0010 0011 0100 0101 0110 0111 1000 = 0x12345678 = 305419896
n-1 = 0001 0010 0011 0100 0101 0110 0111 0111 = 0x12345677 = 305419895
& =   0001 0010 0011 0100 0101 0110 0111 0000 = 0x12345670 = 305419888
every call it removes rightmost 1 bit
*/