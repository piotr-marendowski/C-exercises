/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 6
Modification date (DD/MM/YYYY): 22.01.2022 */

#include <stdio.h>

int main(void)
{
    int widget = 2;

    printf("%d widget%s", widget, widget != 1 ? "s\n" : "\n");

    return 0;
}