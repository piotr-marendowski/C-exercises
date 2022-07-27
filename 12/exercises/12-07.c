/*  Name: 12-07.c
    Purpose: Exercise 12-07
    Author: NiceMan1337
    Date: 27.07.2022  */

#include <stdio.h>
#include <stdbool.h>

bool search(const a[], int n, int key);

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int n = 8, key = 14;

    search(a, n, key);

    printf("The key: %d was", key);
    if (search)
        printf(" ");
    else
        printf("n't ");
    printf("found in array a.\n");

    return 0;
}

bool search(const a[], int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++)
    {
        if (*p == key)
            return true;
    }
    
    return false;
}