/*  Name: p8-03.c
    Purpose: Modified version of repdigit.c program.
    Author: Piotr Marendowski
    Date: 17.05.2022  */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{ 
    int digit_seen[10] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }
    
    printf("Digit:       0 1 2 3 4 5 6 7 8 9\n");
    printf("Occurrences: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", digit_seen[i]);
    }

    printf("\n");

    return 0;
}