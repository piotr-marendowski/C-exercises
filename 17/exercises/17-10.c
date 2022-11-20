/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-10
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/

#include <stdio.h>

#define NAME_LEN 20

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

void print_part(struct part *p)
{
    printf("Part number: %d\n", p->number);
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
}

int main(void)
{
    struct part part1 = {528, "Disk drive", 10};

    print_part(&part1);

    return 0;
}