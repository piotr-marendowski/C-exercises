/*  Name: 12-09.c
    Purpose: Exercise 12-09
    Author: Piotr Marendowski
    Date: 27.07.2022  */

#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void)
{
    double a[] = {1, 2, 3};
    double b[] = {1, 2, 3};
    int n = 3;

    printf("Inner product: %.2f\n", inner_product(a, b, n));

    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    double *p1, *p2 = b, result = 0;

    for (p1 = a; p1 < a + n; p1++)
    {
        /*(pointer times pointer):*/
        result = result + (*p1 * *p2);
        p2++;
    }

    return result;
}