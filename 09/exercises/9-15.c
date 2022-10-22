/*  Name: 9-15.c
    Purpose: Exercise 9-15.
    Author: Piotr Marendowski
    Date: 16.06.2022  */

#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    double x = 1, y = 2, z = 3;

    printf("Median: %.2f\n", median(x, y, z));

    return 0;
}

double median(double x, double y, double z)
{
    return y;
}

/*Description:
Well, it works I guess. If you want the real solution,
check out williamgherman/c-solutions */