/* License: BSD-3-Clause license
Author: K.N. King, Piotr Marendowski
Purpose: Modified version of fcopy program from section 22.4
Modification date (DD/MM/YYYY): 07.02.2023 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    int bytes_read;
    char buf[512];

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

    /* We are copying one block (one call of fread/fwrite), which is
    size of one char (one element), and there are 512 elements in this block. */
    while ((bytes_read = fread(buf, sizeof(char), 512, source_fp)) > 0)
        fwrite(buf, sizeof(char), bytes_read, dest_fp);

    fclose(source_fp);
    fclose(dest_fp);
    return 0;
}
