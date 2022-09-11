/*  Name: 14-14.c
    Purpose: Exercise 14-14
    Author: NiceMan1337
    Date: 11.09.2022  */

#include <stdio.h>
#define N = 10
#define INC(x) x+1
#define SUB (x, y) x-y
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y

int main(void)
{
    int a[N], i, j, k, m;
#ifdef N
    i = j;
#else
    j = 1;
#endif

    i = 10 * INC(j);

    i = SUB(j, k);
    i = SQR(SQR(j));
    i = CUBE(j);
    i = M1(j, k);
    puts(M2(i, j));

#undef SQR
    i = SQR(j);
#define SQR
    i = SQR(j);

    return 0;
}

/*Description:
There are errors such as macros without parenthesses,
M1 makes a variable jk which is not defined,
SUB does not have value of k. */