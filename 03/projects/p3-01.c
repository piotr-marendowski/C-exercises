/*  Name: p3-1.c
    Purpose: Process date from user input.
    Author: NiceMan1337
    Date: 06.03.2022  */

#include <stdio.h>

int main (void)
{   
    /*declare variables*/
    int month, day, year;

    /*ask for user input*/
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);

    /*print out the result*/
    printf("You entered the date %d%.2d%.2d", year, month, day);
    
    return 0;
}

/*Description:
%d%.2d%.2d - if you will enter one intiger for
day or month, it will insert a zero in output*/
