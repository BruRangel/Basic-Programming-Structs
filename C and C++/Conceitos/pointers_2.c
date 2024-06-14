#include <stdio.h>

void main(){
    int x = 4;      // integer x is set to 4
    int *pX = &x;   // integer pointer pX is set to the memory address of x
    int y = *pX;    // integer y is set to the thing pointed by pX (which is x)

    printf("Value stored on the x variable: %d\n", x);
    printf("Value stored on the pointer: %d\n", pX);
    printf("Value returned by the pointer when using *: %d\n", *pX);
    printf("Value stored on the y variable: %d\n", y);
    printf("Type a new value to x: ");
    // changing the value of x by the pointer pX
    scanf("%d", pX);
    printf("%d\n", x);
    printf("%d\n", pX);
    printf("%d", *pX);
}
