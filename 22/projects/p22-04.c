/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: counts number of: (a) characters, (b) words, (c) lines in file
Modification date (DD/MM/YYYY): 24.01.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count_chars(FILE *stream);
int count_words(FILE *stream);
int count_lines(FILE *stream);

int main(int argc, char *argv[])
{
    FILE *fp;
    int chars, words, lines;

    if (argc != 2) {
        fprintf(stderr, "usage: p22-04 file\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /* Its basically can't use one stream for all functions,
    because it reads word by word, untill EOF, then this "pointer" stays there. */
    chars = count_chars(fp);

    words = count_words(fp);

    lines = count_lines(fp);

    printf("Number of:\n(a) characters: %d\n(b) words: %d\n(c) lines: %d\n", chars, words, lines);

    fclose(fp);
return 0;
}

int count_chars(FILE *stream)
{
    int n = 0;

    while (getc(stream) != EOF)
        n++;

    return n;
}

int count_words(FILE *stream)
{
    int n = 0, ch, i = 0;
    /* go at the beginning because every function
    goes one character at the time until EOF, and stays there */
    fseek(stream, 0L, SEEK_SET);

    while ((ch = getc(stream)) != EOF) {
        /* char counter, in case of spaces at start */
        if (!isspace(ch))
            i++;                
        /* if word ends, increment n and zero i */
        if (isspace(ch) && i != 0) {
            n++;
            i = 0;
        }
    }

    return n;
}
int count_lines(FILE *stream)
{
    int n = 0, ch;
    /* go at the beginning because every function
    goes one character at the time until EOF, and stays there */
    fseek(stream, 0L, SEEK_SET);

    while ((ch = getc(stream)) != EOF) {
        if (ch == '\n')
            n++;
    }

    return n;
}