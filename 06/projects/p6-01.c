/*  Name: p6-01.c
    Purpose: Finds a largest number from user input.
    Author: Piotr Marendowski
    Date: 11.04.2022  */

#include <stdio.h>

int main(void)
{
    /*initialize variables:
    n - user input number
    biggest - biggest number entered*/ 
    float n, biggest = 0.0f;

    /*ask user for a number first time*/
    printf("Enter a number: ");
    scanf("%f", &n);

    /*ask for a number and calculate whetever is greater then previous*/
    while (n > 0.0f) {
        if (n > biggest) {
            biggest = n;
        }

        printf("Enter a number: ");
        scanf("%f", &n);
    }

    /*print out the biggest value*/ 
    printf("The largest number entered was: %.2f\n", biggest);


    return 0;
}

/*Description:
You can make it in a do-while loop*/