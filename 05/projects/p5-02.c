/*  Name: p5-02.c
    Purpose: Calculates a 24-hour time to 12-hour.
    Author: Piotr Marendowski
    Date: 26.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int hours, minutes;

    /*ask for an hour*/
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    /*converse to 12-hour format*/
    if (hours == 0) {
        hours = 12;
        printf("Equivalent 12-hour time: %d:%d\n", hours, minutes);
    }
    else if (hours <= 12) { 
        printf("Equivalent 12-hour time: %d:%d\n", hours, minutes);
    }
    else {
        hours -= 12;
        printf("Equivalent 12-hour time: %d:%d\n", hours, minutes);
    }

    return 0;
}
