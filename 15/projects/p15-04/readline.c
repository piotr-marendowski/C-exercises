/*  Name: readline.c
    Purpose: Read_line function in seperate program.
    Author: NiceMan1337
    Date: 17.09.2022  */

#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}