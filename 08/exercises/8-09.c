/*  Name: 8-09.c
    Purpose: Exercise 8-9.
    Author: Piotr Marendowski
    Date: 15.05.2022  */

#include <stdio.h>

#define days 30
#define hours 24

int main(void)
{ 
    int i, j, avg;
    int temperature_readings[days][hours] = {0};

    for (i = 1; i < days; i++) {
        for (j = 0; j < hours; j++) {
            avg += temperature_readings[i][j];
        }
        avg /= j;
        printf("Day: %d, average temperature: %d\n", i, avg);
        avg = 0;
    }
    
    return 0;
}