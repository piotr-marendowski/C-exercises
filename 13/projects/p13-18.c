/*  Name: p13-18.c
    Purpose: Reads date (mm/dd/yyyy) and displays it (month, dd, yyyy).
    Author: NiceMan1337
    Date: 26.08.2022  */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *months[] = {"0", "January", "February", "March",
                      "April", "May", "June", "July",
                      "August", "September", "October",
                      "November", "December"};
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %s %d, %d\n", months[month], day, year);

    return 0;
}