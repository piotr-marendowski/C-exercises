/*  Name: 8-02.c
    Purpose: Exercise 8-2.
    Author: Piotr Marendowski
    Date: 15.05.2022  */

#include <stdio.h>

int main(void)
{     
    char ch = '10';
    char digit_count[2];
    if (digit_count[ch - '0'] == digit_count[10]) {
        printf("True\n");
    }

    return 0;
}