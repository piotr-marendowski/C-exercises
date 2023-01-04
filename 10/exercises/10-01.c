/*  Name: 10-01.c
    Purpose: Exercise 10-1.
    Author: Piotr Marendowski
    Date: 27.06.2022  */

#include <stdio.h>

int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;
    {
        int e;
    }
}

int main(void)
{ 
    int f;
}

/*Solution:
(a) - a, b, c
(b) - a, d
(c) - a, d, e
(d) - a, f */