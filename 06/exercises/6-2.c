/*  Name: 6-2.c
    Purpose: Exercise 6-2.
    Author: NiceMan1337
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    return 0;
}