/*  Name: 6-6.c
    Purpose: Exercise 6-6.
    Author: NiceMan1337
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i;

    for (i = 1; i <= 128; i*=2)
        printf("%d ", i);

    return 0;
}