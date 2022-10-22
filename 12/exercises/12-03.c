/*  Name: 12-03.c
    Purpose: Exercise 12-03
    Author: Piotr Marendowski
    Date: 26.07.2022  */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp, i;

    while (p < q) {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    /*print the contents of array*/ 
    printf("Contents of the array:");
    for (i = 0; i < N; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    
    return 0;
}