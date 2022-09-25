/*  Name: 16-07.c
    Purpose: Exercise 16-07
    Author: NiceMan1337
    Date: 25.09.2022  */

#include <stdio.h>

struct fraction
{
    int numerator;
    int denominator;
};

struct fraction reduce_fraction(struct fraction f);
struct fraction add_fraction(struct fraction f1, struct fraction f2);
struct fraction subtract_fraction(struct fraction f1, struct fraction f2);
struct fraction multiply_fraction(struct fraction f1, struct fraction f2);
struct fraction divide_fraction(struct fraction f1, struct fraction f2);

int main(void)
{
    struct fraction f;
    struct fraction first;
    struct fraction second;

    printf("Enter a fraction: ");
    scanf(" %d/%d", &first.numerator, &first.denominator);

    printf("Enter a second fraction: ");
    scanf(" %d/%d", &second.numerator, &second.denominator);

    f = add_fraction(first, second);
    printf("Added: %d/%d\n", f.numerator, f.denominator);

    f = subtract_fraction(first, second);
    printf("Subtracted: %d/%d\n", f.numerator, f.denominator);

    f = multiply_fraction(first, second);
    printf("Multiplied: %d/%d\n", f.numerator, f.denominator);

    f = divide_fraction(first, second);
    printf("Divided: %d/%d\n", f.numerator, f.denominator);

    return 0;
}


/*(a) - Reduce fraction to lowest terms.*/
struct fraction reduce_fraction(struct fraction f)
{
    int remainder;
    int n = f.numerator, d = f.denominator;

    while (n % d != 0 && n != d)
    {
        remainder = d;
        d = n % d;
        n = remainder;
    }

    f.numerator /= d;
    f.denominator /= d;

    return f;
}

/*(b) - Add members of two fraction structures together.*/
struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction f;
    
    /*add - check if denominators are equal*/
    if (f1.denominator == f2.denominator)
    {
        f.numerator = f1.numerator + f2.numerator;
        f.denominator = f1.denominator;
    }
    else
    {
        f.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
        f.denominator = f1.denominator * f2.denominator;
    }

    /*reduce*/
    f = reduce_fraction(f);

    return f;
}

/*(c) - Subtract members of two fraction structures together.*/
struct fraction subtract_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction f;
    
    /*subtract - check if denominators are equal*/
    if (f1.denominator == f2.denominator)
    {
        f.numerator = f1.numerator - f2.numerator;
        f.denominator = f1.denominator;
    }
    else
    {
        f.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
        f.denominator = f1.denominator * f2.denominator;
    }

    /*reduce*/
    f = reduce_fraction(f);

    return f;
}

/*(d) - Multiply members of two fraction structures together.*/
struct fraction multiply_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction f;
    
    /*multiply*/
    f.numerator = f1.numerator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;

    /*reduce*/
    f = reduce_fraction(f);

    return f;
}

/*(e) - Divide members of two fraction structures together.*/
struct fraction divide_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction f;
    
    /*divide*/
    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.numerator;

    /*reduce*/
    f = reduce_fraction(f);

    return f;
}

/*Description:
Works, but have some issues which I won't be
fixing for next couple of hours. */