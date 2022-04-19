/*  Name: p4-4.c
    Purpose: Calculates entered number in decimal to octal.
    Author: NiceMan1337
    Date: 16.03.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variable*/
    int number, n1, n2, n3, n4, n5;

    /*ask user for input*/
    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &number);

    /*calculate number in octal*/
    n1 = number % 8;
    n2 = (number / 8) % 8;
    n3 = (number / 64) % 8;
    n4 = (number / 512) % 8;
    n5 = (number / 4096) % 8;

    /*print out the result*/
    printf("In octal, your number is: %d%d%d%d%d\n", n5, n4, n3, n2, n1);

    return 0;
}

/*Description:
You could just calculate everything in printf without using
all n values*/