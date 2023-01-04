/*  Name: 5-10.c
    Purpose: Exercise 5-10.
    Author: Piotr Marendowski
    Date: 24.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int i;
    
    i = 1;
    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }

    return 0;
}
/*Solution:
There are no break statements*/