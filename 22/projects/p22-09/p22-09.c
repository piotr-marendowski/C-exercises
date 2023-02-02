/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Merges two inventory files into one database
Modification date (DD/MM/YYYY): 02.02.2023
Files: inventory.dat inventory2.dat */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0; /* number of parts currently stored */

int main(int argc, char *argv[])
{
    int n1, n2;
    FILE *input1, *input2, *merge;
    struct part part1, part2;

    if (argc != 4)
    {
        fprintf(stderr, "usage: merge file1 file2 merge_file\n");
        exit(EXIT_FAILURE);
    }

    if ((input1 = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((input2 = fopen(argv[2], "rb")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    if ((merge = fopen(argv[3], "wb")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", argv[3]);
        exit(EXIT_FAILURE);
    }

    /* read first position in the first file */
    n1 = fread(&part1, sizeof(struct part), 1, input1);
    /* read first position in the second file */
    n2 = fread(&part2, sizeof(struct part), 1, input2);

    /* compare two structures - one record at the time - write record to merge, then move by
    one position in this file, do it again until any of the n won't write anything */
    while (n1 == 1 && n2 == 1)
    {
        /* if first < second - write input1 to merge, then store next record from input1 in n1*/
        if (part1.number < part2.number)
        {
            fwrite(&part1, sizeof(struct part), 1, merge);
            n1 = fread(&part1, sizeof(struct part), 1, input1);
        }
        /* if first > second - write input2 to merge, then store next record from input2 in n2*/
        else if (part1.number > part2.number)
        {
            fwrite(&part2, sizeof(struct part), 1, merge);
            n2 = fread(&part2, sizeof(struct part), 1, input2);
        }
        /* if both same - check if don't match, combine them, write to merge both */
        else {
            if (strcmp(part1.name, part2.name) != 0) {
                fprintf(stderr, "Names with same numbers don't match\n");
                exit(EXIT_FAILURE);
            }

            part1.on_hand += part2.on_hand;
            fwrite(&part1, sizeof(struct part), 1, merge);

            n1 = fread(&part1, sizeof(struct part), 1, input1);
            n2 = fread(&part2, sizeof(struct part), 1, input2);
        }
    }
    
    /* write to merge if any left */
    while (n1 == 1)
    {
        fwrite(&part1, sizeof(struct part), 1, merge);
        n1 = fread(&part1, sizeof(struct part), 1, input1);
    }

    while (n2 == 1)
    {
        fwrite(&part2, sizeof(struct part), 1, merge);
        n2 = fread(&part2, sizeof(struct part), 1, input2);
    }

    printf("Merging done!\n");
    fclose(input1);
    fclose(input2);
    fclose(merge);
    return 0;
}