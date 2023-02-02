/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Modified xor.c program, for command-line arguments 
Modification date (DD/MM/YYYY): 30.01.2023
Files: test.txt - original file, test_encrypted.bin, test_decrypted.txt */

#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
    int orig_char, new_char;
    FILE *orig_file, *output_file;

    if (argc != 3) {
        fprintf(stderr, "usage: xor file-orignal file-output\n");
        exit(EXIT_FAILURE);
    }

    if ((orig_file = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((output_file = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((orig_char = getc(orig_file)) != EOF) {
        new_char = orig_char ^ KEY;
        putc(new_char, output_file);
    }

    fclose(orig_file);
    fclose(output_file);
    return 0;
}