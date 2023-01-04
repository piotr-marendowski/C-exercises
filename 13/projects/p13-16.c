/*  Name: p13-16.c
    Purpose: Reads characters and prints it in reverse order
    (b) - pointer approach
    Author: Piotr Marendowski
    Date: 26.08.2022  */

#include <stdio.h>
#include <string.h>

#define N 30

void reverse(char *message)
{
    char *p1 = message, temp;
    /*- 1 because we need last character, not null*/
    char *p2 = message + (strlen(message) - 1);

    while (p1 < p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
    printf("Reversal is: %s\n", message);
}

int main(void)
{
    char msg[N];
    char c, *p = msg;

    printf("Enter a message: ");

    while ((c = getchar()) != '\n')
        *p++ = c;
    
    reverse(msg);

    return 0;
}