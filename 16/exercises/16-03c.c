/*  Name: 16-03c.c
    Purpose: Exercise 16-03c
    Author: Piotr Marendowski
    Date: 21.09.2022  */

#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};

struct complex make_complex();

int main(void)
{
    struct complex c;

    c = make_complex();

    printf("Values of:\nReal: %.2f\nImaginary: %.2f\n", c.real, c.imaginary);

    return 0;
}

struct complex make_complex()
{
    struct complex c1;

    c1.real = 1.0;
    c1.imaginary = 2.0;

    return c1;
}

/*Description:
So after bunch of error I looked up online to see how to do it,
turned out that this struct needs to be outside main's scope. */