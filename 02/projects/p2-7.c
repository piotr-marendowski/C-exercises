/*  Name: p2-7.c
    Purpose: Divide amount of dollars to bills from user input.
    Author: NiceMan1337
    Date: 27.02.2022  */

#include <stdio.h>

int main (void)
{
    /*declare variables*/
    int amount, bill_20, bill_10, bill_5, bill_1;

    /*ask for user input*/
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    /*calculate number of bills*/
    bill_20 = amount / 20;
    amount -= bill_20 * 20;
    
    bill_10 = amount / 10;
    amount -= bill_10 * 10;

    bill_5 = amount / 5;
    amount -= bill_5 * 5;

    bill_1 = amount / 1;
    amount -= bill_1 * 1;

    /*print out the result*/
    printf("$20 bills: %d\n", bill_20);
    printf("$10 bills: %d\n", bill_10);
    printf("$5 bills: %d\n", bill_5);
    printf("$1 bills: %d\n", bill_1);

    return 0;
}

/*Description:
You could print everything out in one
printf statement or with only one
variable - amount*/