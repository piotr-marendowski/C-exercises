/*  Name: p13-04.c
    Purpose: Reverses order of command line argumments
    supplied by the user
    Author: NiceMan1337
    Date: 23.08.2022  */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for (i = argc - 1; i > 0; i--)
        printf("%s ", argv[i]);
    printf("\n");

    return 0;
}