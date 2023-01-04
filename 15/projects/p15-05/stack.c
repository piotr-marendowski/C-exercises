/*  Name: stack.c
    Purpose: All stack functions in one place.
    Author: Piotr Marendowski
    Date: 17.09.2022  */

#include <stdio.h>
#include <stdlib.h> /*exit*/
#include <stdbool.h> /*C99 only*/
#include <ctype.h> /*for isdigit*/
#include "stack.h"

#define STACK_SIZE 100

char contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char i) {

    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void) {

    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}