/*  Name: p5-05.c
    Purpose: Calculates the tax due.
    Author: Piotr Marendowski
    Date: 27.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    float income;
    
    /*ask user for income*/
    printf("Enter income: ");
    scanf("%f", &income);

    /*calculate and print out the description*/
    if (income <= 750.00f) {
        printf("Your tax is: %.2f\n", income * 0.01f);
    }
    else if (income <= 2250.00f) {
        printf("Your tax is: %.2f\n", 7.50f + ((income - 750.00f) * 0.02f));
    }
    else if (income <= 3750.00f) {
        printf("Your tax is: %.2f\n", 37.50f + ((income - 2250.00f) * 0.03f));
    }
    else if (income <= 5250.00f) {
        printf("Your income is: %.2f\n", 82.50f + ((income - 3750.00f) * 0.04f));
    }
    else if (income <= 7000.00f) {
        printf("Your income is: %.2f\n", 142.50f + ((income - 5250.00f) * 0.05f));
    }
    else {
        printf("Your income is: %.2f\n", 230.00f + ((income - 7000.00f) * 0.06f));
    }
    
    return 0;
}

/*Description:
You can also see williamgherman's solution*/