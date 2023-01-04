/*  Name: 16-05.c
    Purpose: Exercise 16-05
    Author: Piotr Marendowski/williamgherman
    Date: 21.09.2022  */

#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int day_of_year(struct date d);

int main(void)
{
    struct date d;

    d.day = 7;
    d.month = 11;
    d.year = 2008;

    printf("%d.%d.%d was %d day of the year.\n", d.month, d.day, d.year, day_of_year(d));

    return 0;
}

int day_of_year(struct date d) {
    int res = 0, i;
    const int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month > 1 && ((d.year % 4 == 0 && d.year % 100 != 0) 
        || d.year % 400 == 0))
        res++;
    for (i = 0; i < d.month; i++)
        res += days_month[i];
    return res + d.day;
}

/*Description:
I "borrowed" function from williamgherman, because I'm dumb :3 */