/*  Name: p7-10.c
    Purpose: Vowels counter.
    Author: Piotr Marendowski
    Date: 11.05.2022  */

#include <stdio.h>
#include <ctype.h>

int main(void)
{ 
    /*declare variables*/
    int vowels = 0;
    char ch;
    
    printf("Enter a sentence: ");

    /*count vowels in while loop*/
    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
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
    
    /*print the result*/
    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}