/*  Name: 8-05.c
    Purpose: Exercise 8-5.
    Author: NiceMan1337
    Date: 15.05.2022  */

#include <stdio.h>

#define n 40

int main(void)
{
    int i, fib_numbers[n] = {0, 1};
    
    printf("%d %d ", fib_numbers[0], fib_numbers[1]);

    for (i = 0; i < n; i++) {
        fib_numbers[i + 2] = fib_numbers[i] + fib_numbers[i + 1];
        printf("%d ", fib_numbers[i + 2]);
    }
    
    return 0;
}