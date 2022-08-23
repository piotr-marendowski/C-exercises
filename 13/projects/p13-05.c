/*  Name: p13-05.c
    Purpose: Sums command line argumments supplied by the user
    Author: NiceMan1337
    Date: 23.08.2022  */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;

    for (i = 1; i < argc; i++)
        sum += atoi(argv[i]);

    printf("Total: %d\n", sum);

    return 0;
}