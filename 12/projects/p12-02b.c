/*  Name: p12-02b.c
    Purpose: Reads characters and determines whatever
    the sentence is a palindrom
    (b) - pointer approach
    Author: Piotr Marendowski
    Date: 02.08.2022  */

#include <stdio.h>
#include <ctype.h> /*for isalpha*/

#define N 30

int main(void) {

    char msg[N];
    char c, *p = msg, *q;

    printf("Enter a message: ");

    while ((c = getchar()) != '\n') {
        if (isalpha(c))
            *p++ = c;
    }

    p--;

    for (q = msg; q < p; q++, p--) {
        if (*p != *q) {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}