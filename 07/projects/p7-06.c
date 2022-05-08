/*  Name: p7-01.c
    Purpose: Prints the values of sizeof types.
    Author: NiceMan1337
    Date: 07.05.2022  */

#include <stdio.h>

int main(void)
{ 
    printf("%lu\n", (unsigned long) sizeof(int));
    printf("%lu\n", (unsigned long) sizeof(short));
    printf("%lu\n", (unsigned long) sizeof(long));
    printf("%lu\n", (unsigned long) sizeof(float));
    printf("%lu\n", (unsigned long) sizeof(double));
    printf("%lu\n", (unsigned long) sizeof(long double));

    return 0;
}