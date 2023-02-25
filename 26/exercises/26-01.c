/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 1
Modification date (DD/MM/YYYY): 25.02.2023 */

#include <stdio.h>
#include <stdarg.h>

int max_int(int n, ...)     /* n must be at least 1 */
{
    va_list ap;
    int i, current, largest;

    va_start(ap, n);
    largest = n;

    for (i = 1; i < n; i++) {
        current = va_arg(ap, int);
        if (current > largest)
            largest = current;
        if (current == 0)
            break;
    }
    
    va_end(ap);
    return largest;
}

int main(void)
{
    int n1 = 10, n2 = 30, n3 = 20, n4 = 0;

    printf("Largest: %d\n", max_int(n1, n2, n3, n4));
    
    return 0;
}