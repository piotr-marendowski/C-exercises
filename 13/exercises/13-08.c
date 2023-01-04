/*  Name: 13-08.c
    Purpose: Exercise 13-08
    Author: Piotr Marendowski
    Date: 18.08.2022  */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];

    strcpy(str, "tire-bouchon");
    strcpy(&str[4], "d-or-wi");
    strcat(str, "red?");

    puts(str);

    return 0;
}