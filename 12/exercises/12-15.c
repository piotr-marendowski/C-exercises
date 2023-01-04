/*  Name: 12-15.c
    Purpose: Exercise 12-15
    Author: Piotr Marendowski
    Date: 29.07.2022  */

#include <stdio.h>

int main(void)
{
    int temperatures[7][24] = {{1, 2, 3, 4, 5}};
    int i = 0, *p = temperatures[i];

    while (p < temperatures[i + 1])
    printf("%d ", *p++);

    return 0;
}
