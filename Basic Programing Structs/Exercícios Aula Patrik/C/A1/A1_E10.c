#include <stdio.h>
#include <math.h>

float a;
float b;

int main(){

    printf("Value of a: ");
    scanf("%f", &a);
    printf("Value of b: ");
    scanf("%f", &b);

    printf("Soma: %f\n", a + b);
    printf("Subtração: %f\n", a - b);
    printf("Multiplicação: %f\n", a * b);
    printf("Divisão inteira: %f\n", floor(a / b));
    printf("Divisão real: %f\n", a / b);
    // printf("Resto da divisão: %f", a % b);

    return 0;
}