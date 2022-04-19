/*  Name: p4-01.c
    Purpose: Displays a two-digit number reveresed.
    Author: NiceMan1337
    Date: 14.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variable*/
    int n, i, j;

    /*ask user for input*/
    printf("Enter two-digit number: ");
    scanf("%d", &n);

    /*separate digits*/
    i = n / 10;
    j = n % 10;

    /*print out the result*/
    printf("The reversal is: %d%d\n", j, i);

    return 0;
}