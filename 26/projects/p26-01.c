/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Prints even (0) or odd (1) from 1000 random generated values.
date (DD/MM/YYYY): 26.02.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*(a)*/
int main(void)
{
    int i = 0, j, n;

    printf("Values:\n   0 1 2 3 4 5 6 7 8 9\n");

    srand(time(0));

    /* prints 100 lines 10 values each */
    while (i < 100)
    {
        printf("%2d ", i);
        for (j = 0; j < 10; j++) {
            n = rand();
            printf("%d ", n % 2 ? 0 : 1);
        }
        i++;
        printf("\n");
    }

    return 0;
}
/*(b) from answers:
For generating numbers in the range 0 to N - 1,
the formula rand() / (RAND_MAX / N + 1) often gives better
results than rand() % N. For example, if N is 2 and RAND_MAX is 32767,
the formula works out to rand() / 16384, which yields 0 if the
return value of rand is less than 16384 and 1 if it's greater
than or equal to 16384. 
*/