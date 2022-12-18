/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 3 (dynamic array version)
Modification date (DD/MM/YYYY): 18.12.2022 */

#include <stdio.h>
#include <stdlib.h>
#include "19-01.h"              /* be sure to get this header file */

#define QUEVE_SIZE 100

struct queve_type {
    int contents[QUEVE_SIZE];
    int first_empty;            /* fist empty item to be stored */
    int next_to_remove;         /* next item to be removed */
    int items;                  /* number of items */
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
        terminate("Error in create: stack could not be created.");

    q->first_empty = 0;     /* because its next free space to insert something */
    q->next_to_remove = 0;
    q->items = 0;
    return q;
}

void destroy(Queve q)
{
    free(q);
}

void make_empty(Queve q)
{
    q->first_empty = 0;
    q->items = 0;
    q->next_to_remove = 0;
    free(q);
}

bool is_empty(Queve q)
{
    return q->items == 0;
}

bool is_full(Queve q)
{
    return q->items == QUEVE_SIZE;
}

void insert(Queve q, int i)
{
    if (is_full(q))
        terminate("Error in insert: queve is full.");

    q->contents[q->first_empty++] = i;
    q->items++;
}

int remove_first(Queve q)
{
    if (is_empty(q))
        terminate("Error in remove_first: queve is empty.");
    
    q->items--;
    return q->contents[q->next_to_remove++];
}

int return_first(Queve q)
{
    if (is_empty(q))
        terminate("Error in return_first: stack is empty.");

    return q->contents[--q->first_empty];
}

int return_last(Queve q)
{
    if (is_empty(q))
        terminate("Error in return_last: stack is empty.");

    return q->contents[q->next_to_remove];
}