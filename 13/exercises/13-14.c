/*  Name: 13-14.c
    Purpose: Exercise 13-14
    Author: Piotr Marendowski
    Date: 19.08.2022  */

#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);

    return 0;
}