#include <stdio.h>

void printAge(int *age)
{
    printf("You are %d years old\n", *age); // you can call pointers in functions, by using the *
}

int main()
{
    /*
    pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    some tasks are performed more easily with pointers
    * = indirection operator (value at address)
    */

    int age = 18;
    int *pAge = NULL;   // good practice to assign NULL if declaring a pointer
    pAge = &age;

    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);
    printf("Address of pAge: %p\n", &pAge);  // notice that the pointer have it's own address, altough it can return values from the original variable

    printf("Size of age: %d bytes\n", sizeof(age));
    printf("Size of pAge: %d bytes\n", sizeof(pAge));
        
    printf("Value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge);  // dereferencing to stract the value of the addres stored in the pointer

    printAge(pAge);

    return 0;
}
