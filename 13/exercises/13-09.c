/*  Name: 13-09.c
    Purpose: Exercise 13-09
    Author: NiceMan1337
    Date: 18.08.2022  */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20], s2[20];

    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2,s1);
    s1[strlen(s1)-6] = '\0';

    puts(s1);

    return 0;
}