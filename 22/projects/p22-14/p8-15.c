/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Encrypts message with Caesar cipher
Modification date (DD/MM/YYYY): 06.02.2023
Files: data.txt */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{     
    FILE *input, *output;
    int i = 0, n;
    char filename[20], ch; 

    printf("Enter name of file to be encrypted: ");
    scanf("%s", filename);

    if ((input = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", filename);
        exit(EXIT_FAILURE);
    }

    /* make a new file, add .enc to filename of input file */
    char * restrict output_name = malloc(strlen(filename) + 5);
    strcpy(output_name, filename);
    strcat(output_name, ".enc");

    if ((output = fopen(output_name, "w")) == NULL)
    {
        fprintf(stderr, "File %s cannot be written\n", output);
        exit(EXIT_FAILURE);
    }
    free(output_name);
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    /* calculate and write encrypted message to output */
    while ((ch = getc(input)) != EOF)
    {
        /* for uppercase */
        if (ch >= 'A' && ch <= 'Z') {
            putc(((ch - 'A') + n) % 26 + 'A', output);
        }
        /* and lowercase */
        else if (ch >= 'a' && ch <= 'z') {
            putc(((ch - 'a') + n) % 26 + 'a', output);
        }
        /* or other characters */
        else {
            putc(ch, output);
        }
    }
    
    fclose(input);
    fclose(output);
    return 0;
}