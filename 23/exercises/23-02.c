/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Exercise 2
Modification date (DD/MM/YYYY): 10.02.2022
Note: To compile, add -lm option. */

#include <stdio.h>
#include <math.h>

double evaluate_polynomial(double a[], int n, double x)
{
    int i = n;
    double sum = fma(a[i], x, a[i--]);
    while (i >= 0)
    {
        sum += fma(sum, x, a[i--]);
    }
    return sum;
}

int main(void)
{

    return 0;
}