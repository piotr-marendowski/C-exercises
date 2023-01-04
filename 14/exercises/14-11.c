/*  Name: 14-11.c
    Purpose: Exercise 14-11
    Author: Piotr Marendowski
    Date: 03.09.2022  */

#include <stdio.h>
#define ERROR(err, index) (printf("%s: index = %d\n", err, index))

int main(void)
{
    ERROR("Range error", 3);
    return 0;
}