/*  Name: 3-5.c
    Purpose: Exercise 3-5.
    Author: Piotr Marendowski
    Date: 02.03.2022  */

#include <stdio.h>

int main(void)
{
    int i;
    float x, y;

    printf("Enter numbers: ");
    scanf("%f%d%f", &x, &i, &y);
    
    printf("Numbers are: %.2f, %d, %.2f\n", x, i, y);
    
    return 0;
}