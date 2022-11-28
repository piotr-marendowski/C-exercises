/* License: BSD-3-Clause license
Author: Piotr Marendowski, based on program made by K.N. King
Purpose: Reads a word
Modification date (DD/MM/YYYY): 28.11.2022 */

#include <stdio.h>
#include "word.h"

int read_char(void)
{
    int ch = getchar();

    if (ch == '\n' || ch == '\t')
        return ' ';
    return ch;
}

void read_word(char *word, int len)
{
    int ch, pos = 0;

    while ((ch != ' ' && ch != EOF)) {
        if (pos < len)
            word[pos++] = ch;
        ch = read_char();
    }
    word[pos] = '\0';
}