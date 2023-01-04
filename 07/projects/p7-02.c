/*  Name: p7-02.c
    Purpose: Prints a table of squares using a for statement.
    Author: Piotr Marendowski
    Date: 30.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); /*refer to warning in section 7.3, we need to add this,
    because it would grab \n from scanf and just move on, in while loop*/

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);

        /*every 24 characters ask for an Enter character*/
        if (i % 24 == 0) {
            printf("Press Enter to continue: ");
            while (getchar() != '\n')
                ;
        }
    }

    return 0;
}