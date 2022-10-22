/*  Name: 13-03.c
    Purpose: Exercise 13-03
    Author: Piotr Marendowski
    Date: 10.08.2022  */

#include <stdio.h>

int main(void)
{
    int i, j;
    char s[10];

    scanf("%d%s%d", &i, s, &j);

    printf("i: %d s: %s j: %d\n", i, s, j);

    return 0;
}