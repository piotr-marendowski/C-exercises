/*  Name: 13-15.c
    Purpose: Exercise 13-15
    Author: Piotr Marendowski
    Date: 19.08.2022  */

#include <stdio.h>

int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}

int main(void)
{
    printf("(a) %d\n", f("abcd", "babc"));
    printf("(b) %d\n", f("abcd", "bcd"));
    printf("(c) Position of the first character in s that is not in t.\n");

    return 0;
}