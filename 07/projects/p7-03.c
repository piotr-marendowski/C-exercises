/*  Name: p7-03.c
    Purpose: Sums a series of numbers.
    Author: NiceMan1337
    Date: 30.04.2022  */

#include <stdio.h>

int main(void)
{ 
    double n, sum = 0.0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    
    scanf("%lf", &n);
    while (n != 0.0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.2f\n", sum);
    
    return 0;
}

/*Description:
For scanf you need to add %lf, but printf needs %f,
in C99 you can write %lf*/