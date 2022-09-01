/*  Name: 14-03.c
    Purpose: Exercise 14-03
    Author: NiceMan1337
    Date: 01.09.2022  */

#include <stdio.h>
#define DOUBLE(x) (2*(x))
/*(c) fixed it by adding parentheses*/

int main(void)
{
    printf("(a): %d\n", DOUBLE(1+2));
    printf("(b): %d\n", (4/DOUBLE(2)));

    return 0;
}