/*  Name: 14-16.c
    Purpose: Exercise 14-16
    Author: Piotr Marendowski
    Date: 11.09.2022  */

#include <stdio.h>
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void)
{
    IDENT(foo)
    return 0;
}

/*Solution:
#pragma ident "foo" */