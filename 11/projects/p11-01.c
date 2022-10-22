/*  Name: p11-01.c
    Purpose: Divide amount of dollars to bills from user input
    modified for use of pointers.
    Author: Piotr Marendowski
    Date: 22.07.2022  */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main (void)
{
    /*declare variables*/
    int dollars, twenties, tens, fives, ones;

    /*ask for user input*/
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    /*calculate number of bills*/
    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    /*print out the result*/
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars / 1;
    dollars -= *ones * 1;
}
