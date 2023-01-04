/*  Name: p7-11.c
    Purpose: Displays name differently.
    Author: williamgherman
    Date: 11.05.2022  */

#include <stdio.h>

int main(void) {

    char c, initial;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);
    
    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) == ' ')
        ;

    do {
        putchar(c);
    } while ((c = getchar()) != '\n' && c != ' ');

    printf(", %c.\n", initial);

    return 0;
}

/*Description:
Solution from williamgherman/c-solutions
I couldn't get the logic behind dummy getchar*/