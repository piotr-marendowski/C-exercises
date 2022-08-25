/*  Name: p13-13.c
    Purpose: Caesar cipher translator.
    Author: NiceMan1337
    Date: 25.08.2022  */

#include <stdio.h>

void encrypt(char *message, int shift);

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

    encrypt(msg, n);

    return 0;
}

void encrypt(char *message, int shift)
{
    char *p = message;

    /*calculate and print encrypted message
    for uppercase
    and lowercase
    or other characters*/
    printf("Encrypted message: ");
    do {
        if (*p >= 'A' && *p <= 'Z')
            putchar(((*p - 'A') + shift) % 26 + 'A');
        else if (*p >= 'a' && *p <= 'z')
            putchar(((*p - 'a') + shift) % 26 + 'a');
        else
            putchar(*p);
    } while (*p++);

    printf("\n");
}