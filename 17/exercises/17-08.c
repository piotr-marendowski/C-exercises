/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-08 (modified stack.c (from project 6, chapter 10)
        in single file for use of linked lists)
    Dependencies: None
    Modification date (DD/MM/YYYY): 17.11.2022
    Note: OMG after two hours I did it, I'm so proud of myself :3
*/

#include <stdio.h>
#include <stdlib.h> /*exit*/
#include <stdbool.h> /*C99 only*/
#include <ctype.h> /*for isdigit*/

#define STACK_SIZE 100

struct stack {
    int value;
    struct stack *next;
};

struct stack *top = NULL;

struct stack *make_empty(void);
struct stack *push(int n);
struct stack *pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch, operand1, operand2;

    /*check if it is digit, then push its value onto the stack
    (by subtracting its ascii value by value of 0)
    if its an operator, assign top value to the first operand, pop, do it again,
    and push calculation on the top, if its equal sign, just print the top value*/
    for (;;)
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
                        operand1 = top->value;
                        pop();
                        operand2 = top->value;
                        pop();
                        push(operand1 + operand2);
                        break;
                    case '-':
                        operand1 = top->value;
                        pop();
                        operand2 = top->value;
                        pop();
                        push(operand2 - operand1);
                        break;
                    case '*':
                        operand1 = top->value;
                        pop();
                        operand2 = top->value;
                        pop();
                        push(operand1 * operand2);
                        break;
                    case '/':
                        operand1 = top->value;
                        pop();
                        operand2 = top->value;
                        pop();
                        push(operand2 / operand1);
                        break;
                    case '=':
                        printf("Value of expression: %d\n", top->value);
                        break;
                    case ' ': break;
                    default:
                        break; 
                }
        }
    }

    return 0;
}

/*call pop() over and over again, until its empty*/
struct stack *make_empty(void)
{
    for (;;)
        pop();

    return top;
}

bool is_empty(void) {
    return top == 0;
}

/*assign n, point new node to top, making it first,
then point top to it, and return pointer to first node (or top)*/
struct stack *push(int n)
{
    struct stack *new_node;

    new_node = malloc(sizeof(struct stack));
    if (new_node == NULL)
        stack_overflow();
    
    new_node->value = n;
    new_node->next = top;
    top = new_node;
    return new_node;
}

/*create pointer to top (first node), if it's last - exit,
otherwise - point top to next node in list, free first node, and return top*/
struct stack *pop(void)
{
    struct stack *node = top;

    if (node == NULL)
        stack_underflow();
    
    top = top->next;
    free(node);
    return top;
}

void stack_overflow(void) {
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}