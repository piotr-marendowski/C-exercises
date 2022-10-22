/*  Name: p10-06.c
    Purpose: RPN expression based calculator.
    Author: Piotr Marendowski
    Date: 29.06.2022  */

#include <stdio.h>
#include <stdlib.h> /*exit*/
#include <stdbool.h> /*C99 only*/
#include <ctype.h> /*for isdigit*/

#define STACK_SIZE 100

/*external variables*/
char contents[STACK_SIZE] = {0};
int top = 0;

/*prototypes*/
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch, operand1, operand2;

    /*don't know how to make it with scanf
    check if it is digit, then push its value onto the stack
    (by subtracting its ascii value by value of 0)
    if its an operator, just calculate two values below
    top of the stack and push this on the top*/
    while (true)
    {
        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n')
        {
            if (isdigit(ch))
                push(ch - '0');
            else
                switch(ch)
                {
                    case '+':
                        push(pop() + pop());
                        break;
                    case '-':
                        operand2 = pop();
                        operand1 = pop();
                        push(operand1 - operand2);
                        break;
                    case '*':
                        push(pop() * pop());
                        break;
                    case '/':
                        operand2 = pop();
                        operand1 = pop();
                        push(operand1 / operand2);
                        break;
                    case '=':
                        printf("Value of expression: %d\n", pop());
                        break;
                    case ' ': break;
                    default:
                        break; 
                }
        }
    }

    return 0;
}
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