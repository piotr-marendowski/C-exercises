/*  Name: 16-14.c
    Purpose: Exercise 16-14
    Author: NiceMan1337
    Date: 29.09.2022  */

#include <stdio.h>
#define PI 3.14
#define RECTANGLE 1
#define CIRCLE 2

struct point {
    int x, y;
};

struct shape
{
    int shape_kind;            /* RECTANGLE or CIRCLE */
    struct point center;       /* coordinates of center */
    union
    {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

int area(struct shape a);
struct shape move(struct shape s, int x, int y);
struct shape scale(struct shape s, double c);

int main(void)
{
    struct shape s1;
    s1.shape_kind = RECTANGLE;
    double scale_factor = 1.5;

    s1.u.rectangle.height = 4;
    s1.u.rectangle.width = 10;
    s1.u.circle.radius = 3;
    s1.center.x = 15;
    s1.center.y = 20;
    
    move(s1, s1.center.x, s1.center.y);

    printf("Area is %d\n", area(s1));
    printf("Center is now on %d-%d (X-Y)\n", s1.center.x, s1.center.y);
    printf("New (scaled by %.2f) area is %d\n", scale_factor, area(scale(s1, scale_factor)));
    
    return 0;
}

/*(a) Area of circle or rectangle*/
int area(struct shape a)
{
    if (a.shape_kind == RECTANGLE)
        return a.u.rectangle.height * a.u.rectangle.width;
    else
        return PI * (a.u.circle.radius * a.u.circle.radius);
}

/*(b) Move shape by x and y*/
struct shape move(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

/*(c) Scale shape by its scale factor*/
struct shape scale(struct shape s, double c)
{
    if (s.shape_kind == RECTANGLE)
    {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }
    else
        s.u.circle.radius *= c;

    return s;
}