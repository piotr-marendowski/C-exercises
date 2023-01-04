/*  Name: 16-08b.c
    Purpose: Exercise 16-08 (b)
    Author: Piotr Marendowski
    Date: 25.09.2022  */

#include <stdio.h>

struct color
{
    int red;
    int green;
    int blue;
};

int main(void)
{
    const struct color MAGENTA = {.red = 255, .blue = 255};

    return 0;
}