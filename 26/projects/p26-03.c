/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Displays time of using Quicksort algorithm
date (DD/MM/YYYY): 26.02.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void * a, const void * b)
{
   return *(int*)a - *(int*)b;
}

int main(void)
{
    int i, j, arr1[1000], arr2[10000], arr3[100000];
    time_t start_time;

    printf("Time for qsort() to sort:\n1000 elements: ");

    /* provide values for an array */
    for (i = 1000, j = 0; j < 1000; i--, j++)
        arr1[j] = i;

    /* start time and sort, then print time */
    start_time = clock();
    qsort(arr1, 1000, sizeof(int), compare);

    printf("%g seconds\n",
     (clock() - start_time) / (double) CLOCKS_PER_SEC);


    /* 10000 */
    /* provide values for an array */
    for (i = 10000, j = 0; j < 10000; i--, j++)
        arr1[j] = i;

    /* start time and sort, then print time */
    start_time = clock();
    qsort(arr2, 10000, sizeof(int), compare);

    printf("10000 elements: %g seconds\n",
     (clock() - start_time) / (double) CLOCKS_PER_SEC);


    /* 100000 */
    /* provide values for an array */
    for (i = 100000, j = 0; j < 100000; i--, j++)
        arr1[j] = i;

    /* start time and sort, then print time */
    start_time = clock();
    qsort(arr3, 100000, sizeof(int), compare);

    printf("100000 elements: %g seconds\n",
     (clock() - start_time) / (double) CLOCKS_PER_SEC);

    return 0;
}