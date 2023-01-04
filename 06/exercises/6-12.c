/*  Name: 6-12.c
    Purpose: Exercise 6-12.
    Author: Piotr Marendowski
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int d, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (d = 2; d * d <= n; d++)
        if (n % d == 0)
            break; 

    if (d < n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);
    
    return 0;
}