#include <stdio.h>
#include <stdlib.h>
#include "stackADT-v2.h"

#define PUBLIC  /* empty */
#define PRIVATE static

PUBLIC struct node {
    Item data;
    struct node *next;
};

PUBLIC struct stack_type {
    struct node *top;
};

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

PUBLIC Stack create(int size)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        terminate("Error in create: stack could not be created.");
    s->top = NULL;
    return s;
}

PUBLIC void destroy(Stack s)
{
    make_empty(s);
    free(s);
}

PUBLIC void make_empty(Stack s)
{
    while (!is_empty(s))
        pop(s);
}

PUBLIC bool is_empty(Stack s)
{
    return s->top == NULL;
}

PUBLIC bool is_full(Stack s)
{
    return NULL;
}

PUBLIC void push(Stack s, int i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in push: stack is full.");

    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

PUBLIC int pop(Stack s)
{
    struct node *old_top;
    Item i;

    if (is_empty(s))
        terminate("Error in pop: stack is empty.");

    old_top = s->top;
    i = old_top->data;
    s->top = old_top->next;
    free(old_top);
    return i;
}