/*  Name: 16-15.c
    Purpose: Exercise 16-15
    Author: NiceMan1337
    Date: 02.10.2022  */

#include <stdio.h>

int main(void)
{
    /*(a)*/
    enum days_of_week {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
                 FRIDAY, SATURDAY, SUNDAY};

    /*(b)*/
    typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
                 FRIDAY, SATURDAY, SUNDAY} days_of_week;

    return 0;
}