/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 8
Modification date (DD/MM/YYYY): 13.02.2022 */

#include <stdio.h>
#include <string.h>

#define LETTER 'o'

/* Returns number of same letter in an array */
int numchar(const char *str, char ch)
{
    int n = 0;

    /* get first occurence,
    then increment n while str != NULL,
    remember that strchr returns pointer to occurence
    or a NULL pointer othrewise, so it won't
    go char-by-char, but occurence-by-occurence */
    str = strchr(str, ch);
    while (str)
    {
        n++;
        str = strchr(str + 1, ch);
    }

    return n;
}

int main(void)
{
    char *str = "Lorem ipsum dolor sit amet";
    printf("Occurences: %d\n", numchar(str, LETTER));

    return 0;
}