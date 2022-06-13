/*  Name: 9-01.c
    Purpose: Exercise 9-1.
    Author: NiceMan1337
    Date: 13.06.2022  */

#include <stdio.h>

double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}

int main(void)
{ 
    triangle_area(10.0, 20.0);
    return 0;
}