/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 14
Modification date (DD/MM/YYYY): 09.01.2022 */

#include <stdio.h>

int main(void)
{
    /* e.g: 1 | 0001 0010 | 0011 0100 0101 0110 0111 100 */
    struct float_value {
        unsigned int fraction: 23;
        unsigned int exponent: 8;
        unsigned int sign: 1;
    };

    return 0;
}