/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Exercise 12
Modification date (DD/MM/YYYY): 25.02.2023 */

#include <stdio.h>

time_t get_midnight(int year)
{
    time_t t;
    if (year < 1900)
        return 0; /* not valid input */
    t.tm_year = year - 1900;
    t.tm_mon = 0;
    t.tm_mday = 1;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;

    return t;
}

int main(void)
{
    
    return 0;
}