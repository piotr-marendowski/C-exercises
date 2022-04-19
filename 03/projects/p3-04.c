/*  Name: p3-4.c
    Purpose: Process number from user input.
    Author: NiceMan1337
    Date: 07.03.2022  */

#include <stdio.h>

int main (void)
{   
    /*declare variables*/
    int first, second, third;

    /*ask user for number*/
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);

    /*print out the result*/
    printf("You entered %d.%d.%d\n", first, second, third); 
    return 0;
}

/*Description:
first - first numbers
second - second numbers
third - third numbers */