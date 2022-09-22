/*  Name: 16-06.c
    Purpose: Exercise 16-06
    Author: NiceMan1337
    Date: 22.09.2022  */

#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
    struct time t;
    int total_seconds;

    printf("Enter number of seconds since midnight: ");
    scanf("%d", &total_seconds);

    t = split_time(total_seconds);

    printf("Equivalent in hours: %d, minutes: %d, and seconds: %d.\n",
           t.hours, t.minutes, t.seconds);

    return 0;
}

struct time split_time(long total_seconds)
{
    struct time t1;

    t1.hours = total_seconds / 3600;
    t1.minutes = (total_seconds % 3600) / 60;
    t1.seconds = ((total_seconds % 3600) / 60) % 60;   

    return t1;
}