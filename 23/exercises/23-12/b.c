/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 12b
Modification date (DD/MM/YYYY): 14.02.2022 */

#include <stdio.h>
#include <ctype.h>

int stricmp(char *str1, char *str2)
{
    /*while (tolower(*str1) && (*str1 == tolower(*str2)))
    {
        str1++;
        str2++;
    }
    
    Or one-liner: */
    for (; tolower(*str1) && (*str1 == tolower(*str2)); str1++, str2++)
        ;

    return *str1 - *str2;
}

int main(void)
{
    char str1[] = "Hello world!";
    char str2[] = "Hello World!";

    printf("Are they same?: ");
    stricmp(str1, str2) == 0 ?
     printf("Yes\n") : printf("No\n");

    return 0;
}