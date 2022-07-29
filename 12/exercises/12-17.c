/*  Name: 12-17.c
    Purpose: Exercise 12-17
    Author: NiceMan1337
    Date: 29.07.2022  */

#include <stdio.h>

#define LEN 10

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    const int *p;
    int sum = 0;

    for (p = *a; p < *a + n * LEN; p++)
        sum += *p;
    
    return sum;
}

int main(void)
{
    int a[2][LEN] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                     {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    int n = 2 * LEN;

    sum_two_dimensional_array(a, n);

    return 0;
}