/*  Name: 14-15.c
    Purpose: Exercise 14-15
    Author: NiceMan1337
    Date: 11.09.2022  */

#include <stdio.h>
#define ENGLISH
/*#define SPANISH*/
/*#define FRENCH*/

int main(void)
{
#ifdef ENGLISH
    printf("Insert Disk 1\n");
#endif

#ifdef FRENCH
    printf("Inserez Le Disque 1\n");
#endif

#ifdef SPANISH
    printf("Inserte El Disko 1\n");
#endif
    return 0;
}