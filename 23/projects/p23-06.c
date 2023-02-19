/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Adds '?' after non-printable character
Modification date (DD/MM/YYYY): 19.02.2023 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch;

    printf("Enter: ");
    while ((ch = getchar()) != EOF)
    {
        if (strchr("\a\b\f\r\t\v", ch) != NULL)
            putchar('?');
        else
            putchar(ch);
    }
    printf("\n");

    return 0;
}