/*  Name: p7-15.c
    Purpose: Computes factorial from a positive integer
    Author: Piotr Marendowski
    Date: 14.05.2022  */

#include <stdio.h>

int main(void) {

    /*declare variables*/
    int num, i;
    short factorial = 1;

    /*ask for a positive integer*/
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    /*calculate the factorial*/
    for (i = num; i > 1; i--)
        factorial *= i;

    /*print the result*/
    printf("Factorial of %d: %d\n", num, factorial);

    return 0;
}
/*Solution:
It depends on what machine code is running,
in my case:
(a) 7
(b) 13
(c) 20
(e) 34
(f) 170
compiled on C89 */