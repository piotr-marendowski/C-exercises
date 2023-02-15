/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Removes white-spaces beside in-between words
Modification date (DD/MM/YYYY): 15.02.2023 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    bool can_copy = false;
    char ch;

    /* it will "mirror" string after every '\n' */
    printf("Enter: ");
    while ((ch = getchar()) != EOF)
    {
        if (can_copy)
            putchar(ch);
        else if (!isspace(ch))
        {
            can_copy = true;
            putchar(ch);
        }
        if (ch == '\n')
            can_copy = false;
    }

    return 0;
}