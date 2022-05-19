/*  Name: p8-06.c
    Purpose: B1FF translator.
    Author: NiceMan1337
    Date: 19.05.2022  */

#include <stdio.h>
#include <ctype.h>  /*for toupper*/

/*use length of the array*/
#define length ((int) (sizeof(msg) / sizeof(msg[0])))

int main(void)
{ 
    /*declare variables*/
    int i, j = 0;
    char msg[100] = {0}, ch;

    /*ask for a message*/
    printf("Enter message: ");

    /*calculate array elements*/
    while ((ch = getchar()) != '\n') {
        msg[j++] = toupper(ch);
    }
    
    /*translate*/
    printf("In B1FF speak: ");
    for (i = 0; i < length; i++) {
        switch (msg[i]) {
        case 'A':
            printf("4");
            break;
        case 'B':
            printf("8");
            break;
        case 'E':
            printf("3");
            break;
        case 'I':
            printf("1");
            break;
        case 'O':
            printf("0");
            break;
        case 'S':
            printf("5");
            break;
        default:
            printf("%c", msg[i]);
            break;
        }
        if ((msg[i] && msg[i + 1]) == '0') {
            break;
        }
        
    }

    printf("!!!!!!!!!!!\n");
    
    printf("\n");

    return 0;
}

/*Description:
I don't know hot to make it VLA without asking for length,
so there is an if statement */