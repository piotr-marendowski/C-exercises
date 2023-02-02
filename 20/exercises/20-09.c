/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 9
Modification date (DD/MM/YYYY): 08.01.2023 */

#include <stdio.h>

/*(a) While ch is not 00000000:
check if ch & 00000001 is true
shift ch by next position */
int count_ones(unsigned char ch)
{
    int  n = 0;
    while (ch > 0) {
        if (ch & 1)
            n++;
        ch >>= 1;
    }

    return n;
}

int main(void)
{
    unsigned char ch = 'A'; /* 0100 0001 */

    printf("Number of ones in 'A': %d\n", count_ones(ch));

    return 0;
}

/* recursive (b) by William Gherman:
int count_ones(unsigned char ch)
{
    if (ch == 0)
        return 0;
    return count_ones(ch & ch - 1) + 1;
}
*/