/*  Name: 4-12.c
    Purpose: Exercise 4-12.
    Author: Piotr Marendowski
    Date: 13.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variables*/
    int i, j;

    /*(a)*/
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);

    /*(b)*/
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);

    /*(c)*/
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);
    
    /*(d)*/
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);

    return 0;
}