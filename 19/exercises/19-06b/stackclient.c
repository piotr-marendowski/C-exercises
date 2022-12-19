/* Author: K.N. King and Piotr Marendowski
Purpose: Stack testing program
Modification date (DD/MM/YYYY): 19.12.2022 */

#include <stdio.h>
#include "stackADT-v2.h"

int main(void)
{
    Stack s1, s2;
    int n;

    s1 = create(100);
    s2 = create(200);
    printf("S");

    push(s1, 1);
    printf("a");
    push(s1, 2);

    n = pop(s1);
    printf("Popped %d form s1\n", n);
    push(s2, n);

    printf("Peek in s1: %d\n", peek(s1));

    n = pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, n);

    destroy(s1);

    while (!is_empty(s2))
        printf("Popped %d form s2\n", pop(s2));

    push(s2, 3);
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 if empty\n");
    else
        printf("s2 is not empty\n");
    
    destroy(s2);

    return 0;
}