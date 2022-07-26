/*  Name: 12-01.c
    Purpose: Exercise 12-01
    Author: NiceMan1337
    Date: 26.07.2022  */

#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("(a) Value of *(p+3): %d\n", *(p+3));
    printf("(b) Value of *(q-3): %d\n", *(q-3));
    printf("(c) Value of q - p: %d\n", q - p);
    printf("(d) Condition q < p is true\n");
    printf("(e) Condition *p < *q is false\n");

    return 0;
}