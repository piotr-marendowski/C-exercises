/* License: BSD-3-Clause license
Author: William Gherman, Piotr Marendowski
Purpose: Exercise 5
Modification date (DD/MM/YYYY): 25.02.2023 */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

char *vstrcat(const char *first, ...)
{
    char *res, *p;
    int len = 0;
    va_list ap;
    
    va_start(ap, first);
    while ((p = va_arg(ap, char *)) != ((char *) NULL))
        len += strlen(p);
    len++;
    if ((res = malloc(len)) == NULL)
    {
        va_end(ap);
        return NULL;
    }

    va_end(ap);
    va_start(ap, first);
    strcpy(res, va_arg(ap, char *));

    while ((p = va_arg(ap, char *)) != ((char *) NULL))
        strcat(res, p);
    
    va_end(ap);
    return res;
}

int main(void)
{
    printf("String: %s\n", vstrcat("Hello", " ", "world!", (char *)NULL));
    
    return 0;
}