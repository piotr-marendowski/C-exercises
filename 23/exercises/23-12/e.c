/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 12e
Modification date (DD/MM/YYYY): 14.02.2022 */

#include <stdio.h>
#include <string.h>

char *strset(char *s, int ch)
{
    char *p = s;

    for (; *p; p++)
        *p = ch;

    return s;
}

int main(void)
{
    char str[] = "Hello world!";

    printf("Original: %s\n", str);
    printf("Only s:   %s\n", strset(str, 's'));

    return 0;
}