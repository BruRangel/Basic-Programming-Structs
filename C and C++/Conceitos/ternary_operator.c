#include <stdio.h>

int findMax(int x, int y) {
    return (x > y) ? x : y;
}


int main() {

    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    int x;
    int y;

    printf("Value x: ");
    scanf("%d", &x);
    printf("Value y: ");
    scanf("%d", &y);

    int max = findMax(x, y);

    printf("%d", max);

    return 0;
}
