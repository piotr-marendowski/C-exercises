/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Displays numbers in standard format
Modification date (DD/MM/YYYY): 07.02.2023 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int n1, n2, n3;     /* 1/3 of number */
    char str[20];

    if (argc != 2) {
        fprintf(stderr, "usage: printf_numbers file\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(str, sizeof(str), fp) != NULL)
    {
        /* get items */
        sscanf(str, "%d%*[-/). ]%d%*[-/. ]%d", &n1, &n2, &n3);
         /* print items */
        printf("(%d) %d-%d\n", n1, n2, n3);
        /* for working version go to williamgherman,
        I thought I could make it work with sscanf and ifs, but with
        little-to-no results */
    }

    fclose(fp);
    return 0;
}

