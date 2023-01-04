/*  Name: 14-12.c
    Purpose: Exercise 14-12
    Author: Piotr Marendowski
    Date: 11.09.2022  */

#include <stdio.h>
#define M 10

int main(void)
{
    #if M
    printf("(a)");
    #endif

    #ifdef M
    printf("(b)");
    #endif

    #ifndef M
    printf("(c)");
    #endif
    
    #if defined(M)
    printf("(d)");
    #endif

    #if !defined(M)
    printf("(e)");
    #endif

    return 0;
}