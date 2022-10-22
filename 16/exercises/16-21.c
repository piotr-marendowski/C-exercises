/*  Name: 16-21.c
    Purpose: Exercise 16-21
    Author: Piotr Marendowski
    Date: 02.10.2022  */

#include <stdio.h>

int main(void)
{
    /*(a) 1, 2, 3, 4*/
    enum {NUL, SOH, STX, ETX};

    /*(b) 11, 12, 13*/
    enum {VT = 11, FF, CR};

    /*(c) 14, 15, 16, 24, 25*/
    enum {SO = 14, ST, DLE, CAN = 24, EM};
    
    /*(d) 45, 46, 47, 37, 38, 39*/
    enum {ENQ = 45, ACK, BEL, LF = 37, ETB, ESC};

    return 0;
}