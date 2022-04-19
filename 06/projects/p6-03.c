/*  Name: p6-03.c
    Purpose: Reduces a fraction to lowest terms.
    Author: NiceMan1337
    Date: 12.04.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int numerator, denominator, n, m, remainder;

    /*ask user for a fraction*/
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    /*save variables for calculating a GCD*/
    m = numerator;
    n = denominator;

    /*calculate GCD*/
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    /*print out the lowest terms*/
    printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);
    
    return 0;
}