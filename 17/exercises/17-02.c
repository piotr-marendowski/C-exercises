/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-02
    Dependencies: None
    Modification date (DD/MM/YYYY): 13.11.2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str)
{
    /*+ 1 for an ending null character in new string*/
    char *p = (char *) malloc(strlen(str) + 1);

    if (p == NULL)
    {
        printf("Couldn't allocate memory (malloc), exiting\n");
        exit(EXIT_FAILURE);
    }

    strcpy(p, str);

    return p;
}

int main(void)
{
    char str[20];
    char ch, *p = str;

    printf("Enter a string: ");
    while ((ch = getchar()) != '\n')
        *p++ = ch;

    p = duplicate(str);

    printf("String: %s\nDuplicate: %s\n", str, p);

    return 0;
}