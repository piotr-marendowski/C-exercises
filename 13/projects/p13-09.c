/*  Name: p13-09.c
    Purpose: Vowels counter.
    Author: NiceMan1337
    Date: 24.08.2022  */

#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(void)
{ 
    /*declare variables*/
    char sentence[50];
    char *p = sentence;
    char ch;
    
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && p < sentence + 80)
        *p++ = ch;

    /*print the result*/
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int vowels = 0;
    const char *ch = sentence;

    /*count vowels in while loop*/
    while (*ch++)
    {
        switch (toupper(*ch))
        {
        case 'A':
            vowels++;
            break;
        case 'E':
            vowels++;
            break;
        case 'I':
            vowels++;
            break;
        case 'O':
            vowels++;
            break;
        case 'U':
            vowels++;
            break;
        default:
            break;
        }
    }

    return vowels;
}