/*  Name: 9-10.c
    Purpose: Exercise 9-10.
    Author: NiceMan1337
    Date: 15.06.2022  */

#include <stdio.h>

int largest(int a[], int n);
int average(int a[], int n);
int positive(int a[], int n);

int main(void)
{ 
    int a[] = {1, 2, 3, 4, 5}, n = 5;

    printf("(a) The largest element in a: %d\n", largest(a, n));
    printf("(b) The average of all elements in a: %d\n", average(a, n));
    printf("(c) The number of positive elements in a: %d\n", positive(a, n));

    return 0;
}

int largest(int a[], int n)
{
    int i, largest = a[0];
    for (i = 0; i < n; i++)
    {
        if (largest < a[i])
            largest = a[i];
    }
    return largest;
}

int average(int a[], int n)
{
    int i, average = 0;
    for (i = 0; i < n; i++)
    {
        average += a[i];
    }
    average /= n;
    return average;
}

int positive(int a[], int n)
{
    int i, num = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            num++;
        }
    }
    return num;
}