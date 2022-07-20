/*  Name: 11-03.c
    Purpose: Exercise 11-03.
    Author: NiceMan1337
    Date: 20.07.2022  */

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum /n;
}

int main(void)
{
    double a[] = {1, 2, 3};
    int n = 3;
    double avg, sum;

    avg_sum(a, n, &avg, &sum);
    printf("%.2f\n", avg);

    return 0;
}

/*Solution:
Just add * in order to make those variables pointers,
so You can compute on values from main without need to return
something from the function. */