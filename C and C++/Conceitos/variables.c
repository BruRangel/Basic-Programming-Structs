#include <stdio.h>

int main(){
    /*
    A varaible = allocated space in memory to store a value.
    We refer to a variable's name to access the stored value.
    That variable now behave as if it was the value it contains.
    HOWEVER we need to declare what type of data we are storing.
    */

   int x; //declaration
   x = 1; //initialization
   int y = 2; //declaration + initialization

   int age = 18; // integer
   float height = 1.80; // floating point number
   char grade = 'S'; // single character
   char name[] = "Bruno"; // array of characters (like a string)

    // Bellow you can see how to substitute var values in prints
    printf("I'm %d years old.\n", age);
    printf("I'm %f metters tall.\n", height);
    printf("My average grade is %c.\n", grade);
    printf("My name is %s.\n", name);

    return 0;
}
