/*  Name: 14-05.c
    Purpose: Exercise 14-05
    Author: NiceMan1337
    Date: 01.09.2022  */

#include <stdio.h>
#include <string.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{
    char s[] = "Hello";
    int i;

    printf("(a): ");
    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));

    printf("\n(b): ");
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));

    printf("\n");

    return 0;
}