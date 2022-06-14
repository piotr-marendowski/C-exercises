/*  Name: 9-05.c
    Purpose: Exercise 9-5.
    Author: NiceMan1337
    Date: 14.06.2022  */

#include <stdio.h>

int num_digits(int digit);

int main(void)
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("This number have %d digits.", num_digits(n));
    return 0;
}

int num_digits(int n) {
    int digits;
    while (n != 0) {
        n /= 10;
        digits++;
    }
    return digits;
}