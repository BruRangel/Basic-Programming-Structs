#include <stdio.h>

int fibonacci(int x) {
    if (x == 1 || x == 2) return 1;
    else return fibonacci(x - 1) + fibonacci(x - 2);
}

void main() {
    int x;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("O fibonacci de %d e: %d", x, fibonacci(x));
}