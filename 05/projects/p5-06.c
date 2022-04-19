/*  Name: p5-6.c
    Purpose: Project p5-6.
    Author: NiceMan1337
    Date: 28.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    /*check if code is valid or not
    check digit cannot be 10, and sums cannot be 100000 or more*/
    if (d <= 9 && first_sum <= 99999 && second_sum <= 99999) {
        printf("VALID\n");
    } 
    else {
        printf("NOT VALID\n");
    }

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
 
    return 0;
}