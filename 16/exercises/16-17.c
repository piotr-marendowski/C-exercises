/*  Name: 16-17.c
    Purpose: Exercise 16-17
    Author: Piotr Marendowski
    Date: 02.10.2022  */

#include <stdio.h>

int main(void)
{
    enum {FALSE, TRUE} b;
    int i;

    /*All statements are legal*/
    /*(a)*/ b = FALSE;
    /*(b)*/ b = i;
    /*(c)*/ b++;
    /*(d)*/ i = b;
    /*(e)*/ i = 2 * b + 1;

    return 0;
}