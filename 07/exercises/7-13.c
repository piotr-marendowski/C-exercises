/*  Name: 7-13.c
    Purpose: Exercise 7-13.
    Author: NiceMan1337
    Date: 24.04.2022  */

#include <stdio.h>

int main(void)
{ 
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("(a) c * i = %d (int)\n", c * i);
    printf("(b) s + m = %ld (long)\n", s + m);
    printf("(c) f / c = %.2f (float)\n", f / c);
    printf("(d) d / s = %.2f (double)\n", d / s);
    printf("(e) f - d = %.2f (double)\n", f - d);
    printf("(f) (int) f = %d (int)\n", (int) f);

    return 0;
}