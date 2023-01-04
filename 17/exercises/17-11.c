/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-11
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int count_occurrences(struct node *list, int n);
struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);

int main(void)
{
    /*test*/
    int n = 2;
    struct node *list, *ptr, *occur;

    occur = ptr = list = read_numbers();

    printf("Nodes:");
    for (; ptr != NULL; ptr = ptr->next)
        printf(" %d", ptr->value);

    printf("\nOccurrences of number %d: %d\n", n, count_occurrences(occur, n));

    return 0;
}

int count_occurrences(struct node *list, int n)
{
    int occur = 0;

    while (list != NULL)
    {
        if (list->value == n)
            occur++;
        
        list = list->next;
    }

    return occur;
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