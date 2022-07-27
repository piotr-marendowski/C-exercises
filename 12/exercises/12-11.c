/*  Name: 12-11.c
    Purpose: Exercise 12-11
    Author: NiceMan1337
    Date: 27.07.2022  */

#include <stdio.h>

int find_largest(int a[], int n)
{
    int *p = a;
    int largest = *p++;

    for (; p < a + n; p++)
    {
        if (*p > largest) {
            largest = *p;
        }
    }

    return largest;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Largest value in an array is: %d", find_largest(a, n));

    return 0;
}