/* License: BSD-3-Clause license
Author: K.N. King, Piotr Marendowski
Purpose: Modified justify program from section 15.3
Modification date (DD/MM/YYYY): 07.02.2023
Files: line.c line.h word.c word.h Makefile quote.txt */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
    FILE *input, *output;
    char word[MAX_WORD_LEN+2];
    int word_len;

    if (argc != 3)
    {
        fprintf(stderr, "usage: justify input_file output_file\n");
        exit(EXIT_FAILURE);
    }

    if ((input = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((output = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    clear_line();
    for (;;) {
        read_word(word, MAX_WORD_LEN+1, input);
        word_len = strlen(word);
        if (word_len == 0) {
            flush_line(output);
            break;
        }
        if (word_len > MAX_WORD_LEN)
            word[MAX_WORD_LEN] = '*';
        if (word_len + 1 > space_remaining()) {
            write_line(input);
            clear_line();
        }
        add_word(word);
    }

    fclose(input);
    fclose(output);
    return 0;
}