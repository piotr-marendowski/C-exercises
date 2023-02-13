/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 10
Modification date (DD/MM/YYYY): 13.02.2022 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 3;
    char str[] = "Hello world!";

    /* start from length - n (13 - 3) */
    memset(&str[strlen(str) - n], '!', n);
    printf("%s\n", str);

    return 0;
}