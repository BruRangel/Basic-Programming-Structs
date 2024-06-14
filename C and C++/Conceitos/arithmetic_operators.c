#include <stdio.h>

int main(){
    // arithmetics operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus / rest)
    // ++ (increment)
    // -- (decrement)

    int x = 4;
    int y = 3;

    float z = x / (float) y;
    printf("%.2f\n", z);

    float w = x % y;
    printf("%.2f\n", w);

    // You can also write the operator before the = to resume the code

    x *= 2;
    printf("%d", x);

    return 0;
}
