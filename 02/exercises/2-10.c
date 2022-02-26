/*  Name: 2-10.c
    Purpose: Exercise 10.
    Author: NiceMan1337
    Date: 26.02.2022  */

#include <stdio.h>

int main (void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;    
}

/*Solution:
Essential spaces are only between:
#include and <stdio.h>
return and 0;*/