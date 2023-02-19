/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Counts sentences (which end with '.', '?', or '!')
Modification date (DD/MM/YYYY): 19.02.2023 */

#include <stdio.h>
#include <string.h> /* strchr */
#include <ctype.h>  /* isspace */

int main(void)
{
    char c, d = '\0';
    int count;

    while ((c = getchar()) != EOF)
    {
        if (strchr(".?!", d) != NULL && isspace(c))
            count++;
        d = c;
    }

    printf("Number of sentences: %d\n", count);

    return 0;
}