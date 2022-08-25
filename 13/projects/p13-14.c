/*  Name: p13-14.c
    Purpose: Check if two words are anagrams.
    Author: NiceMan1337
    Date: 25.08.2022  */

#include <stdio.h>
/*for tolower and isalpha*/
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{ 
    /*declare variables*/
    int i = 0;
    char ch, word1[26] = {0}, word2[26] = {0};

    /*ask for first word and count letters*/
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
    {
        word1[i] = tolower(ch);
        i++;
    }

    i = 0;
    /*ask for second word and count letters*/
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        word2[i] = tolower(ch);
        i++;
    }

    /*print the result
    if are_anagrams is false, then print not*/
    printf("The words are");
    printf(are_anagrams(word1, word2) ? " " : " not ");
    printf("anagrams.\n");
    
    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    /*in letters assign how many there are letters a - z
    then from second array subtruct correspodning letters
    if any are left then words aren't anagrams*/

    int letters[26] = {0};
    int *p = letters;

    while (*word1)
    {
        letters[*word1 - 'A']++;
        word1++;
    }

    while (*word2)
    {
        letters[*word2 - 'A']--;
        word2++;
    }

    while(*p) {
        if (*p > 0)
            return false;
        p++;
    }
    
    return true; 
}