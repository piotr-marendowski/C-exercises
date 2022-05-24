/*  Name: p8-11.c
    Purpose: Modified project 4 from chapter 7.
    Author: NiceMan1337
    Date: 24.05.2022  */

#include <stdio.h>
#define length (int) (sizeof(number) / sizeof(number[0]))

int main(void)
{ 
    /*declare variables*/
    int i;
    char c, number[15] = {' '};

    /*store the number*/
    printf("Enter phone number: ");
    while ((c = getchar()) != '\n' && i < 15) {
        switch (c) {
            case 'A': case 'B': case 'C':
                number[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                number[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                number[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                number[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                number[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                number[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                number[i] = '8';
                break;
            case 'W': case 'X': case 'Y':
                number[i] = '9';
                break;
            default:
                number[i] = c;
                break;
        }
        i++;
    }

    /*print from array*/
    for (i = 0; i < length; i++) {
        putchar(number[i]);
    } 
    printf("\n");
    
    return 0;
}

/*Descritpion:
By default all of array are spaces, so if number
is less than 15, you'll see spaces a.k.a nothing
also see what williamgherman did */