/*  Name: p12-05.c
    Purpose: Reverses words in sentences using arrays.
    Modified for use of pointers.
    Author: Piotr Marendowski
    Date: 02.08.2022  */

#include <stdio.h>

#define MAX_VALUE 100

int main(void) {

    char c, *p, *q,
         terminating_char,
         words[MAX_VALUE] = {0};

    printf("Enter a sentence: ");
    for (p = words; (c = getchar()) != '\n' && p < words + MAX_VALUE; p++) {
        if (c == '.' || c == '!' || c == '?') {
            terminating_char = c;
            break;
        }
        *p = c;
    }

    printf("Reversal of sentence: ");
    while (p >= words) {
        while (*--p != ' ' && p != words)
            ;
        q = p == words ? words : p + 1;
        while (*q != ' ' && *q != '\0')
            putchar(*q++);
        if (p >= words)
            putchar(' ');
    }

    printf("\b%c\n", terminating_char);

    return 0;
}
