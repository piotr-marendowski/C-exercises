/*  Name: p6-08.c
    Purpose: Prints one-month calendar.
    Author: Piotr Marendowski
    Date: 15.04.2022  */
#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int days, week, i = 1, j;

    /*ask user for an input*/
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &week);

    /*calculate starting point*/
    for (j = week + 1; j >= week; j--) { 
        printf("   ");
    }

    /*make a calendar*/
    for (i = j; i <= days + 1; i++)
    {
        if (i % 7 == 0) {
            printf("\n%2d ", (i - j) + 1);
        }
        else {
            printf("%2d ", (i - j) + 1);
        }
    }
    

    return 0;
}

/*Description:
For a better solution: williamgherman/c-solutions */