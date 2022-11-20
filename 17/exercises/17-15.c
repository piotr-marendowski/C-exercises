/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-15
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/
#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(void)
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;

    while ((*f)(n)) n++;
    return n; 
}

int f2(int i)
{
    return i * i + i - 12;
}

/*It calculates f2 in f1's while loop, with pointer to function:
1. 1 * 1 + 1 - 12 = 10, next
2. 2 * 2 + 2 - 12 = 6, next
3. 3 * 3 + 3 - 12 = 0, while is false, return n and print*/