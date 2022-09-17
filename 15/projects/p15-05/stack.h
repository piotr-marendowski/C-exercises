/*  Name: stack.h
    Purpose: Header file for calc.c and stack.c files.
    Author: NiceMan1337
    Date: 17.09.2022  */

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);