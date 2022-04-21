/*  Name: length.c
    Purpose: Determines the length of a message.
    Author: K.N. King
    Date: 21.04.2022  */

#include <stdio.h>

int main(void)
{
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        len++;
        ch = getchar();
    }
    printf("Your message was %d character(s) long.\n", len);
    
    return 0;
} 