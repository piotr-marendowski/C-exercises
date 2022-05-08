/*  Name: p7-05.c
    Purpose: SCRABBLE points counting.
    Author: NiceMan1337
    Date: 07.05.2022  */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    /*declare variables*/ 
    char ch;
    int val;

    /*ask user for a word*/
    printf("Enter a word: ");

    /*calculate every letter and add it's value to the score*/
    while ( (ch = getchar()) != '\n') {
        ch = toupper(ch);
        switch (ch)
        {
        case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': 
            val += 1;
            break;
        case 'D': case 'G':
            val += 2;
            break;
        case 'B': case 'C': case 'M': case 'P': 
            val += 3;
            break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            val += 4;
            break;
        case 'K': 
            val += 5;
            break;
        case 'J': case 'X': 
            val += 8;
            break;
        case 'Q': case 'Z': 
            val += 10;
            break;
        default:
            break;
        }
    }
    
    /*print out the result*/
    printf("Scrabble value: %d\n", val);

    return 0;
}