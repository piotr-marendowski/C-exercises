/*  Name: 9-18.c
    Purpose: Exercise 9-18.
    Author: NiceMan1337
    Date: 16.06.2022  */

#include <stdio.h>

int gcd(int m, int n);

int main(void)
{ 
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    printf("Greatest common divisor: %d\n", gcd(m, n));
    return 0;
}

int gcd(int m, int n)
{
    if (n == 0) return m;
    else gcd(n, m % n);

    return m;
}