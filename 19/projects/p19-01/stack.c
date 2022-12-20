/* Author: K.N. King and Piotr Marendowski
Purpose: Stack ADT implementation
Modification date (DD/MM/YYYY): 20.12.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99+ only */
#include "stack.h"

#define STACK_SIZE 100

struct stack_type {
    int contents[STACK_SIZE];
    int top;
};

int main(void) {

    char c, d;
    Stack s = malloc(sizeof(struct stack_type));
    s->top = 0;

    printf("Enter parentheses and/or braces: ");

    while ((c = getchar()) != '\n') {
        if (c == '}' && pop(s) != '{') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }
        else if (c == ')' && pop(s) != '(') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        } else if (c == '(' || c == '{')
            push(s, c);
    }

    if (!is_empty(s)) {
        printf("Parentheses/braces are not nested properly\n");
        return 0;
    }

    printf("Parentheses/braces are nested properly\n");
    return 0;
}
void make_empty(Stack s) {
    free(s);
    s->top = 0;
}

bool is_empty(Stack s) {
    return s->top == 0;
}

bool is_full(Stack s) {
    return s->top == STACK_SIZE;
}

void push(Stack s, char i) {

    if (is_full(s))
        stack_overflow();

    s->contents[s->top++] = i;
}

char pop(Stack s) {

    if (is_empty(s))
        stack_underflow();

    return s->contents[--s->top];
}

void stack_overflow(void) {
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nStack underflow\n");
    exit(EXIT_FAILURE);
}
