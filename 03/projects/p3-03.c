/*  Name: p3-3.c
    Purpose: Separate ISBN number into groups.
    Author: NiceMan1337
    Date: 06.03.2022  */

#include <stdio.h>

int main (void)
{   
    /*declare variables*/
    int gsi, group, code, number, digit;

    /*ask user for ISBN number*/
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group, &code, &number, &digit);

    /*print out the results*/
    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", digit); 
    return 0;
}
