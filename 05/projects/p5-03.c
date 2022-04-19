/*  Name: p5-3.c
    Purpose: Project 5-3.
    Author: NiceMan1337.
    Date: 26.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variables for first broker*/ 
    float comission, value, price;
    int number;

    /*declare variables for second broker*/
    float comission2;
    /*price and number will stay the same
    also we don't need value (variable)*/

    /*ask user for input*/
    printf("Enter number of shares: ");
    scanf("%d", &number);
    printf("Enter price per share: ");
    scanf("%f", &price);

    /*calculate value of the trade*/
    value = number * price;

    /*calculate first broker's commision*/
    if (value < 2500.00f)
        comission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        comission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        comission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        comission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        comission = 155.00f + .0011f * value;
    else
        comission = 255.00f + .0009f * value;

    if (comission < 39.00f)
        comission  = 39.00f;

    /*compute rival's commision*/
    if (number < 2000) {
        comission2 = 33.00f + .0003f * value;
    }
    else if (number > 2000) {
        comission2 = 33.00f + .0002f * value;
    }

    /*display results*/
    printf("Comission from first broker: $%.2f\n", comission);
    printf("Comission from second broker: $%.2f\n", comission2);
    
    return 0;
}