/*  Name: 12-04.c
    Purpose: Exercise 12-04
    Author: Piotr Marendowski
    Date: 26.07.2022  */

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE] = {0};
int *top_ptr = &contents[0];

void make_empty(void)
{
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    return top_ptr = &contents[0];
}
bool is_full(void)
{
    return top_ptr = &contents[STACK_SIZE];
}

int main(void)
{

    return 0;
}