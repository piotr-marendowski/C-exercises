/*  Name: p13-01.c
    Purpose: Ask user for words, then prints the largest
    and the smallest alphabetically
    Author: NiceMan1337
    Date: 22.08.2022  */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char smallest_word[20], largest_word[20], input[20];

    /* enter first word and assign as the lowest */
    printf("Enter word: ");
    scanf("%s", input);
    strcpy(smallest_word, input);
    
    /*loop ends when input has 4 letters*/
    for (;;)
    {
        printf("Enter word: ");
        scanf("%s", input);

        if (strlen(input) == 4)
            break;

        /* compare to smallest and largest if
           its less or greater then them      */
        if (strcmp(input, smallest_word) < 0)
            strcpy(smallest_word, input);
        
        if (strcmp(input, largest_word) > 0)
            strcpy(largest_word, input);
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}