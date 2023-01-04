/*  Name: 13-05a.c
    Purpose: Exercise 13-05a
    Author: Piotr Marendowski
    Date: 10.08.2022  */

#include <stdio.h>
#include <ctype.h>

char* capitalize(char a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = toupper(a[i]);

    return a[n];
}

int main(void)
{
    int n = 10;
    char a[] = "abcde123";

    capitalize(a, n);

    puts(a);

    return 0;
}