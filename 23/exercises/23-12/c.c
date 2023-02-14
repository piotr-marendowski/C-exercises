/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 12c
Modification date (DD/MM/YYYY): 14.02.2022 */

#include <stdio.h>
#include <ctype.h>

char *strlwr(char *s)
{
    char *p = s;

    for (; *p; p++)
        *p = tolower(*p);

    return s;
}

int main(void)
{
    char str[] = "HeLlO WoRld!";

    printf("Original: %s\n", str);
    printf("Lowered:  %s\n", strlwr(str));

    return 0;
}