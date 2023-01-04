/*  Name: 5-3.c
    Purpose: Exercise 5-3.
    Author: Piotr Marendowski
    Date: 22.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int i, j, k;

    /*(a)*/
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);

    /*(b)*/
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);

    /*(c)*/
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);

    /*(d)*/
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);
    
    return 0;
}