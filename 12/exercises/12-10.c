/*  Name: 12-10.c
    Purpose: Exercise 12-10
    Author: Piotr Marendowski
    Date: 27.07.2022  */

#include <stdio.h>

int *find_middle(int a[], int n) {
    return a + (n / 2);
}

int main(void)
{
    int a[] = {1, 2, 3};
    int n = 3;

    printf("Middle: %d\n", *find_middle(a, n));

    return 0;
}