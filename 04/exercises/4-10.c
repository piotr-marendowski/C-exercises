/*  Name: 4-10.c
    Purpose: Exercise 4-10.
    Author: Piotr Marendowski
    Date: 13.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variables*/
    int i, j;

    /*(a)*/
    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);

    /*(b)*/
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);

    /*(c)*/
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);
    
    /*(d)*/
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);

    return 0;
}