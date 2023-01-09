/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 11
Modification date (DD/MM/YYYY): 09.01.2022 */

#include <stdio.h>

#define SHIFT_BIT 1
#define CTRL_BIT  2
#define ALT_BIT   4

int main(void)
{
    int key_code = 0;

    if ((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
        printf("No modifier keys pressed\n");

    return 0;
}

/*Solution:
Must add parentheses, because == has highier precendence
than &.*/