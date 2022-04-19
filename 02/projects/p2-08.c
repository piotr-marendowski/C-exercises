/*  Name: p2-8.c
    Purpose: Calculate monthly balance from user input.
    Author: NiceMan1337
    Date: 27.02.2022  */

#include <stdio.h>

int main (void)
{
    /*declare variables*/
    float balance, rate, monthly_rate, payment;

    /*ask for user input*/
    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    /*calculate monthly interest rate*/
    monthly_rate = balance * rate / 100.0 / 12.0;

    /*calculate and show first month*/
    balance = balance - payment + monthly_rate;

    printf("Balance remaining after first payment: $%.2f\n", balance);

    /*calculate and show second month*/
    balance = balance - payment + monthly_rate;

    printf("Balance remaining after second payment: $%.2f\n", balance);

    /*calculate and show third month*/
    balance = balance - payment + monthly_rate;

    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}

/*Description:
Some little error is ocurring in next statements
*/