/*  Name: p4-5.c
    Purpose: Different approach in upc.c program.
    Author: NiceMan1337
    Date: 16.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    /*ask user for input*/
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    /*calculate total*/
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    /*print out the result*/
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
 
    return 0;
}
