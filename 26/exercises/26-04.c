/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 4
Modification date (DD/MM/YYYY): 25.02.2023 */

#include <stdio.h>
#include <stdarg.h>

void display(int n, ...)
{
    va_list ap;
    int i = 1;
    char *str;
    
    va_start(ap, n);

    while (i <= 4)
    {
        str = va_arg(ap, char *);

        while (*str)
            putchar(*str++);

        printf(" ");
        i++;
    }
    
    printf("\n");
    va_end(ap);
}

int main(void)
{
    display(4, "Special", "Agent", "Dale", "Cooper");
    
    return 0;
}