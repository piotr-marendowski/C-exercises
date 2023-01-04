/* Author: K.N. King and Piotr Marendowski
Purpose: Stack ADT interface
Modification date (DD/MM/YYYY): 19.12.2022 */

#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>    /* C99 only */

typedef struct stack_type *Stack;

void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, char i);
char pop(Stack s);
void stack_overflow(void);
void stack_underflow(void);

#endif