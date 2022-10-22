/*  Name: 3-2.c
    Purpose: Exercise 3-2.
    Author: Piotr Marendowski
    Date: 02.03.2022  */

#include <stdio.h>

int main(void)
{
    float x = 234.32;

    printf("%8.1e\n", x);
    printf("%-10.6e\n", x); 
    printf("%8.3f\n", x);
    printf("%-6.0f\n", x);

    return 0;
}