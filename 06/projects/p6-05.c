/*  Name: p6-05.c
    Purpose: Displays a reversed number.
    Author: Piotr Marendowski
    Date: 12.04.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variable*/
    int n;

    /*ask user for input*/
    printf("Enter a number: ");
    scanf("%d", &n);

    /*separate digits*/
    do {
        printf("%d", n % 10);
        n /= 10;
    } while (n != 0);

    return 0;
}