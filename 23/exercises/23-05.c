/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 5
Modification date (DD/MM/YYYY): 10.02.2022 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> /* for strtol */

long int str_to_hex(char *str)
{
    /* long strtol (const char* str, char** str_end, int base)
    convert string to number (long int), provide string name,
    un-safe string end (or lack thereof), and base (hex = 16) */
    int num = strtol(str, NULL, 16);

    while (*str)
    {
        if (!isxdigit(*str))
            return -1;

        str++;
    }

    /* in opposite to William Gherman's solution, it works */
    return num;
}

int main(void)
{
    char *str_pos = "fd9", *str_neg = "z .-\n";

    printf("First: %ld\nSecond: %ld\n",
     str_to_hex(str_pos), str_to_hex(str_neg));

    return 0;
}