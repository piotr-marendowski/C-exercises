/*  Name: 14-01.c
    Purpose: Exercise 14-01
    Author: Piotr Marendowski
    Date: 01.09.2022  */

#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))
#define REMINDER(n) ((n) % 4)
#define LESS(x, y) (((x) + (y)) < 100 ? 1 : 0)

int main(void)
{
    printf("(a): %d\n", CUBE(2));
    printf("(b): %d\n", REMINDER(4));
    printf("(c): %d\n", LESS(20, 50));
    printf("Only numeric arguments work in these macros.\n");

    return 0;
}