/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 12
Modification date (DD/MM/YYYY): 23.01.2023 */

#include <stdio.h>

int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0;
    char c;

    if ((fp = fopen(filename, "r")) != NULL) {
        while ((c = fgetc(fp)) != EOF)
            if (c == '.')
                n++;
        fclose(fp);
    }
    return n;
}

int main(void)
{
    /*
    Remember that if statements execute call as well,
    we need to delete one fgetc to test period and EOF
    all of the characters.
    */

    return 0;
}
