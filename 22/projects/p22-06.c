/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Basically, my low-effort HexEditor, but only for files, and without edit abilities
Modification date (DD/MM/YYYY): 30.01.2022
Files: pun.c */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int hex, ch, offset = 0, offset_newline = 0, offset2 = 0, offset_newline2 = 0, first = 1;
    FILE *hexes, *chars;

    if (argc != 2) {
        fprintf(stderr, "usage: hexprint filename\n");
        exit(EXIT_FAILURE);
    }

    if ((hexes = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((chars = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Offset\t\t     Bytes\t\t Characters\n");
    printf("------  -----------------------------  ----------\n");

    while (hex != EOF && ch != EOF) {
        offset_newline = offset + 10;

        printf("%6d  ", offset);

        if (first == 0) {
            printf("%02x ", hex);
            offset_newline--;
        }

        /* print hex */
        while ((hex = getc(hexes)) != EOF)
        {
            if (offset == offset_newline) {
                break;
            }

            printf("%02x ", hex);
            offset++;
        }
        /* print chars - use offset again*/
        offset_newline2 = offset2 + 10;

        if (first == 0) {
            printf(" %c", ch);
            offset_newline2--;
        }
        else
            printf(" ");
        
        while ((ch = getc(chars)) != EOF)
        {
            if (offset2 == offset_newline2) {
                break;
            }

            printf("%c", isprint(ch) ? ch : '.');
            offset2++;
        }

        first = 0;
        printf("\n");
    }

    fclose(hexes);
    fclose(chars);
    return 0;
}