/*  Name: p8-02.c
    Purpose: Modified version of repdigit.c program.
    Author: NiceMan1337
    Date: 17.05.2022  */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    start:
    bool digit_seen[10] = {false};
    int digit = 0;
    long n = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n <= 0) {
        return 0;
    }

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0) 
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    goto start;

    return 0;
}

/*Description:
Added goto (because it was the easiest way)
and if statement, that exits if n <= 0 */