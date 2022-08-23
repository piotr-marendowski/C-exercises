/*  Name: p13-07.c
    Purpose: Improved planet.c from section 13.7
    Author: NiceMan1337
    Date: 23.08.2022  */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n1, n2;
    /*[0] - for whole numbers
    [1] - for 11 - 19*/
    char *numbers_tens[] = {"", "", "twenty", "thirty",
                            "fourty", "fifty", "seventy",
                            "eighty", "ninety"};
    char *numbers_ones[] = {"", "-one", "-two", "-three", "-four",
                            "-six", "-seven", "-eight", "-nine"};

    printf("Enter a number (20 - 99): ");
    scanf("%1d%1d", &n1, &n2);

    printf("%s%s\n", numbers_tens[n1], numbers_ones[n2]);

    return 0;
}

/*Description:
williamgherman included teens in his program. */