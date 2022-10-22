/*  Name: 6-1.c
    Purpose: Exercise 6-1.
    Author: Piotr Marendowski
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    } 

    return 0;
}