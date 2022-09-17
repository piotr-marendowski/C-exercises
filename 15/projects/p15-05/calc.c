/*  Name: calc.c
    Purpose: Modified RPN expression based calculator.
    Author: NiceMan1337
    Date: 17.09.2022  */

#include <stdio.h>
#include <stdlib.h> /*exit*/
#include <stdbool.h> /*C99 only*/
#include <ctype.h> /*for isdigit*/
#include "stack.h"

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