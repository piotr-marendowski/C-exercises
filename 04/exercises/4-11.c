/*  Name: 4-11.c
    Purpose: Exercise 4-11.
    Author: NiceMan1337
    Date: 13.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variables*/
    int i, j, k;

    /*(a)*/
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n", i);

    /*(b)*/
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);

    /*(c)*/
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j); 
    
    /*(d)*/
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}