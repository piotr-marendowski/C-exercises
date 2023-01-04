/*  Name: p8-04.c
    Purpose: Modified version of reverse.c program.
    Author: Piotr Marendowski
    Date: 17.05.2022  */

#include <stdio.h>

#define N 10
#define length (int) (sizeof(a) / sizeof(a[0]))

int main(void)
{ 
    int a[N], i;

    printf("Enter %d numbers: ", length);
    for (i = 0; i < length; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (i = length - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");
    
    return 0;
}