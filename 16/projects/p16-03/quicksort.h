/*  Name: quicksort.h
    Purpose: Modified header file for quicksort.c file.
    Author: NiceMan1337
    Date: 03.10.2022  */

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "inventory.h"

void quicksort(struct part a[], int low, int high);
int split(struct part a[], int low, int high);

#endif