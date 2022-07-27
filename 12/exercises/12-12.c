/*  Name: 12-12.c
    Purpose: Exercise 12-12
    Author: NiceMan1337
    Date: 27.07.2022  */

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p = a;
    *largest = *second_largest = *a;
    
    for (; p < a + n; p++)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest)
            *second_largest = *p;
    }
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5, largest, second_largest;

    find_two_largest(a, n, &largest, &second_largest);

    printf("Largest: %d\nSecond largest: %d\n", largest, second_largest);

    return 0;
}