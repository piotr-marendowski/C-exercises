/*  Name: 4-2.c
    Purpose: Exercise 4-2.
    Author: NiceMan1337
    Date: 11.03.2022  */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter two variables: ");
    scanf("%d %d", &i, &j); 
    
    printf("%d\n", (-i)/j);
    printf("%d\n", -(i/j));
   
    return 0;
}

/*Solution:
In C89 results may vary, but in C99 there
is always one result - closer to the zero*/