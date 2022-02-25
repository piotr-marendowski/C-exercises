/*  Name: dweight2.c
    Purpose: Computes the dimensional weight of a box from input
    provided by the user.
    Author: NiceMan1337
    Date: 25.02.2022  */

#include <stdio.h>

int main (void) {

    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}