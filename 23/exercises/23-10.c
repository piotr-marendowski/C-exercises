/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 10
Modification date (DD/MM/YYYY): 13.02.2022 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "bazHello fooworldbar";

    /* will display 'there are' if there are
    "foo", "bar", or "baz" in str */
    if (strstr(str, "foo\0bar\0baz"))
        printf("There are\n");

    return 0;
}