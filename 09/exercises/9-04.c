/*  Name: 9-04.c
    Purpose: Exercise 9-4.
    Author: NiceMan1337
    Date: 13.06.2022  */

#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void)
{ 
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Day of the year: %d\n", day_of_year(month, day, year));
    return 0;
}

int day_of_year(int month, int day, int year)
{
    int i;

    for (i = 1; i < month; i++) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day += 31;
                break;
            case 4: case 6: case 9: case 11:
                day += 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    day += 29;
                else
                    day += 28;
        }
    }
    return day;
}