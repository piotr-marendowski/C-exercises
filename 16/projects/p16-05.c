/*  Name: p16-05.c
    Purpose: Displays the closest flights to the time entered.
    Author: NiceMan1337
    Date: 06.10.2022  */

#include <stdio.h>

int main(void)
{ 
    int time, hour, minute, i;

    struct flights {
        int departure;
        int arrival;
    };
    
    const struct flights times[] = { {480, 616}, {583, 712}, {679, 811},  {767, 900}, 
        {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438} };

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    /*convert input into minutes after midnight*/
    time = hour * 60 + minute;

    printf("Closest departure time is ");
    
    for (i = 0; i < 8 - 1; i++)
    {
        if (time <= times[i].departure + (times[i+1].departure - times[i].departure) / 2)
            break;
    }

    switch (times[i].departure)
    {
        case 480:
            printf("8:00 a.m., arriving at 10:16 a.m.\n");
            break;
        case 583:
            printf("9:43 a.m., arriving at 11:52 a.m.\n");
            break;
        case 679:
            printf("11:19 a.m., arriving at 1:31 p.m.\n");
            break;   
        case 767:
            printf("12:47 p.m., arriving at 3:00 p.m.\n");
            break;
        case 840:
            printf("2:00 p.m., arriving at 4:08 p.m.\n");
            break;
        case 945:
            printf("3:45 p.m., arriving at 5:55 p.m.\n");
            break;
        case 1140:
            printf("7:00 p.m., arriving at 9:20 p.m.\n");
            break;
        case 1305:
            printf("9:45 p.m., arriving at 11:58 p.m.\n");
            break;
        default:
            break;
    }

    return 0;
}