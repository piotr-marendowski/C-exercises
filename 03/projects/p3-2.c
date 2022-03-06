/*  Name: p3-2.c
    Purpose: Align information entered by user.
    Author: NiceMan1337
    Date: 06.03.2022  */

#include <stdio.h>

int main (void)
{   
    /*declare variables*/
    int number, month, day, year;
    float price;

    /*ask for user input*/
    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price); 
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);

    /*print out the result*/
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%10.2f\t%.2d/%.2d/%d\n", number, price, month, day, year);
    
    return 0;
}

/*Description:
%.2d/%.2d/%d - if you will enter one intiger for
day or month, it will insert a zero in output*/