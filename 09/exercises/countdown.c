/*  Name: countdown.c
    Purpose: Prints a countdown.
    Author: K.N. King
    Date: 06.06.2022  */

#include <stdio.h>

void print_count(int n) {
    printf("T minus %d and counting\n", n);
}

int main(void)
{ 
    int i;

    for (i = 10; i > 0; --i)
        print_count(i); 

    return 0;
}