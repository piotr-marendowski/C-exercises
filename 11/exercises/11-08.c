/*  Name: 11-08.c
    Purpose: Exercise 11-08.
    Author: Piotr Marendowski
    Date: 20.07.2022  */

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int largest;
    
    find_largest(a, n);

    printf("Largest element in the array: %\n", largest);

    return 0;
}

int *find_largest(int a[], int n)
{
    int i, *largest = &a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > *largest)
            largest = &a[i];
    }
    return largest;
}