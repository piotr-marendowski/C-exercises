/* Author: K.N. King
Purpose: Stack testing program
Modification date (DD/MM/YYYY): 23.12.2022 */

#include <stdio.h>
#include "stackADT-v1.h"

int main(void)
{
    Stack s1, s2;
    void *n;

    s1 = create();
    s2 = create();

    push(s1, "abc");
    push(s1, "def");

    n = pop(s1);
    printf("Popped %s form s1\n", n);
    push(s2, n);
    n = pop(s1);
    printf("Popped %s from s1\n", n);
    push(s2, n);

    destroy(s1);

    while (!is_empty(s2))
        printf("Popped %s form s2\n", pop(s2));

    push(s2, "abc");
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 if empty\n");
    else
        printf("s2 is not empty\n");
    
    destroy(s2);

    return 0;
}