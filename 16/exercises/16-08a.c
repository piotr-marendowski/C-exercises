/*  Name: 16-08a.c
    Purpose: Exercise 16-08 (a)
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
    const struct color MAGENTA = {255, 0, 255};

    return 0;
}