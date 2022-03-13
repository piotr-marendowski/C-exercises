/*  Name: 4-14.c
    Purpose: Exercise 4-14.
    Author: NiceMan1337
    Date: 13.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variables*/
    int a = 1, b = 1, c = 1, d = 1, e = 1;

    /*(a)*/
    printf("%d\n", (((a * b) - (c * d)) + e) );

    /*(b)*/
    printf("%d\n", (((a / b) % c) / d) );
    
    /*(c)*/
    printf("%d\n", (((-a - b) +c) - d) ); 
    
    /*(d)*/
    printf("%d\n", (((a * -b) / b) - d) );
    
    return 0;
}