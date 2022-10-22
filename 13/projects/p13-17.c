/*  Name: p13-17.c
    Purpose: Reads characters and determines whatever
    the sentence is a palindrome
    (b) - pointer approach
    Author: Piotr Marendowski
    Date: 26.08.2022  */

#include <stdio.h>
#include <ctype.h> /*for isalpha*/
#include <stdbool.h>

#define N 30

bool is_palindrome(const char *message)
{
    char *q = message;
    /*- 1 because we need last character, not null*/
    char *p = message + (strlen(message) - 1);

    for (; q < p; q++, p--)
    {
        if (*p != *q) {
            return false;
        }
    }
    return true;
}

int main(void)
{
    char msg[N];
    char c, *p = msg, *q;

    printf("Enter a message: ");

    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            *p++ = c;
    }

    if (!is_palindrome(msg))
        printf("Not a ");
    
    printf("palindrome\n");

    return 0;
}