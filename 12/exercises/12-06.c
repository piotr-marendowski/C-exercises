/*  Name: 12-06.c
    Purpose: Exercise 12-06
    Author: NiceMan1337
    Date: 26.07.2022  */

#include <stdio.h>

int sum_array(const int a[], int n)
{
    int *p, sum;

    sum = 0;
    for (p = &a[0]; p < &a[n]; p++)
        sum += *p;
    return sum;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Sum: %d\n", sum_array(a, n));

    return 0;
}