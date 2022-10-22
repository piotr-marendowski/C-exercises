/*  Name: p13-08.c
    Purpose: SCRABBLE points counting.
    Author: Piotr Marendowski
    Date: 24.08.2022  */

#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void)
{
    /*declare variables*/ 
    char word[20];

    /*ask user for a word*/
    printf("Enter a word: ");
    scanf("%s", word);

    printf("Scrabble value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    char *ch = word;
    int val = 0;

    /*calculate every letter and add it's value to the score*/
    while (*ch++) {
        *ch = toupper(*ch);
        switch (*ch)
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

    return val;
}