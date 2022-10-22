/*  Name: p9-07.c
    Purpose: Modified power function from section 9.6.
    Author: Piotr Marendowski
    Date: 20.06.2022  */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    /*declare variables*/
    int x, n;

    /*ask user for a number and its power*/
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);

    /*calculate and print function's return value*/
    printf("Power: %d\n", power(x, n));

    return 0;
}

int power(int x, int n)
{
    int i;

    if (n == 0)
        return 1;
    if (n % 2 == 0) {
        i = power(x, n / 2);
        return i * i;
    } else 
        return x * power(x, n - 1);
}