#include <stdio.h>

int main() {
    int num, unidade, dezena, centena, milhar;

    printf("Digite um numero inteiro positivo e menor que 10000: ");
    scanf("%d", &num);

    if (num <= 0 || num >= 10000) {
        printf("O numero deve ser positivo e menor que 10000.\n");
        return 1;
    }

    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = (num / 100) % 10;
    milhar = num / 1000;

    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);
    printf("Milhar: %d\n", milhar);

    return 0;
}
