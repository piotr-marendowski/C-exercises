/*  Name: p12-01a.c
    Purpose: Reads characters and prints it in reverse order
    (a) - integer approach
    Author: Piotr Marendowski
    Date: 01.08.2022  */

#include <stdio.h>

#define N 20

int main(void)
{
    int i = 0;
    char ch, msg[N];

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
        msg[i++] = ch;

    printf("Revelsal is: ");
    for (; i >= 0; i--)
        printf("%c", msg[i]);

    return 0;
}