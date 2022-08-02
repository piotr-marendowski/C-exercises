/*  Name: p12-03.c
    Purpose: Reads characters and prints it in reverse order
    (b) - pointer approach
    Author: NiceMan1337
    Date: 02.08.2022  */

#include <stdio.h>

#define N 30

int main(void)
{
    char msg[N];
    char c, *p = msg;

    printf("Enter a message: ");

    while ((c = getchar()) != '\n')
        *p++ = c;

    p--;
    printf("Reversal is: ");

    for (; p >= msg; p--)
        printf("%c", *p);

    printf("\n");

    return 0;
}