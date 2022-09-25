/*  Name: 16-09.c
    Purpose: Exercise 16-09
    Author: NiceMan1337
    Date: 25.09.2022  */

#include <stdio.h>
#include <stdbool.h> /*C99!*/

struct color
{
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void)
{
    struct color c1, c2;
    int red, green, blue;

    printf("Enter numbers corresponding to colors (R/G/B): ");
    scanf("%d/%d/%d", &red, &green, &blue);

    c1 = make_color(red, green, blue);
    c1 = c2;

    printf("RGB: %d %d %d\n", c1.red, c1.green, c1.blue);
    printf("Red: %d\n", getRed(c1));
    printf("Are they equal?: ");
    equal_color(c1, c2) ? printf("yes.\n") : printf("no.\n");
    c2 = brighter(c1);
    printf("Brighter RGB: %d%d%d\n", c2.red, c2.green, c2.blue);
    c1 = darker(c1);
    printf("Darker RGB: %d%d%d\n", c1.red, c1.green, c1.blue);

    return 0;
}

/*(a)*/ 
struct color make_color(int red, int green, int blue)
{
    if (red < 0)
        red = 0;
    else if (red > 255)
        red = 255;
    if (green < 0)
        green = 0;
    else if (green > 255)
        green = 255;
    if (blue < 0)
        blue = 0;
    else if (blue > 255)
        blue = 255;

    /*C99!*/
    return (struct color) {red, green, blue};
}

/*(b)*/
int getRed(struct color c)
{
    return c.red;
}

/*(c)*/
bool equal_color(struct color color1, struct color color2)
{
    if (color1.red == color2.red && color1.green == color2.green
    && color1.blue == color2.blue)
        return true;
    else
        return false;
}

/*(d)*/
struct color brighter(struct color c)
{
    if (c.red + c.green + c.blue == 0)
        return (struct color) {3, 3, 3};

    if (c.red > 0 && c.red < 3)
        c.red = 3;
    if (c.green > 0 && c.green < 3)
        c.green = 3;
    if (c.blue > 0 && c.blue < 3)
        c.blue = 3;

    c.red = (int) c.red / 0.7;
    c.green = (int) c.green / 0.7;
    c.blue = (int) c.blue / 0.7;

    if (c.red > 255)
        c.red = 255;
    if (c.green > 255)
        c.green = 255;
    if (c.blue > 255)
        c.blue = 255;

    return c;
}

/*(e)*/
struct color darker(struct color c)
{
    c.red *= 0.7;
    c.blue *= 0.7;
    c.green *= 0.7;

    return c;
}