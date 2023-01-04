/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-16
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/
#include <stdio.h>

int sum(int (*f)(int), int start, int end);
int f1(int n);

int main(void)
{
    int i = 1, j = 2;
    printf("Answer: %d\n", sum(f1, i, j));
    /* 1*1 = 1, then
    1 + 2 * 2 = 5 */

    return 0;
}

int sum(int (*f)(int), int start, int end)
{
    int sum = 0;
    while (start <= end)
    {
        sum += (*f)(start);
        start++;
    }
    return sum;
}

int f1(int n)
{
    return n*n;
}