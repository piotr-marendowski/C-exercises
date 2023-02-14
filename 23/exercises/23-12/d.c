/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Exercise 12d
Modification date (DD/MM/YYYY): 14.02.2022 */

#include <stdio.h>
#include <string.h>

char *strrev(char *s)
{
    char *t = s, *p;
    p = s + strlen(s) - 1;
    while (t < p)
    {
        *t ^= *p;
        *p ^= *t;
        *t ^= *p;
        t++;
        p--;
    }
    return s;
}

int main(void)
{
    char str[] = "HeLlO WoRld!";

    printf("Original: %s\n", str);
    printf("Reversed: %s\n", strrev(str));

    return 0;
}