/*  Name: 9-06.c
    Purpose: Exercise 9-6.
    Author: Piotr Marendowski
    Date: 14.06.2022  */

#include <stdio.h>

int digit(int n, int k);

int main(void)
{ 
    int n, k;
    printf("Enter a number and digit: ");
    scanf("%d %d", &n, &k);
    printf("Digit: %d", digit(n, k));
    return 0;
}

int digit(int n, int k)
{
    while (k-- > 1)
    {
        if ((n /= 10) <= 10)
            return 0;
    }
    return n % 10;
}