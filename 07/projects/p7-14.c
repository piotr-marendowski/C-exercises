/*  Name: p7-14.c
    Purpose: Computes Newton's method to compute the
    square root of a positive floating-point number.
    Author: Piotr Marendowski
    Date: 14.05.2022  */

#include <stdio.h>
#include <math.h>

int main(void) {

    /*declare variables*/
    int x;
    double y, dif, avg = 1.0;

    /*ask for a number*/ 
    printf("Enter a positive number: ");
    scanf("%d", &x);

    /*calcualate the square root*/
    while (dif != 1) {
        y = avg;
        avg = ((x / y) + y) / 2;
        dif = fabs(y / avg);
    }
    
    /*print the result*/
    printf("Square root: %.5f\n", y);

    return 0;
}

/*Description:
That's the easier way to do this, but not perfectly what author wanted,
williamgherman/c-solutions - for more advanced solution */