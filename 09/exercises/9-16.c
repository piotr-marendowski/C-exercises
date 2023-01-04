/*  Name: 9-16.c
    Purpose: Exercise 9-16.
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
    return n <= 1 ? 1 : n * fact(n - 1);
}