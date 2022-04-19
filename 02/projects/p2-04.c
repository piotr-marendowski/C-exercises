/*  Name: p2-04.c
    Purpose: Calculate 5% tax from amount provided by user.
    Author: NiceMan1337
    Date: 26.02.2022  */

#include <stdio.h>

int main (void)
{
    float amount;    /*declare variable*/

    printf("Enter amount: ");   /*ask for the amount*/
    scanf("%f", &amount);

    amount *= 1.05; /*calculate amount with tax*/

    /*print out the amount*/
    printf("With tax added: %.2f\n", amount);

    return 0;
}

/*Description:
5% is 0.05, not 0.5, which is half
I added 5% to whole = 1.05
you can create variable tax and
calculate it with amount, then print it
or calculate everything in printf*/