/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Prints "That's all, folks!" at exit.
date (DD/MM/YYYY): 26.02.2022 */

#include <stdio.h>
#include <stdlib.h>

void thats(void)
{
    printf("That's all, ");
}

void folks(void)
{
    printf("folks!\n");
}

int main(void)
{
    printf("Message:\n");
    /* remember, that they are called in the reverse order */
    atexit(folks);
    atexit(thats);

    return 0;
}