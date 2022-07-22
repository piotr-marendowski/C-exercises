/*  Name: p11-03.c
    Purpose: Reduces a fraction to lowest terms
    modified for use of pointers.
    Author: NiceMan1337
    Date: 22.07.2022  */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{ 
    /*declare variables*/
    int numerator, denominator, reduced_numerator, reduced_denominator;

    /*ask user for a fraction*/
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    /*call reduce*/
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    /*print out the lowest terms*/
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
    
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int n, m, remainder;

    /*save variables for calculating a GCD*/
    m = numerator;
    n = denominator;

    /*calculate GCD*/
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}