/*  Name: 12-08.c
    Purpose: Exercise 12-08
    Author: NiceMan1337
    Date: 27.07.2022  */

#include <stdio.h>

void store_zeros(int a[], int n)
{
    int *p;

    for (p = a; p < a + n; p++)
        *p = 0;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int i, n = 5;

    store_zeros(a, n);

    printf("Array:");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}