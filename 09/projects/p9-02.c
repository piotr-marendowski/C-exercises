/*  Name: p9-02.c
    Purpose: Modified project 5 from chapter 5.
    Author: Piotr Marendowski
    Date: 17.06.2022  */

#include <stdio.h>

float tax(int income);

int main(void)
{ 
    /*declare variables*/
    float income;
    
    /*ask user for income*/
    printf("Enter income: ");
    scanf("%f", &income);

    /*print the tax*/
    printf("Your tax is: %.2f\n", tax(income));
    
    return 0;
}

float tax(int income)
{
    /*calculate and print out the description*/
    if (income <= 750.00f)
        return income * 0.01f;
    else if (income <= 2250.00f)
        return 7.50f + (income - 750.00f) * 0.02f;
    else if (income <= 3750.00f)
        return 37.50f + (income - 2250.00f) * 0.03f;
    else if (income <= 5250.00f)
        return 82.50f + (income - 3750.00f) * 0.04f;
    else if (income <= 7000.00f)
        return 142.50f + (income - 5250.00f) * 0.05f;
    else
        return 230.00f + (income - 7000.00f) * 0.06f;
}