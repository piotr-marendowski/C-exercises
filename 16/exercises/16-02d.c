/*  Name: 16-02d.c
    Purpose: Exercise 16-02d
    Author: Piotr Marendowski
    Date: 19.09.2022  */

#include <stdio.h>

int main(void)
{
    struct {
        double real;
        double imaginary;
    } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return 0;
}