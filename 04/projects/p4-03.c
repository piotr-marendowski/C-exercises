/*  Name: p4-03.c
    Purpose: Displays a three-digit number reveresed.
    Author: Piotr Marendowski
    Date: 14.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variable*/
    int i, j, x;

    /*ask user for input*/
    printf("Enter three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &x);

    /*print out the result*/
    printf("The reversal is: %d%d%d\n", x, j, i);

    return 0;
}