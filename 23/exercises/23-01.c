/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 1
Modification date (DD/MM/YYYY): 10.02.2022
Note: To compile, add -lm option. */

#include <stdio.h>
#include <math.h>

/* Round to the n place after decimal point */
double round_nearest(double x, int n)
{
    /* calculate power */
    int y = pow(10, n);
    /* ceil - x (3.14159) * power (1000) - 0.5 = 3142.0 => divide by power (1000) = 3.142
    floor - x (3.14159) * power (1000) + 0.5 = -3142.0 divide by power (1000) = -3.142
    without 0.5 it would round to 3.141 */
    return x < 0.0 ? ceil(x * y - 0.5) / y : floor(x * y + 0.5) / y;
}

int main(void)
{
    double x_pos = 3.14159, x_neg = -3.14159;

    printf("%f %f\n", round_nearest(x_neg, 3), round_nearest(x_pos, 3));

    return 0;
}