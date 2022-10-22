/*  Name: 11-05.c
    Purpose: Exercise 11-05.
    Author: Piotr Marendowski
    Date: 20.07.2022  */

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long total_sec;
    int hr = 0, min = 0, sec = 0;

    printf("Enter time represented in number of seconds since midnight: ");
    scanf("%ld", &total_sec);

    split_time(total_sec, &hr, &min, &sec);
    printf("You entered:\n%d hours\n%d minutes\n%d seconds\nsince midnight\n", hr, min, sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    total_sec -= *hr * 3600;
    *min = total_sec / 60;
    total_sec -= *min * 60;
    *sec = total_sec;
}