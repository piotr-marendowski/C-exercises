/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 10
Modification date (DD/MM/YYYY): 23.01.2022 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    int ch;

    if (argc != 3) {
        fprintf(stderr, "usage: fcopy source dest\n");
        exit(EXIT_FAILURE);
    }

    if ((source_fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((dest_fp = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        fclose(source_fp);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source_fp)) != EOF) {
        if (putc(ch, dest_fp) == EOF) {
            fprintf(stderr, "Can't write to %s\n", argv[2]);
            exit(EXIT_FAILURE);
        }
    }

    fclose(source_fp);
    fclose(dest_fp);
    return 0;
}
