/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Concatenates files to stdout
Modification date (DD/MM/YYYY): 24.01.2022 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch, i = 1;
    FILE *fp;

    if (argc < 2) {
        fprintf(stderr, "usage: p22-03 file1 file2...\n");
        exit(EXIT_FAILURE);
    }

    for (; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "%s can't be opened\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        else {
            while ((ch = getc(fp)) != EOF)
                putchar(ch);
        }

        fclose(fp);
        printf("\n");
    }

    return 0;
}
