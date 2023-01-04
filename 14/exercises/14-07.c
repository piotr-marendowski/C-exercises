/*  Name: 14-07.c
    Purpose: Exercise 14-07
    Author: Piotr Marendowski
    Date: 03.09.2022  */

#include <stdio.h>
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

int main(void)
{
    printf("(a): GENERIC_MAX(long) changes all occurrences of type to long.\n");
    printf("(b): Because they have space in name, thus Unsigned and Int are identified as different tokens.\n");
    printf("(c): You can define type with name without spaces in place of Unsigned types.");
    return 0;
}