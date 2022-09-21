/*  Name: 16-04c.c
    Purpose: Exercise 16-04c
    Author: NiceMan1337
    Date: 21.09.2022  */

#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} complex;

complex make_complex();

int main(void)
{
    complex c;

    c = make_complex();

    printf("Values of:\nReal: %.2f\nImaginary: %.2f\n", c.real, c.imaginary);

    return 0;
}

complex make_complex()
{
    complex c1;

    c1.real = 1.0;
    c1.imaginary = 2.0;

    return c1;
}

/*Description:
So after bunch of error I looked up online to see how to do it,
turned out that this struct needs to be outside main's scope. */