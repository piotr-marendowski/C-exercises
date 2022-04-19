/*  Name: p2-2.c
    Purpose: Calculate the volume of a sphere with a 10-meter radius.
    Author: NiceMan1337
    Date: 26.02.2022  */

#include <stdio.h>
#define PI 3.14159265359

int main (void)
{
    float r = 10.0, volume;    /*declare variables*/

    r = r * r * r;  /*compute value of radius*/
    volume = (4.0f/3.0f) * PI * r; /*get volume*/

    /*print out volume*/
    printf("Volume of this sphere is: %.2f\n", volume);

    return 0;
}

/*Description:
Formula for volume: v = (4/3)*PI*r */