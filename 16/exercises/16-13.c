/*  Name: 16-13.c
    Purpose: Exercise 16-13
    Author: Piotr Marendowski
    Date: 28.09.2022  */

#include <stdio.h>

struct point
{
    int x, y;
};

int main(void)
{
    struct shape {
        int shape_kind;            /* RECTANGLE or CIRCLE */
        struct point center;       /* coordinates of center */
        union {
            struct {
                int height, width;
            } rectangle;
            struct {
                int radius;
            } circle;
        } u;
    } s;

    return 0;
}

/*Solution:
(a), (b), and (d) are legal
working versions:
(c) - s.u.rectangle.height
(e) - s.u.circle.radius
(f) - s.u.circle.radius*/