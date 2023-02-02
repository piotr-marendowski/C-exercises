/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 8
Modification date (DD/MM/YYYY): 08.01.2023 */

#include <stdio.h>

/* for simplicity 2 bytes:
0000 0000 0000 0001 (1)
(shift by 0) = same value
(a): 1111 1111 1111 1000 (shift by n)
0000 0000 0000 0111 (complemented)
then ...0001 & ...0001 = 1

(b): "It returns a bit-field within i of length n
starting at position m. Positions are assumed to be
numbered starting from the rightmost bit, which is position 0." K.N. King
*/

unsigned int f(unsigned int i, int m, int n)
{
    return (i >> (m + 1 - n)) & ~(~0 << n);
}

int main(void)
{
    unsigned int i = 1, m = 2, n = 3;

    printf("F: %hx\n", f(i, m, n));

    return 0;
}