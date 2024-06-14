#include <stdio.h>
#include <string.h>

enum Day{Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4 , Thursday = 5, Friday = 6, Saturday = 7};

int main()
{
    // enum = a user defined type of named integer identifiers
    // helps to make a program more readable
    // enums are not strings, but they can be treated like integers

    enum Day today = Monday;
    
    printf("%d\n", today);

    if(today == Sunday || today == Saturday)
    {
        printf("It's the weekend.");
    }
    else
    {
        printf("I have to work today");
    }

    return 0;
}