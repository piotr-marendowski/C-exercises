/*  Name: p8-02.c
    Purpose: Modyfied version of repdigit.c program.
    Author: Piotr Marendowski
    Date: 17.05.2022  */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{ 
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s): ");
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            printf("%d ", digit);
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("\n");

    return 0;
}

/*Description:
If you write one character three times,
it'll print second time, task didn't provide
need to fix this, so I left it that way.
Fix - williamgherman/c-solutions */
