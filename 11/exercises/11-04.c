/*  Name: 11-04.c
    Purpose: Exercise 11-04.
    Author: NiceMan1337
    Date: 20.07.2022  */

#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int a, b;

    printf("Enter values of a and b (separated by space): ");
    scanf("%d %d", &a, &b);

    printf("a = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("Swapped:\na = %d\nb = %d\n", a, b);

    return 0;
}

void swap(int *p, int *q)
{
    int i = *p;

    *p = *q;
    *q = i;
}