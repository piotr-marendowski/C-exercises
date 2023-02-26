/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Prints date n days later.
date (DD/MM/YYYY): 26.02.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    struct tm ptr;

    printf("Enter month: ");
    scanf("%d", &ptr.tm_mon);
    printf("Enter day: ");
    scanf("%d", &ptr.tm_mday);
    printf("Enter year (+ 1900): ");
    scanf("%d", &ptr.tm_year);
    printf("Enter n: ");
    scanf("%d", &n);

    ptr.tm_year += 1900;
    ptr.tm_mday += n;
    /* mktime to convert to legal boundaries */
    mktime(&ptr);

    printf("%.2d-%.2d-%.4d\n", ptr.tm_mon, ptr.tm_mday, ptr.tm_year);


    return 0;
}