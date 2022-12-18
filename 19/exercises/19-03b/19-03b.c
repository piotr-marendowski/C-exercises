/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 3 (linked list version)
Modification date (DD/MM/YYYY): 18.12.2022 */

/* I did it in reverse i.e. first is the first node in whole chain,
and last is the first node to delete:
[data|next]:  [1|-]-->[2|-]
              last    first*/

#include <stdio.h>
#include <stdlib.h>
#include "19-01.h"              /* be sure to get this header file */

struct node {
    Item data;
    struct node *next;
};

struct queve_type {
    struct node *first;
    struct node *last;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queve create(void)
{
    Queve q = malloc(sizeof(struct queve_type));

    if (q == NULL)
        terminate("Error in create: queve could not be created.");

    q->first = NULL;
    q->last = NULL;
    return q;
}

void destroy(Queve q)
{
    free(q);
}

void make_empty(Queve q)
{
    while (!is_empty(q))
        remove_first(q);
}

bool is_empty(Queve q)
{
    return (q->first == NULL && q->last == NULL);
}

bool is_full(Queve q)
{
    return false;
}

void insert(Queve q, Item i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in insert: queve is full.");

    new_node->data = i;
    new_node->next = q->first;
    q->first = new_node;

    /* if its the first node */
    if (q->last == NULL)
        q->last = new_node;
}

Item remove_first(Queve q)
{
    struct node *old_first;
    Item i;

    if (is_empty(q))
        terminate("Error in pop: stack is empty.");

    old_first = q->first;
    i = old_first->data;
    q->first = old_first->next;
    free(old_first);
    return i;
}

Item return_first(Queve q)
{
    if (is_empty(q))
        terminate("Error in return_first: queve is empty.");

    return q->first->data;
}

Item return_last(Queve q)
{
    if (is_empty(q))
        terminate("Error in return_last: queve is empty.");

    return q->last->data;
}