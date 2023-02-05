/* License: BSD-3-Clause license
Author: K.N. King, Piotr Marendowski
Purpose: Modified inventory2.c program from section 17.5
Modification date (DD/MM/YYYY): 05.02.2023
Files: Makefile readline.c readline.h data.dat */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL;   /* points to first part */

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void dump(void);
void restore(void);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(void)
{
    char code;

    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')    /* skips to end of line */
            ;
        switch (code) {
            case 'i': insert();
                      break;
            case 's': search();
                      break;
            case 'u': update();
                      break;
            case 'p': print();
                      break;
            case 'd': dump();
                      break;
            case 'r': restore();
                      break;
            case 'q': return 0;
            default:  printf("Illegal code\n");
        }
        printf("\n");
    }
}

/**********************************************************
 * find_part: Looks up a part number in the inventory     *
 *            array. Returns the array index if the part  *
 *            number is found; otherwise, returns -1.     *
 **********************************************************/
struct part *find_part(int number)
{
    struct part *p;

    for (p = inventory;
         p != NULL && number > p->number;
         p = p->next)
        ;
    if (p != NULL && number == p->number)
        return p;
    return NULL;
}

/**********************************************************
 * insert: Prompts the user for information about a new   *
 *         part and then inserts the part into the        *
 *         database. Prints an error message and returns  *
 *         prematurely if the part already exists or the  *
 *         database is full.                              *
 **********************************************************/
void insert(void)
{
    struct part *cur, *prev, *new_node;

    new_node = malloc(sizeof(struct part));
    if (new_node == NULL) {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for (cur = inventory, prev = NULL;
         cur != NULL && new_node->number > cur->number;
         prev = cur, cur = cur->next)
        ;
    if (cur != NULL && new_node->number == cur->number) {
        printf("Part already exists.\n");
        free(new_node);
        return;
    }

    printf("Enter part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    if (prev == NULL)
        inventory = new_node;
    else
        prev->next = new_node;
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the database. If the part *
 *         exists, prints the name and quantity on hand;  *
 *         if not, prints an error message.               *
 **********************************************************/
void search(void)
{
    int number;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL) {
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    } else
        printf("Part not found.\n");
}

/**********************************************************
 * update: Prompts the user to enter a part number.       *
 *         Prints an error message if the part doesn't    *
 *         exist; otherwise, prompts the user to enter    *
 *         change in quantity on hand and updates the     *
 *         database.                                      *
 **********************************************************/
void update(void)
{
    int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        p->on_hand += change;
    } else
        printf("Part not found.\n");
}

/**********************************************************
 * print: Prints a listing of all parts in the database,  *
 *        showing the part number, part name, and         *
 *        quantity on hand. Parts are printed in the      *
 *        order in which they were entered into the       *
 *        database.                                       *
 **********************************************************/
void print(void)
{
    struct part *p;

    printf("Part Number   Part Name                  "
           "Quantity on Hand\n");
    for (p = inventory; p != NULL; p = p->next)
        printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
}

/**********************************************************
 * dump: Dumps whole inventory onto the file, one-by-one  *
 *       Parts are printed in the stored in the order in  *
 *       which they were entered into the database.       *
 **********************************************************/
void dump(void)
{
    struct part *p;
    FILE *fp;
    char filename[30];

    printf("Enter name of output file: ");
    read_line(filename, 30);

    if ((fp = fopen(filename, "wb")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", filename);
        exit(EXIT_FAILURE);
    }

    /* Write every node one-by-one, in the order in which they
    were entered, it doesn't ommits pointers, but I decided to
    just leave them as a placeholder value for restoring */
    for (p = inventory; p != NULL; p = p->next)
        fwrite(&p, sizeof(p), 1, fp);

    fclose(fp);
}

void restore(void)
{
    struct part p, *new_node = inventory; /* p = placeholder */
    FILE *fp;
    char filename[30];

    printf("Enter name of input file: ");
    read_line(filename, 30);

    if ((fp = fopen(filename, "rb")) == NULL) {
        fprintf(stderr, "%s can't be opened\n", filename);
        exit(EXIT_FAILURE);
    }

    /* Read every node one-by-one, in the order in which they
    were stored, not by the next pointer, then assaign it
    to the next read structure */
    while (fread(&p, sizeof(struct part), 1, fp) == 1)
    {
        if ((new_node = malloc(sizeof(struct part))) == NULL)
        {
            fprintf(stderr, "Error: malloc failed in restore\n");
            exit(EXIT_FAILURE);
        }

        /* read from placeholder, insert into place based on number,
        for detailed explanation go to the section 17.5 */
        new_node->number = p.number;
        strcpy(new_node->name, p.name),
        new_node->on_hand = p.on_hand;
        new_node->next = NULL;
        new_node = new_node->next;
    }

    fclose(fp);
}

/* Well, I don't get why it doesn't read anything,
I won't get into pointer magic like William Gherman,
tried multiple things, got some SEGFAULTS, I'll just leave it */