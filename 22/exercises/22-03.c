/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 3
Modification date (DD/MM/YYYY): 22.01.2022 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Cannot open %s\n", filename);
        exit(EXIT_FAILURE);
    } else {
        /* read characters */
    }

    fclose(fp);

    return 0;
}