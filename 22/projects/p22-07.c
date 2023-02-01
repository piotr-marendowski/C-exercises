/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Compresses and uncompresses files
Modification date (DD/MM/YYYY): 01.02.2022
Files: test.txt test.txt.rle test.txt
Don't ask about these restricts, please.
So proud about this one, but oh boy how long it took :/ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *compress(FILE* stream, char * restrict filename);
FILE *uncompress(FILE *stream, char * restrict filename);

int main(int argc, char *argv[])
{
    int operation;
    FILE *input, *output;

    if (argc != 2) {
        fprintf(stderr, "usage: compression_prog filename\n");
        exit(EXIT_FAILURE);
    }

    if ((input = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Operations:\n1: compression\n2: uncompression\nEnter: ");
    scanf("%d", &operation);

    if (operation == 1)
        output = compress(input, argv[1]);
    else if (operation == 2)
        output = uncompress(input, argv[1]);
    else {
        fprintf(stderr, "Choose operation 1 or 2\n");
        exit(EXIT_FAILURE);
    }

    fclose(input);
    fclose(output);
    return 0;
}

FILE *compress(FILE* stream, char * restrict filename)
{
    int bytes_read, num = 0, i = 0;
    FILE *output_file;
    unsigned char bytes[255], byte;

    /* make a new file, add .rle to filename of input file */
    char * restrict output_name = malloc(strlen(filename) + 5);
    strcpy(output_name, filename);
    strcat(output_name, ".rle");

    if ((output_file = fopen(output_name, "wb")) == NULL)
    {
        fprintf(stderr, "File %s cannot be written\n", output_name);
        exit(EXIT_FAILURE);
    }
    free(output_name);

    /* compress 255 bytes at one time */
    while ((bytes_read = fread(bytes, sizeof(bytes[0]), 255, stream)) > 0)
    {
        /* check quantity go byte-by-byte and check if its same, num = how many
        then write number, and character to the file */
        while (i < bytes_read) {
            byte = bytes[i];
            for (; bytes[i] == byte; num++, i++)
                ;
            putc(num, output_file);
            putc(byte, output_file);
            num = 0;
        }
    }

    printf("Done!\n");
    return output_file;
}

FILE *uncompress(FILE *stream, char * restrict filename)
{
    int bytes_read, num, i = 0;
    FILE *output_file;
    unsigned char bytes[255], byte;

    /* make a new file, delete "rle'\0'" and add '\0' at the end */
    char * restrict output_name = malloc(strlen(filename) - 4);
    strncpy(output_name, filename, strlen(filename) - 4);

    if ((output_file = fopen(output_name, "wb")) == NULL)
    {
        fprintf(stderr, "File %s cannot be written\n", output_name);
        exit(EXIT_FAILURE);
    }
    free(output_name);

    /* uncompress 255 bytes at one time */
    while ((bytes_read = fread(bytes, sizeof(bytes[0]), 255, stream)) > 0)
    {
        /* go byte-by-byte and check if its same, num = how many
        then write number, and character to the file */
        while (i < bytes_read) {
            num = bytes[i];
            byte = bytes[i + 1];
            for (; num != 0; num--)
                putc(byte, output_file);
            i += 2;
        }
    }

    printf("Done!\n");
    return output_file;
}