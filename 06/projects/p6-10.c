/*  Name: p6-10.c
    Purpose: Project p6-10.
    Author: NiceMan1337
    Date: 19.04.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int day1, day2, month1, month2, year1, year2;

    /*ask user for first date*/
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    month2 = month1;
    day2 = day1;
    year2 = year1;

    /*calculate and print out everything in one loop*/
    do {

        /*ask user for dates*/
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month1, &day1, &year1);
        
        /*calculate and print out difference:
        1. years
        if years are same
        2. months
        if months are same
        3. days */
    
        if (year1 < year2 && year1 != 0) {
            month2 = month1;
            day2 = day1;
            year2 = year1;
        } 
        else if (year2 < year1) {
            continue;
        }
        else if (year1 == year2) {        
            if (month1 < month2 && month1 != 0) {
                month2 = month1;
                day2 = day1;
                year2 = year1;
            }    
            else if (month2 < month1) {
                continue;
            }
            else if (month1 == month2) {
                if (day1 < day2 && day1 != 0) {
                    month2 = month1;
                    day2 = day1;
                    year2 = year1;
                }
                else if (day2 < day1) {
                    continue;
                }
            }
        } 
    }while (day1 != 0 && month1 != 0 && year1 != 0); 

    printf("%d/%d/%d is the earliest date\n", month2, day2, year2);

    return 0;
}

/*Description:
Next two exercises are black magic to me,
see williamgherman/c-solutions for this.*/