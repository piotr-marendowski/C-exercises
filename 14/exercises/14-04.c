/*  Name: 14-04.c
    Purpose: Exercise 14-04
    Author: NiceMan1337
    Date: 01.09.2022  */

#include <stdio.h>
#define AVG(x,y) (((x)+(y))/2)
#define AREA(x,y) ((x)*(y))
/*The problems were with the order of operations,
which will be wrong, wihout parentheses.*/

int main(void)
{
    printf("(a): %d\n", AVG(2, 2));
    printf("(b): %d\n", AREA(2, 2));

    return 0;
}