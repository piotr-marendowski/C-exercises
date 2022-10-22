/*  Name: 16-02c.c
    Purpose: Exercise 16-02c
    Author: Piotr Marendowski
    Date: 19.09.2022  */

#include <stdio.h>

int main(void)
{
    struct {
        double real;
        double imaginary;
    } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

    c1 = c2;

    return 0;
}