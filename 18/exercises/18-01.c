/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 1
Modification date (DD/MM/YYYY): 05.12.2022 */

#include <stdio.h>

int main (void)
{
    /*(a)   static*/ char **lookup(int level);
    /*(b)*/ volatile unsigned long io_flags;
    /*(c)*/ extern char *file_name[/*MAX_FILES*/], path[];
    /*(d)*/ static const char token_but[] = "";

    /*(a):
    Storage class: static
    Type qualifiers: none
    Type specifiers: char **
    Declarators: lookup(int level)
    Initializers: none

    (b):
    Storage class: none
    Type qualifiers: volatile
    Type specifiers: unsigned long
    Declarators: io_flags
    Initializers: none

    (c):
    Storage class: extern
    Type qualifiers: none
    Type specifiers: char * []
    Declarators: file_name, path
    Initializers: none

    (d):
    Storage class: static
    Type qualifiers: const
    Type specifiers: char []
    Declarators: token_but
    Initializers: "" */

    return 0;
}