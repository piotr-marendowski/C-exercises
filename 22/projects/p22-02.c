/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Converts all letters in a file to uppercase, output to stdout
Modification date (DD/MM/YYYY): 24.01.2023 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int ch = 0;
    FILE *fp;

    if (argc != 2)
    {
        fprintf(stderr, "usage: p22-02 file\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /* read char after char */
    while ((ch = getc(fp)) != EOF)
    {
        if (isalpha(ch))
            putchar(toupper(ch));
        else
            putchar(ch);
    }

    fclose(fp);
    return 0;
}
