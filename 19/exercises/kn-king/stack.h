/* Author: K.N. King
Purpose: Stack interface
Modification date (DD/MM/YYYY): 16.12.2022 */

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>    /* C99 only */

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif