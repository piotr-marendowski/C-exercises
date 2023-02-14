/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 12a
Modification date (DD/MM/YYYY): 14.02.2022 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strdup(const char *s)
{
    char *p;

    if ((p = malloc(strlen(s) + 1)) != NULL)
        return strcpy(p, s);
    else
        return NULL;
}

int main(void)
{
    char str[] = "Hello world!";

    printf("%s\n", strdup(str));

    return 0;
}