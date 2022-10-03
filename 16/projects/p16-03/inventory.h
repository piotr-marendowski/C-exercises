/*  Name: quicksort.h
    Purpose: Modified header file for inventory.c file.
    Author: NiceMan1337
    Date: 03.10.2022  */

#ifndef INVENTORY_H
#define INVENTORY_H

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} inventory[MAX_PARTS];

#endif