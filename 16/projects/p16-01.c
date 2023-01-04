/*  Name: p16-01.c
    Purpose: Searches for country based on input (international dialing code)
    Author: NiceMan1337
    Date: 02.10.2022  */

#include <stdio.h>

int main(void)
{
    int code;

    struct dialing_code {
        char *country;
        int code;
    };

    const struct dialing_code country_codes[] =
    {{"Argentina",            54}, {"Bangladesh",     889},
     {"Brazil",               55}, {"Burma (Myanmar)", 95},
     {"China",                86}, {"Colombia",        57},
     {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
     {"Ethiopia",            251}, {"France",          33},
     {"Germany",              49}, {"India",           91},
     {"Indonesia",            62}, {"Iran",            98},
     {"Italy",                39}, {"Japan",           81},
     {"Mexico",               52}, {"Nigeria",        234},
     {"Pakistan",             92}, {"Philippines",     63},
     {"Poland",               48}, {"Russia",           7},
     {"South Africa",         27}, {"South Korea",     82},
     {"Spain",                34}, {"Sudan",          249},
     {"Thailand",             66}, {"Turkey",          90},
     {"Ukraine",             380}, {"United Kingdom",  44},
     {"United States",         1}, {"Vietnam",         84}};

    printf("Enter international dialing code: ");
    scanf("%d", &code);
    
    /*Autocorrected for member selection by pointer,
    you can also set up a for loop and iterate from 1 and search.*/
    if (country_codes->code == code) 
        printf("Entered code corresponds to %s.\n", country_codes->country);
    else
        printf("Entered code doesn't corresponds to any country.\n");

    return 0;
}

