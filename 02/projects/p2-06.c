/*  Name: p2-6.c
    Purpose: Calculate formula ((((3x + 2)x-5)x-1)x+7)x-6.
    Author: NiceMan1337
    Date: 27.02.2022  */

#include <stdio.h>

int main (void)
{
    int x;    /*declare variable*/

    printf("Enter x: ");    /*ask for x*/
    scanf("%d", &x);

    /*print out volume with long printf*/
    printf("Volume of this sphere is: %.2d\n",
     x = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}

/*Description:
You can also make variable result - and calculate
it outside printf statement*/