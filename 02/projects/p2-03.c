/*  Name: p2-3.c
    Purpose: Calculate the volume of a sphere with a radius provided by user.
    Author: NiceMan1337
    Date: 26.02.2022  */

#include <stdio.h>
#define PI 3.14159265359

int main (void)
{
    float r, volume;    /*declare variables*/

    printf("Enter radius of sphere: ");
    scanf("%f", &r);

    r = r * r * r;  /*compute value of radius*/
    volume = (4.0f/3.0f) * PI * r; /*get volume*/

    /*print out volume*/
    printf("Volume of this sphere is: %.2f\n", volume);

    return 0;
}

/*Description:
Formula for volume: v = (4/3)*PI*r */