/*  Name: 13-11.c
    Purpose: Exercise 13-11
    Author: Piotr Marendowski
    Date: 18.08.2022  */

#include <stdio.h>

int strcmp(char *s, char *t)
{
    char *p = s;
    char *q = t;
    
    for (; *p == *q; p++)
        if (*p == '\0')
            return 0;
    return *p - *q;
}

int main(void)
{
    char s[] = "123abc";
    char t[] = "abc123";

    printf("%d\n", strcmp(s, t));

    return 0;
}