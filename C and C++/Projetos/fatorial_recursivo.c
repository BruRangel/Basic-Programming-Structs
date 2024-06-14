#include <stdio.h>

int factorial(int x){
    if (x == 0) return 1;
    else return x * factorial(x-1);
}

void main(){
    int x;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("O fatorial de %d = %d", x, factorial(x));
}