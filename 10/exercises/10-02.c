/*  Name: 10-02.c
    Purpose: Exercise 10-2.
    Author: NiceMan1337
    Date: 27.06.2022  */

#include <stdio.h>

int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{ 
    int c, d;
}

/*Solution:
(a) - b (in f) c, d
(b) - a (in g), b, c (in g)
(c) - a (in block), b, c (in g), d
(d) - b, c (in main), d */