/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 2
Modification date (DD/MM/YYYY): 25.02.2023 */

#include <stdio.h>
#include <stdarg.h>

/* doesn't work for negative numbers
William Gherman has it covered */
void my_printf(char *format, ...)
{
    va_list ap;
    int n;
    
    /* start after format */
    va_start(ap, format);

    while (*format)
    {
        /* if n is '%' and next is 'd' */
        if (*format == '%' && *(format + 1) == 'd')
        {
            n = va_arg(ap, int);

            /* if number has more than one character */
            if ((n / 10) != 0)
            {
                while (n)
                {
                    /* go digit by digit */
                    n /= 10;
                    /* in order to "convert" int to char, we simply need
                    to add '0', refer to the ASCII table */
                    putchar((n % 10) + '0');
                }
            }
            else
                putchar(n + '0');

            format++;
        }
        else
            putchar(*format);
        
        format++;
    }
    printf("\n");
    
    va_end(ap);
}

int main(void)
{
    int n1 = 20, n2 = 2;

    my_printf("Number 1: %d, number 2: %d", n1, n2);

    return 0;
}