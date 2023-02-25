/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 6
Modification date (DD/MM/YYYY): 25.02.2023 */

#include <stdio.h>
#include <stdarg.h>

char *max_pair(int num_pairs, ...)
{
    va_list ap;
    int i, current, largest;

    va_start(ap, num_pairs);
    largest = num_pairs;

    /* first for searching */
    for (i = 1; i < num_pairs; i++)
    {
        current = va_arg(ap, int);
        if (current > largest)
            largest = current;
        
        va_arg(ap, char *);
    }
    va_end(ap);

    /* search for largest */
    va_start(ap, num_pairs);
    for (i = 1; i < num_pairs; i++)
    {
        current = va_arg(ap, int);

        if (current == largest)
            break;
        else
            va_arg(ap, char *);
    }
    
    va_end(ap);
    return va_arg(ap, char *);
}

int main(void)
{
    printf("Name: %s\n", max_pair(5, 180, "Seinfeld",
                                     180, "I Love Lucy",
                                     39, "The Honeymooners",
                                     210, "All in the Family",
                                     86, "The Sopranos"));
                            
    printf("\n");
    
    return 0;
}