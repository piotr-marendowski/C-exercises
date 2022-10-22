/*  Name: 16-10.c
    Purpose: Exercise 16-10
    Author: Piotr Marendowski
    Date: 26.09.2022  */

#include <stdio.h>
#include <stdbool.h> /*C99!*/

struct point
{
    int x, y;
};

struct rectangle
{
    struct point upper_left, lower_right;
};

/*FUNCTION TO CALCULATE DIMENSIONS OF RECTANGLE
(in order to don't repeat same set of commands)
it just takes rectangle r and returns struct d (point) - width and height*/
struct point dimensions(struct rectangle r)
{
    struct point d;

    d.x = r.lower_right.x - r.upper_left.x;
    d.y = r.lower_right.y - r.upper_left.y;

    return d;
}

/*FUNCTION PROTOTYPES*/
int area(struct rectangle r);
struct point center(struct rectangle r);
struct rectangle move(struct rectangle r, int x, int y);
bool is_within(struct rectangle r, struct point p);

int main(void)
{
    struct rectangle r1, r2;
    struct point c1, p;
    int x, y;

    /*(a)*/
    printf("Enter coordinates of upper left point (X-Y): ");
    scanf(" %d-%d", &r1.upper_left.x, &r1.upper_left.y);
    printf("Enter coordinates of lower right point (X-Y): ");
    scanf(" %d-%d", &r1.lower_right.x, &r1.lower_right.y);
    printf("(a) Area: %d\n", area(r1));

    /*(b)*/
    c1 = center(r1);
    printf("(b) Center (X-Y): %d-%d\n", c1.x, c1.y);

    /*(c)*/
    printf("Enter units in order to move rectangle (X-Y): ");
    scanf(" %d-%d", &x, &y);
    r2 = move(r1, x, y);
    printf("(c) Moved (X-Y, X-Y): %d-%d, %d-%d\n", r2.upper_left.x, r2.upper_left.y,
           r2.lower_right.x, r2.lower_right.y);

    /*(d)*/
    printf("Enter coordinates of point p (X-Y): ");
    scanf(" %d-%d", &x, &y);
    p.x = x;
    p.y = y;
    printf("Is p within rectangle?: ");
    is_within(r1, p) ? printf("yes\n") : printf("no\n");

    return 0;
}

/*(a) - area from input (rectangle)*/
int area(struct rectangle r)
{
    struct point a = dimensions(r);

    return a.x * a.y;
}

/*(b) - center point from given points*/
struct point center(struct rectangle r)
{
    struct point c = dimensions(r);

    c.x /= 2;
    c.y /= 2;
 
    return c;
}

/*(c) - move rectangle by x in x points and y by y points*/
struct rectangle move(struct rectangle r, int x, int y)
{
    struct rectangle r1 = r;

    r1.upper_left.x += x;
    r1.lower_right.x += x;
    r1.upper_left.y += y;
    r1.lower_right.y += y;

    return r1;
}

/*(d) - determine if p lies within rectangle*/
bool is_within(struct rectangle r, struct point p)
{
    if (p.x >= r.upper_left.x && p.x <= r.lower_right.x)
    {
        if (p.y >= r.upper_left.y && p.y <= r.lower_right.y)
            return true;
    }

    /*if not - return false*/
    return false;
}