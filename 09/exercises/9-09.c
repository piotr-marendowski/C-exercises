/*  Name: 9-09.c
    Purpose: Exercise 9-9.
    Author: Piotr Marendowski
    Date: 15.06.2022  */

#include <stdio.h>

void swap(int a, int b);

int main(void)
{ 
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}

/*Description:
Without a return statement function discards values of
a and b at the end. */