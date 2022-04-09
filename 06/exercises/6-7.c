/*  Name: 6-7.c
    Purpose: Exercise 6-7.
    Author: NiceMan1337
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i;

    for (i = 9385; i > 0; i /= 10)
        printf("%d ", i);

    return 0;
}