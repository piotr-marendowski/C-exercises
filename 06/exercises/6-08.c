/*  Name: 6-8.c
    Purpose: Exercise 6-8.
    Author: NiceMan1337
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i;

    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);

    return 0;
}