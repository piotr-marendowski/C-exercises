/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 1
Modification date (DD/MM/YYYY): 04.01.2022 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    
    i = 8; j = 9;
    printf("(a): %d\n", i >> 1 + j >> 1);
    /*((i >> (1 + j)) >> 1)
    0001 (1) + 1001 (9) -> 1000 (8) >> 10 -> 0000 (0) >> 1 -> 0000 (0)*/

    i = 1;
    printf("(b): %d\n", i & ~i);
    /*(i & (~i))
    ~0001 (1) -> 0001 (1) & 1110 (14) -> 0000 (0)*/

    i = 2; j = 1; k = 0;
    printf("(c): %d\n", ~i & j ^ k);
    /*(((~i) & j) ^ k)
    ~0010 (2) -> 1101 (13) -> 0000 (0) ^ 0 -> 0000 (0)*/

    i = 7; j = 8; k = 9;
    printf("(d): %d\n", i ^ j & k);
    /*(i ^ (j & k))
    1000 (8) & 1001 (9) -> 1000 (8) ^ 0111 (7) -> 1111 (15)*/

    return 0;
}