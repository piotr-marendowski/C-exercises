/*  Name: p7-11.c
    Purpose: Modified project 11 from chapter 7.
    Author: NiceMan1337
    Date: 26.05.2022  */

#include <stdio.h>

#define length (int) (sizeof(lastname) / sizeof(lastname[0]))

int main(void) {

    /*declare variables*/
    int i = 0;
    char ch, initial, lastname[20] = {0};

    /*ask for a name*/
    printf("Enter a first and last name: ");
    
    /*store initial and go on with a name*/
    initial = getchar();
    while ((ch = getchar()) != ' ')
        ;
    
    /*store last name in na array*/
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        lastname[i] = ch;
    }

    /*print the result*/
    printf("You entered a name: ");
    for (i = 0; lastname[i] != '\0'; i++) {
        putchar(lastname[i]);
    }
    printf(" %c.", initial);

    return 0;
}