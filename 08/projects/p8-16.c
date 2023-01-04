/*  Name: p8-16.c
    Purpose: Check if two words are anagrams.
    Author: Piotr Marendowski
    Date: 31.05.2022  */

#include <stdio.h>
/*for tolower and isalpha*/
#include <ctype.h>

int main(void)
{ 
    /*declare variables*/
    int i, word[26] = {0};
    char ch;

    /*ask for first word and count letters*/
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        /*if ch is in alphabet*/
        if (isalpha(ch)) {
            word[ch - 'a']++;
        }
    }

    /*ask for second word and "uncount" letters in array*/
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        /*if ch is in alphabet*/
        if (isalpha(ch)) {
            word[ch - 'a']--;
        }
    }

    /*print the result
    if any letter is not same, print not and break*/
    printf("The words are ");
    for (i = 0; i < 26; i++) {
        if (word[i] > 0) {
            printf("not ");
            break;
        }
    }
    printf("anagrams.\n");
    
    return 0;
}