/*  Name: p13-11.c
    Purpose: Counts average word length in a sentence.
    Author: NiceMan1337
    Date: 25.08.2022  */

#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void)
{
    /*declare variables*/
    char sentence[50] = "";
    int i = 0;

    /*ask for a sentence*/
    printf("Enter a sentence: ");
    while((sentence[i++] = getchar()) != '\n')
        ;

    /*print the result*/
    printf("Average word length: %.1f\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int len = 0, count = 0;
    const char *p = sentence;

    while (*p++)
    {
        len++;
        if (*p == ' ')
            count++;
    }

    /*calculate average length of words
    and add 1 to count, because word didn't end with space*/
    count++;
    len -= count;
    return (double) len / count;
}