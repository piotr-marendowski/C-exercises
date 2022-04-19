/*  Name: p4-6.c
    Purpose: Calculates an EAN check digit.
    Author: NiceMan1337
    Date: 16.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    /*ask user for input*/
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d, &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5);

    /*calculate total*/
    first_sum = i1 + i3 + i5 + j1 + j3 + j5;
    second_sum = d + i2 + i4 + i6 + j2 + j4;
    total = (3 * first_sum) + second_sum;
    --total;
    total %= 10;
    total = 9 - total;

    /*print out the result*/
    printf("Check digit: %d\n", total);
 
    return 0;
}