/*  Name: 5-7.c
    Purpose: Exercise 5-7.
    Author: K.N. King.
    Date: 23.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int i;

    i = 17;
    printf("i = 17: %d\n", i >= 0 ? i : -i);

    i = -17;
    printf("i = -17: %d\n", i >= 0 ? i : -i);
    
    return 0;
}