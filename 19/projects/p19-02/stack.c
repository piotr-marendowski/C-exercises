/* Author: K.N. King and Piotr Marendowski
Purpose: RPN expression based calculator - stack ADT implementation
Modification date (DD/MM/YYYY): 20.12.2022 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>              /*for isdigit*/
#include "stack.h"

#define STACK_SIZE 100

struct stack_type {
    int contents[STACK_SIZE];
    int top;
};

int main(void)
{
    char ch, operand1, operand2;
    Stack s = malloc(sizeof(struct stack_type));
    s->top = 0;

    /* check if it is digit, then push its value onto the stack
    (by subtracting its ascii value by value of 0)
    if its an operator, just calculate two values below
    top of the stack and push this on the top */
    while (true)
    {
        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n')
        {
            if (isdigit(ch))
                push(s, ch - '0');
            else
                switch(ch)
                {
                    case '+':
                        push(s, pop(s) + pop(s));
                        break;
                    case '-':
                        operand2 = pop(s);
                        operand1 = pop(s);
                        push(s, operand1 - operand2);
                        break;
                    case '*':
                        push(s, pop(s) * pop(s));
                        break;
                    case '/':
                        operand2 = pop(s);
                        operand1 = pop(s);
                        push(s, operand1 / operand2);
                        break;
                    case '=':
                        printf("Value of expression: %d\n", pop(s));
                        break;
                    case ' ': break;
                    default:
                        break;
                }
        }
    }

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
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}

