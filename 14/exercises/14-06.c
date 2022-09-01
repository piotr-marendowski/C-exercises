/*  Name: 14-06.c
    Purpose: Exercise 14-06
    Author: NiceMan1337
    Date: 01.09.2022  */

#include <stdio.h>
#include <math.h>
#include <string.h>
#define DISP(f,x) (printf(#f "(%g) = %g\n", (x), (f(x))))
#define DISP2(f,x,y) (printf(#f "(%g, %g) = %g\n", (x), (y), (f((x),(y)))))

int main(void)
{
    DISP(sqrt, 9.0);

    return 0;
}