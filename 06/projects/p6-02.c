/*  Name: p6-02.c
    Purpose: Calculates a GCD from two digits.
    Author: NiceMan1337
    Date: 11.04.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int m, n, remainder;

    /*ask user for numbers*/
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    /*calculate GCD*/
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    /*print out the result*/
    printf("Greatest common divisor: %d\n", m);
    
    return 0;
}

/*Solution:
Remove semicolin in the if statement*/