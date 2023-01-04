/*  Name: 6-9.c
    Purpose: Exercise 6-9.
    Author: Piotr Marendowski
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i = 10;

    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
    }

    return 0;
}