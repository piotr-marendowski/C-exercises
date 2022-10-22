/*  Name: p11-02.c
    Purpose: Displays the closest flights to the time entered
    modified for use of pointes.
    Author: Piotr Marendowski
    Date: 22.07.2022  */

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{ 
    /*declare variables, f1 = flight 1*/
    int time, hour, minute, departure_time, arrival_time;

    /*ask user for a time*/
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    /*convert input into minutes after midnight*/
    time = hour * 60 + minute;

    /*calculate and print out result*/
    printf("Closest departure time is ");

    /*call find_closest_flight*/
    find_closest_flight(time, &departure_time, &arrival_time);

    /*
    1. store hours in hour and divide by 60 for hours (e.g. 468 / 60 = 7)
    2. in case of a.m don't subtract 12 (e.g. 1 p.m. = 13 - 12)
    3. modulo by 60 to get remainder (minutes)
    4. print (if less then flight 3, then a.m otherwise p.m)
    5. same for the arrival time
    */

    hour = (departure_time / 60);
    if (hour > 12)
        hour -= 12;
    minute = departure_time % 60; 

    printf("%d:%.2d ", hour, minute);
    if (departure_time > 679)
        printf("p.m.");
    else
        printf("a.m");

    hour = (arrival_time / 60);
    if (hour > 12)
        hour -= 12;
    minute = arrival_time % 60;

    printf(", arriving at %d:%.2d ", hour, minute);
    if (arrival_time > 811)
        printf("p.m.\n");
    else
        printf("a.m.\n");
    
    return 0;
}
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    
    /*declare variables, f1 = flight 1*/
    int f1 = 480, f2 = 583, f3 = 679, f4 = 767, f5 = 840,
     f6 = 945, f7 = 1140, f8 = 1305;

    /*
    1. calculate difference between first flight and second flight
    2. then find middle point by dividing them by 2
    3. add this to first flight
    4. and you will get first half for first flight
    and second half for second flight
    5. then do it again for others
    
    6. then assign corresponding values of flights into
    departure_time and arrival_time*/

    if (desired_time <= f1 + (f2 - f1) / 2) {
        *departure_time = 480;
        *arrival_time = 616;
    }
    else if (desired_time < f2 + (f3 - f2) / 2) {
        *departure_time = 583;
        *arrival_time = 712;
    }
    else if (desired_time < f3 + (f4 - f3) / 2) {
        *departure_time = 679;
        *arrival_time = 811;
    }
    else if (desired_time < f4 + (f5 - f4) / 2) {
        *departure_time = 767;
        *arrival_time = 900;
    }
    else if (desired_time < f5 + (f6 - f5) / 2) {
        *departure_time = 840;
        *arrival_time = 968;
    }
    else if (desired_time < f6 + (f7 - f6) / 2) {
        *departure_time = 945;
        *arrival_time = 1075;
    }
    else if (desired_time < f7 + (f8 - f7) / 2) {
        *departure_time = 1140;
        *arrival_time = 1280;
    }
    else {
        *departure_time = 1305;
        *arrival_time = 1438;
    }
 
}