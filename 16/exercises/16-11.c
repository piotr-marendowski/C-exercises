/*  Name: 16-11.c
    Purpose: Exercise 16-11
    Author: NiceMan1337
    Date: 28.09.2022  */

#include <stdio.h>

int main(void)
{
    struct
    {
        double a;
        union
        {
            char b[4];
            double c;
            int d;
        } e;
        char f[4];
    } s;

    return 0;
}

/*Solution:
A union will take up 8 bytes and struct 20, because
union allocates space equivalent to its bigger member type.*/