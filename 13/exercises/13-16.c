/*  Name: 13-16.c
    Purpose: Exercise 13-16
    Author: NiceMan1337
    Date: 19.08.2022 */

#include <stdio.h>

int count_spaces(const char s[])
{
    int count = 0;

    while (*s++)
        if (*s == ' ')
            count++;
    return count;
}

int main(void)
{
    char s[] = "he llo wor ld !";

    printf("Spaces: %d\n", count_spaces(s));
    
    return 0;
}