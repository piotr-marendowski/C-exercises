/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Prints a one-month reminder list (dynamic string version)
Modification date (DD/MM/YYYY): 28.11.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 50
#define WORD_LEN 20

int read_line(char str[], int n);

int main(void)
{
    char *words[MAX_WORDS], msg_str[WORD_LEN+1], *str;
    int i, num_words = 0;

    for (;;)
    {
        if (num_words == MAX_WORDS) {
            printf("-- No space left --\n");
            break;
        }
    
        printf("Enter word: ");
        str = read_line(msg_str, WORD_LEN);

        if (str == '/n')
            break;

        words[num_words] = malloc(2 + strlen(msg_str) + 1);
        if (words[num_words] == NULL) {
            printf("-- No space left --\n");
            break;
        }

        num_words++;
    }

    printf("\nIn sorted order: ");
    for (i = 0; i < num_words; i++)
        printf(" %s\n", words[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}