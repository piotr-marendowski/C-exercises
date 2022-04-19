/*  Name: p3-5.c
    Purpose: Align numbers entered by the user into square.
    Author: NiceMan1337
    Date: 07.03.2022  */

#include <stdio.h>

int main (void)
{   
    /*declare variables*/
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    /*ask user for input*/
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10,
          &n11, &n12, &n13, &n14, &n15, &n16);

    /*print out rows 1 - 4*/
    printf("\n%2d %2d %2d %2d\n", n1, n2, n3, n4);

    printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);

    printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);

    printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);

    /*print out the rest*/
    printf("Row sums: %d %d %d %d\n", (n1 + n2 + n3 + n4),
     (n5 + n6 + n7 + n8), (n9 + n10 + n11 + n12), (n13 + n14 + n15 + n16));

    printf("Column sums: %d %d %d %d\n", (n1 + n5 + n9 + n13),
     (n2 + n6 + n10 + n14), (n3 + n7 + n11 + n15), (n4 + n8 + n12 + n16));

    printf("Diagonal sums: %d %d\n", (n1 + n6 + n11 + n16), (n4 + n7 + n10 + n13));
    
    return 0;
}
