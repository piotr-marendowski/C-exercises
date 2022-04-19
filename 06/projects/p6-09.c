/*  Name: p6-9.c
    Purpose: Calculate monthly balance from user input.
    Author: NiceMan1337
    Date: 18.04.2022  */

#include <stdio.h>

int main (void)
{
    /*declare variables*/
    float balance, rate, monthly_rate, payment;
    int i, payments;

    /*ask for user input*/
    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter amount of monthly payments: ");
    scanf("%d", &payments);

    /*ask for a payment*/
    for (i = 1; i <= payments; i++) {
        /*calculate monthly interest rate*/
        monthly_rate = balance * rate / 100.0 / 12.0;

        /*calculate and show a month*/
        balance = balance - payment + monthly_rate;

        printf("Balance remaining after %d payment: $%.2f\n", i, balance);
    }

    return 0;
}