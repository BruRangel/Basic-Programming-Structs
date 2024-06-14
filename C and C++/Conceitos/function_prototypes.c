#include <stdio.h>

void hello(char[], int);

int main(){
    // function prototypes

    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    char name[] = "Bruno";
    int age = 18;

    hello(name, age);

    return 0;
}

void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d year old", age);
}
