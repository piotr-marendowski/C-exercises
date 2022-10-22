/*  Name: 9-17.c
    Purpose: Exercise 9-17.
    Author: Piotr Marendowski
    Date: 16.06.2022  */

#include <stdio.h>

int fact(int n);

int main(void)
{
    int n = 3;

    printf("Factorial: %d\n", fact(n));

    return 0;
}

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        if (n <= 1) return 1;
        f *= i;
    }
    return f; 
}