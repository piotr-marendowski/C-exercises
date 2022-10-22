/*  Name: 14-09.c
    Purpose: Exercise 14-09
    Author: Piotr Marendowski
    Date: 03.09.2022  */

#include <stdio.h>
#define CHECK(x,y,n) (((x) >=0 && (x) <=(n)-1 && (y) >=0 && (y) <=(n)-1)? 1 : 0)
#define MEDIAN(x,y,z) (((x) + (y) + (z)) / 3)
#define POLYNOMIAL(x) ( (3 * ((x)*(x)*(x)*(x)*(x))) + \
(2 * ((x)*(x)*(x)*(x))) - (5 * ((x)*(x)*(x))) + ((x)*(x)) + (7*(x)) - 6)

int main(void)
{
    printf("(a): %d\n", CHECK(1, 2, 4));
    printf("(b): %d\n", MEDIAN(1, 2, 3));
    printf("(c): %d\n", POLYNOMIAL(2));
    return 0;
}