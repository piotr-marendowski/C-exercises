/*  Name: p4-02.c
    Purpose: Displays a three-digit number reveresed.
    Author: NiceMan1337
    Date: 14.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variable*/
    int n, i, j, x;

    /*ask user for input*/
    printf("Enter three-digit number: ");
    scanf("%d", &n);

    /*separate digits*/
    i = n / 100;
    j = (n / 10) % 10;
    x = n % 10;

    /*print out the result*/
    printf("The reversal is: %d%d%d\n", x, j, i);

    return 0;
}