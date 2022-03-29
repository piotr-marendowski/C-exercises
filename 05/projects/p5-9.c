/*  Name: p5-9.c
    Purpose: Project p5-9.
    Author: NiceMan1337
    Date: 29.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int day1, day2, month1, month2, year1, year2;

    /*ask user for dates*/
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    /*calculate and print out difference:
    1. years
    if years are same
    2. months
    if months are same
    3. days
    if days are same*/
    
    if (year1 < year2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
         month1, day1, year1, month2, day2, year2);
    } 
    else if (year2 < year1) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
         month2, day2, year2, month1, day1, year1);
    }
    else if (year1 == year2) {        
        if (month1 < month2) {
            printf("%d/%d/%d is earlier than %d/%d/%d\n",
             month1, day1, year1, month2, day2, year2);
        }    
        else if (month2 < month1) {
            printf("%d/%d/%d is earlier than %d/%d/%d\n",
             month2, day2, year2, month1, day1, year1);
        }
        else if (month1 == month2) {
            if (day1 < day2) {
                printf("%d/%d/%d is earlier than %d/%d/%d\n",
                 month1, day1, year1, month2, day2, year2);
            }
            else if (day2 < day1) {
                printf("%d/%d/%d is earlier than %d/%d/%d\n",
                 month2, day2, year2, month1, day1, year1);
            }
            else if (day1 == day2) {
                printf("These dates are the same!\n");
            }
        } 
    }
    return 0;
}