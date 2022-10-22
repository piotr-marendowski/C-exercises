/*  Name: p8-15.c
    Purpose: Caesar cipher translator.
    Author: Piotr Marendowski
    Date: 29.05.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/ 
    int i = 0, n;
    char msg[80] = {0}, ch;

    /*ask for a message and shift number*/
    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n' && i < 80; i++) {
        msg[i] = ch;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    /*calculate and print encrypted message
    for uppercase
    and lowercase
    or other characters*/
    printf("Encrypted message: ");
    for (i = 0; msg[i] != '\0'; i++) {
        if (msg[i] >= 'A' && msg[i] <= 'Z') {
            putchar(((msg[i] - 'A') + n) % 26 + 'A');
        }
        else if (msg[i] >= 'a' && msg[i] <= 'z') {
            putchar(((msg[i] - 'a') + n) % 26 + 'a');
        }
        else {
            putchar(msg[i]);
        }
    }
    
    printf("\n");

    return 0;
}