/*  Name: 9-18.c
    Purpose: Exercise 9-18.
    Author: NiceMan1337
    Date: 16.06.2022  */

#include <stdio.h>

void pb(int n);

int main(void)
{ 
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary representation: ");
    pb(n);
    return 0;
}

void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}