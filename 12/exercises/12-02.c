/*  Name: 12-02.c
    Purpose: Exercise 12-02
    Author: NiceMan1337
    Date: 26.07.2022  */

#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *high = &a[0], *middle, *low = &a[1];

    middle = low + (high - low) / 2;

    printf("Middle: %d\n", *middle);

    return 0;
}

/*Solution:
You can't add pointers, you can only subtract them
as in previous example. The value of (high - low) / 2
is an integer, so it can be calculated. */