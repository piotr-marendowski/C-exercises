/*  Name: p12-02a.c
    Purpose: Reads characters and determines whatever
    the sentence is a palindrom
    (a) - integer approach
    Author: NiceMan1337
    Date: 01.08.2022  */

#include <stdio.h>
#include <ctype.h> /*for isalpha()*/

#define N 20

int main(void)
{
    int i = 0, j = 0;
    char ch, msg[N], msg2[N];

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            msg[i++] = ch;
            j++;
        }
    }

    for (i = 0; i < N; i++)
        msg2[i] = msg[i];

    for (i = 0; i < j; j--, i++)
    {
        if(msg[i] != msg2[j])
        {
            printf("Not a "); 
            break;
        }
    }
    printf("palindrome\n");

    return 0;
}