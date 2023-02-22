/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Checks whether compiler's native locale
is the same as its "C" locale
Modification date (DD/MM/YYYY): 21.02.2023 */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    char *c_locale = setlocale(LC_ALL, NULL);
    char *locale = setlocale(LC_ALL, "");

    if (strcmp(c_locale, locale) == 0)
        printf("Current locale is same as \"C\" locale.\n");
    else
        printf("Current locale is different than \"C\" locale.\n");

    return 0;
}