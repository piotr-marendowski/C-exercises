/*  Name: p9-04.c
    Purpose: Modified project 16 from chapter 8.
    Author: Piotr Marendowski
    Date: 18.06.2022  */

#include <stdio.h>
/*for tolower and isalpha*/
#include <ctype.h>
#include <stdbool.h>

void read(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{ 
    /*declare variables*/
    int i, counts1[26] = {0}, counts2[26] = {0};

    /*ask user for word and call read_word*/
    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    /*print the result
    if any letter is not same, print not*/

    printf("The words are ");
    if (equal_array(counts1, counts2) == false)
        printf("not ");
    printf("anagrams.\n");
    
    return 0;
}

void read_word(int counts[26])
{
    int i;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        ch = tolower(ch);
        /*if ch is in alphabet*/
        if (isalpha(ch))
            counts[ch - 'a']++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;
    /*calculate whetever they are the same*/
    for (i = 0; i < 26; i++) {
        counts1[i] += counts2[i];
        if (counts1[i] == 1) {
            return false;
        }
    }
    return true;
}