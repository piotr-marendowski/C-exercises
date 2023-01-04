/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-13
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *list, struct node *new_node);
struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);

int main(void)
{
    /*test*/
    int n = 2;
    struct node *list, *ptr, *new;

    new = ptr = list = read_numbers();

    new->value = n;
    ptr = insert_into_ordered_list(list, new);

    printf("Nodes:");
    for (; ptr != NULL; ptr = ptr->next)
        printf(" %d", ptr->value);

    return 0;
}

struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur, *prev = list;
    while (cur->value >= new_node->value)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
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