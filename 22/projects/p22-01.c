/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Extended canopen.c program from section 22.2
Modification date (DD/MM/YYYY): 24.01.2023 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 1;
    FILE *fp;

    if (argc < 2) {
        fprintf(stderr, "usage: canopen file1 file2...\n");
        exit(EXIT_FAILURE);
    }

    for (; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "%s can't be opened\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        else
            printf("%s can be opened\n", argv[i]);
    }

    fclose(fp);
    return 0;
}
