/*  Name: p2-05.c
    Purpose: Calculate formula 3x^5+2x^4-5x^3-x^2+7x-6.
    Author: Piotr Marendowski
    Date: 26.02.2022  */

#include <stdio.h>

int main (void)
{
    int x;    /*declare variable*/

    printf("Enter x: ");    /*ask for x*/
    scanf("%d", &x);

    /*print out volume with long printf*/
    printf("Volume of this sphere is: %.2d\n",
     x = ((3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x))
      - (x*x) + (7*x) - 6));

    return 0;
}

/*Description:
You can also make variable result - and calculate
it outside printf statement*/