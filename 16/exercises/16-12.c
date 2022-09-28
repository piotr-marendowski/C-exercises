/*  Name: 16-12.c
    Purpose: Exercise 16-12
    Author: NiceMan1337
    Date: 28.09.2022  */

#include <stdio.h>

int main(void)
{
    union
    {
        double a;
        struct
        {
            char b[4];
            double c;
            int d;
        } e;
        char f[4];
    } u;

    return 0;
}

/*Solution:
This union will take up 16 bytes (the largest is struct).*/