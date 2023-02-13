/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 9
Modification date (DD/MM/YYYY): 13.02.2022 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int ch = 'b';

    /* will display 'there is' if there is ch in str */
    if (strchr("abc", ch))
        printf("There is\n");

    return 0;
}