/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Prints a difference between two inputted times.
date (DD/MM/YYYY): 26.02.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t time1;
    time_t time2;
    struct tm ptr1, ptr2;

    printf("First date:\n");
    printf("Enter month: ");
    scanf("%d", &ptr1.tm_mon);
    printf("Enter day: ");
    scanf("%d", &ptr1.tm_mday);
    printf("Enter year (1900+): ");
    scanf("%d", &ptr1.tm_year);

    ptr1.tm_mon--;
    ptr1.tm_year -= 1900;
    /* mktime to convert to legal boundaries */
    time1 = mktime(&ptr1);

    printf("Second date:\n");
    printf("Enter month: ");
    scanf("%d", &ptr2.tm_mon);
    printf("Enter day: ");
    scanf("%d", &ptr2.tm_mday);
    printf("Enter year (1900+): ");
    scanf("%d", &ptr2.tm_year);

    ptr2.tm_mon--;
    ptr2.tm_year -= 1900;
    /* mktime to convert to legal boundaries */
    time2 = mktime(&ptr2);

    /* 60/60/24 to get day */
    printf("\nDifference in days: %d\n",
     (int) (difftime(time2, time1) / 60/60/24));

    return 0;
}