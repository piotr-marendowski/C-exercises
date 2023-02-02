/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 13
Modification date (DD/MM/YYYY): 23.01.2023 */

#include <stdio.h>
#include <stdlib.h>

int line_length(const char *filename, int n)
{
    FILE *fp;
    int length = 0, lines = 0, ch;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Can't open file %s\n", filename);
        return 0;
    }

    while((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
            lines++;
        if (n == lines)
            length++;
    }

    fclose(fp);
    return length;
}

int main(int argc, char *argv[])
{
    const char *filename = argv[1];
    int n = 2;

    if (argc != 2) {
        fprintf(stderr, "usage: 22-13 filename\n");
        exit(EXIT_FAILURE);
    }

    printf("Length of line %d: %d\n", n, line_length(filename, n));

    return 0;
}
