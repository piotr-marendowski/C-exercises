/*  Name: 12-16.c
    Purpose: Exercise 12-16
    Author: Piotr Marendowski
    Date: 29.07.2022  */

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
    int temperatures[7][24] = {{1, 2, 3, 4, 5}};

    int i;
    for (i = 0; i < 7; i++)
        printf("Day %d: %d\n", i + 1, find_largest(temperatures[i], 24));

    return 0;
}