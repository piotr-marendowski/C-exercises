/*  Name: 9-14.c
    Purpose: Exercise 9-14.
    Author: NiceMan1337
    Date: 16.06.2022  */

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main(void)
{
    int a[] = {1, 1}, n = 2;

    printf("%d\n", has_zero(a, n));

    return 0;
}

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            return true;
        }
    }
    return false;
}

/*Description:
It will return always after checking the first value,
and won't look at the others. */