/*  Name: 9-12.c
    Purpose: Exercise 9-12.
    Author: Piotr Marendowski
    Date: 15.06.2022  */

#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void)
{ 
    double a[] = {1, 2, 3, 4, 5};
    double b[] = {1, 1, 1, 1, 1};
    int n = 5;

    printf("Sum: %.2f\n", inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n)
{
    int i;
    double sum = 0.0;
    for (i = n; i >= 0; i--)
    {
        sum += (a[i] * b[i]);
    }
    return sum;
}