/*  Name: p7-09.c
    Purpose: Converts 12-hour time to a 24-hour time.
    Author: NiceMan1337
    Date: 11.05.2022  */

#include <stdio.h>
#include <ctype.h>

int main(void)
{ 
    /*declare variables*/
    int hour, minute;
    char ch1, ch2;

    /*ask user for a time*/
    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c%c", &hour, &minute, &ch1, &ch2);
    
    /*calculate time*/
    if (toupper(ch1) == 'P') {
        hour += 12;
    }

    /*print the result*/
    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);

    return 0;
}