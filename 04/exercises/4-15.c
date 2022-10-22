/*  Name: 4-15.c
    Purpose: Exercise 4-15.
    Author: Piotr Marendowski
    Date: 13.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variables*/
    int i, j;

    /*(a)*/
    i = 1, j = 2;
    i += j;
    printf("%d %d\n", i, j);

    /*(b)*/
    i = 1, j = 2;
    i--;
    printf("%d %d\n", i, j);
    
    /*(c)*/
    i = 1, j = 2;
    i * j / i;
    printf("%d %d\n", i, j); 
    
    /*(d)*/
    i = 1, j = 2;
    i % ++j;
    printf("%d %d\n", i, j);
    
    return 0;
}