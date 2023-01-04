/*  Name: 16-04d.c
    Purpose: Exercise 16-04d
    Author: Piotr Marendowski
    Date: 21.09.2022  */

#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} complex;

complex add_complex();

int main(void)
{
    complex a;
    complex b;
    complex c;

    a.real = 1.0;
    a.imaginary = 1.0;

    b.real = 1.0;
    b.imaginary = 1.0;

    c = add_complex(a, b);

    printf("Values of:\nReal: %.2f\nImaginary: %.2f\n", c.real, c.imaginary);

    return 0;
}

complex add_complex(complex a, complex b)
{
    complex c1;

    c1.real = a.real + b.real;
    c1.imaginary = b.imaginary + b.imaginary;

    return c1;
}