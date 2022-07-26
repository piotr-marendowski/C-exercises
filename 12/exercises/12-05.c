/*  Name: 12-05.c
    Purpose: Exercise 12-05
    Author: NiceMan1337
    Date: 26.07.2022  */

#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int *p;

    p = a;

    printf("1 - true, 0 - false:\n");
    printf("(a) p == a[0]: %d\n", p == a[0] ? 1 : 0);
    printf("(b) p == &a[0]: %d\n", p == &a[0] ? 1 : 0);
    printf("(c) *p == a[0]: %d\n", *p == a[0] ? 1 : 0);
    printf("(d) p[0] == a[0]: %d\n", p[0] == a[0] ? 1 : 0);

    return 0;
}