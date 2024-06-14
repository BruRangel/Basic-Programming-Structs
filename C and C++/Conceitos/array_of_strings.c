#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"}; // 2D array of strings

    // cars[0] = "Tesla"; You cannot directly change one of the elements of an string array

    strcpy(cars[0], "Tesla"); // This is how you can change the text of one element on a string array

    int nelements = sizeof(cars)/sizeof(cars[0]);

    for(int i = 0; i < nelements; i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}