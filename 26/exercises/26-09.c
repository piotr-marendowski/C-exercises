/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 9
Modification date (DD/MM/YYYY): 25.02.2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_double(void)
{
    srand(time(0));
    return (double) rand() / RAND_MAX;
}

int main(void)
{
    printf("Value: %lf\n", rand_double());
    
    return 0;
}