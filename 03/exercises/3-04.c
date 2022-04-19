/*  Name: 3-4.c
    Purpose: Exercise 3-4.
    Author: NiceMan1337
    Date: 02.03.2022  */

#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    printf("Enter numbers: ");
    scanf("%d%f%d", &i, &x, &j);

    printf("Numbers are: %d, %.2f, %d\n", i, x, j);
    
    return 0;
}