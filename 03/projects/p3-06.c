/*  Name: p3-06.c
    Purpose: Adds two fractions.
    Author: Piotr Marendowski
    Date: 07.03.2022  */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by plus sign: ");
    scanf("%d/ %d + %d/ %d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}