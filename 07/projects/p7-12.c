/*  Name: p7-12.c
    Purpose: Float type calculator.
    Author: NiceMan1337
    Date: 13.05.2022  */

#include <stdio.h>

int main(void) {

    /*declare variables
    num - whole expression
    next - next number with expression*/
    float num = 0.0, next = 0.0;
    char ch;
    
    /*ask for an expression*/
    printf("Enter an expression: ");
    scanf("%f", &num);

    /*get expression, then number and calculate it
    then repeat*/
    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '+':
                scanf("%f", &next);
                num += next;
                break;
            case '-':
                scanf("%f", &next);
                num -= next;
                break;
            case '*':
                scanf("%f", &next);
                num *= next;
                break;
            case '/':
                scanf("%f", &next);
                num /= next;
                break;
            default: 
                break;
        }
    }

    /*print the result*/
    printf("Value of expression: %.2f\n", num);
    return 0;
}