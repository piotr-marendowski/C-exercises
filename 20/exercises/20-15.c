/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 15
Modification date (DD/MM/YYYY): 09.01.2023 */

#include <stdio.h>

int main(void)
{
    struct {
        unsigned int flag: 1;
    } s;

    s.flag = 1;
    printf("%d\n", s.flag);

    return 0;
}

/* Solution: We need to operate on either unsigned or signed ints,
and it can be interpreted by compiler as a sign bit (1 = negative). */