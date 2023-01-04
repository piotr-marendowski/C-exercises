/*  Name: 4-8.c
    Purpose: Exercise 4-8.
    Author: Piotr Marendowski
    Date: 13.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%ld", &d);
    printf("Enter first group of five digits: ");
    scanf("%ld%ld%ld%ld%ld", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%ld%ld%ld%ld%ld", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", (10 - (total % 10)) % 10);
 
    return 0;
}

/*Solution:
Yes, they produce same output*/