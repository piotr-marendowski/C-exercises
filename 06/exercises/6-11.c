/*  Name: 6-11.c
    Purpose: Exercise 6-11.
    Author: NiceMan1337
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i, sum;
    
    sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum); 
    
    return 0;
}