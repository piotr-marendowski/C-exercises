/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-12
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n);
struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);

int main(void)
{
    /*test*/
    int n = 2;
    struct node *list, *ptr, *last;

    last = ptr = list = read_numbers();

    printf("Nodes:");
    for (; ptr != NULL; ptr = ptr->next)
        printf(" %d", ptr->value);

    last = find_last(last, n);
    /*check*/
    if (last)
        printf("\nyes\n");

    return 0;
}

/*return last, even when there aren't any n, it will return NULL last*/
struct node *find_last(struct node *list, int n)
{
    struct node *last = NULL;

    while (list != NULL)
    {
        if (list->value == n)
            last = list;
        
        list = list->next;
    }

    return last;
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