/*  Name: p9-06.c
    Purpose: Calculates value of polynomial.
    Author: Piotr Marendowski
    Date: 20.06.2022  */

#include <stdio.h>

int polynomial(int x);

int main(void)
{ 
    /*declare variable*/
    int x;

    /*ask user for an x*/
    printf("Enter x: ");
    scanf("%d", &x);

    /*print polynomial from function*/ 
    printf("Polynomial from x: %d", polynomial(x));

    return 0;
}

int polynomial(int x)
{
    x = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6;
    return x;
}