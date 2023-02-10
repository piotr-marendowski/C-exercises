/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 4
Modification date (DD/MM/YYYY): 10.02.2022 */

#include <stdio.h>
#include <stdbool.h> /* C99! */
#include <ctype.h>

bool is_identifier(char *str)
{
    /* if not A-Z AND not _ at the beginning => false*/
    if (!isalpha(*str) && (*str != '_'))
        return false;
    /* next characters */
    str++;
    while (*str)
    {
        /* if not A-Z or 0-9 AND not _ => false*/
        if (!isalnum(*str) && (*str != '_'))
            return false;
        str++;
    }
    /* otherwise */
    return true;
}

int main(void)
{
    bool n1, n2;
    char *str1 = "_Bool", *str2 = "2night";

    n1 = is_identifier(str1);
    n2 = is_identifier(str2);

    printf("Is identifier?\nFirst: %s\nSecond: %s\n",
     n1 ? "Yes" : "No", n2 ? "Yes" : "No");

    return 0;
}