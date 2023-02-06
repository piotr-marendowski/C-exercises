/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Lists items from a file
Modification date (DD/MM/YYYY): 06.02.2023
Files: data.txt */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i = 0, item, d, m, y;
    float price;
    FILE *fp;
    char str[30];           /* item,price,mm/dd/yyyy*/

    if (argc != 2)
    {
        fprintf(stderr, "usage: list-items file\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /* read and print line by line
    fgets returns a NULL pointer if encounters an error in reading (EOF too)*/
    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        /* get items */
        sscanf(str, "%d,%f,%2d/%2d/%4d",
                     &item, &price, &m, &d, &y);
        /* print items
        -11d = left justify 11 places to &,
        %6.2f = value can have max 6 places (including dot sign)
        %#02d = if value have less than specified in minimum field width (..2.),
        replace emptiness with flag (in this case 0) */
        printf("%-11d $ %6.2f    %#02d/%#02d/%#04d\n",
                item, price, m, d, y);
        /* empty a string */
        strcpy(str, "");
    }

    fclose(fp);
    return 0;
}
