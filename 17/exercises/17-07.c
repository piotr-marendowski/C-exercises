/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-07
    Dependencies: None
    Modification date (DD/MM/YYYY): 16.11.2022
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *delete_all(struct node *list);
struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);

int main(void)
{
    /*test*/
    struct node *list, *ptr;

    ptr = list = read_numbers();

    printf("Nodes:");
    for (; ptr != NULL; ptr = ptr->next)
        printf(" %d", ptr->value);

    list = delete_all(list);
    
    return 0;
}

struct node *delete_all(struct node *list)
{
    struct node *p, *q;
    p = q = list;

    while (p != NULL)
    {
        q = p;
        p = p->next;
        free(q);
    }

    return list;
}

struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *read_numbers(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0)
            return first;
        first = add_to_list(first, n);
    }
}