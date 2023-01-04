/*  Name: 14-13.c
    Purpose: Exercise 14-13
    Author: Piotr Marendowski
    Date: 11.09.2022  */

#include <stdio.h>

#define N 100

void f(void);

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}

void f(void)
{
#if defined(N)
    printf("N i %d\n", N);
#else
    printf("N is undefined\n");
#endif
}