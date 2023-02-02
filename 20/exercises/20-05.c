/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 5
Modification date (DD/MM/YYYY): 04.01.2023 */

#include <stdio.h>
#define GET_RED(x) ((x) & 0xff)
#define GET_GREEN(x) ((x) >> 8 & 0xff)
#define GET_BLUE(x) ((x) >> 16 & 0xff)

int main(void)
{
    /* Shifts every octet:
    00111100 00001111 11111111*/

    return 0;
}