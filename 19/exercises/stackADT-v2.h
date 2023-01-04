/* Author: K.N. King
Purpose: Stack ADT interface
Modification date (DD/MM/YYYY): 16.12.2022 */

#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>    /* C99 only */

typedef struct stack_type *Stack;

typedef int Item;

Stack create(int size);
/* Stack create(void) for third */
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif