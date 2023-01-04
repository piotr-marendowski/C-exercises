/*  Name: p7-07.c
    Purpose: Fraction calculator.
    Author: Piotr Marendowski
    Date: 07.05.2022  */

#include <stdio.h>

int main(void)
{
    /*declare variables*/
    int num1, denom1, num2, denom2, result_num, result_denom;
    char ch;

    /*ask for fractions, use getchar to get type of operation
    getchar(); is necessary, to NOT load white space from scanf*/
    printf("Enter two fractions separated by +, -, *, /: ");
    scanf("%d/ %d", &num1, &denom1);
    getchar();
    ch = getchar();
    scanf("%d/ %d", &num2, &denom2);

    /*calculate, based on operand*/
    if (ch == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (ch == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (ch == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else if (ch == '/') {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
    }
    
    /*print the result*/
    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}

/*Description:
williamgherman combined it with GCD calculator,
to get the simpliest result*/