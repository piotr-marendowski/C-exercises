/*  Name: p5-08.c
    Purpose: Displays the closest flights to the time entered.
    Author: Piotr Marendowski
    Date: 29.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables, f1 = flight 1*/
    int time, hour, minute, f1 = 480, f2 = 583, f3 = 679,
     f4 = 767, f5 = 840, f6 = 945, f7 = 1140, f8 = 1305;

    /*ask user for a time*/
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    /*convert input into minutes after midnight*/
    time = hour * 60 + minute;

    /*calculate and print out result*/
    printf("Closest departure time is ");

    /*calculate difference between first flight and second flight
    then find middle point by dividing them by 2
    and add this to first flight
    and you will get first half for first flight
    and second half for second flight
    then do it again for others*/

    if (time <= f1 + (f2 - f1) / 2) {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (time < f2 + (f3 - f2) / 2) {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (time < f3 + (f4 - f3) / 2) {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (time < f4 + (f5 - f4) / 2) {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (time < f5 + (f6 - f5) / 2) {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (time < f6 + (f7 - f6) / 2) {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (time < f7 + (f8 - f7) / 2) {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }
 
    return 0;
}