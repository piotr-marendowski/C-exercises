/*  Name: 13-05b.c
    Purpose: Exercise 13-05b
    Author: NiceMan1337
    Date: 10.08.2022  */

#include <stdio.h>
#include <ctype.h>

char* capitalize(char a[], int n)
{
    char *p = a;

    for (; p < a + n; p++)
        *p = toupper(*p);

    return a;
}

int main(void)
{
    int n = 10;
    char a[] = "abcde123";

    capitalize(a, n);

    puts(a);

    return 0;
}