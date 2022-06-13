/*  Name: 9-02.c
    Purpose: Exercise 9-2.
    Author: NiceMan1337
    Date: 13.06.2022  */

#include <stdio.h>

int check(int x, int y, int n)
{
    return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1 ) ? 1 : 0;
}

int main(void)
{ 
    check(1, 1, 3);
    return 0;
}