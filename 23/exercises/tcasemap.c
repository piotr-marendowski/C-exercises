/* Author: K.N. King
Purpose: Tests the case-mapping functions
Modification date (DD/MM/YYYY): 09.02.2022 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char *p;

    for (p = "aA0!"; *p != '\0'; p++) {
        printf("tolower('%c') is '%c'; ", *p, tolower(*p));
        printf("toupper('%c') is '%c';\n", *p, toupper(*p));
    }

    return 0;
}