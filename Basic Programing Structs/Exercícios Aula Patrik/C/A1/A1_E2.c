#include <stdio.h>

int main(){
    int x = 1;
    int y = 2;
    int z = 0;

    z = x;
    x = y;
    y = z;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
