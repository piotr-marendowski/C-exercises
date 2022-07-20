/*  Name: 11-06.c
    Purpose: Exercise 11-06.
    Author: NiceMan1337
    Date: 20.07.2022  */

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6, largest = 0, second_largest = 0;

    find_two_largest(a, n, &largest, &second_largest);
    printf("Largest: %d\nSecond largest: %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = a[0];
    *second_largest = a[1];

    for (i = 1; i < n; i++) {
        if (a[i] >= *largest) {
            *second_largest = *largest;
            *largest = a[i];
        }
        if (a[i] > *second_largest && a[i] != *largest)
            *second_largest = a[i];
    }
}