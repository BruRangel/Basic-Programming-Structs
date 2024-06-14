#include <stdio.h>

void main() {
    float soma = 0, menor, maior, temp;
    for (int i = 1; i < 7; i++) {
        printf("Digite o valor da %d nota: ", i);
        scanf("%f", &temp);
        soma += temp;
        if (i == 1) {
            menor = temp;
            maior = temp;
        }
        if (temp < menor)
            menor = temp;
        if (temp > maior)
            maior = temp;
    }
    float media;
    media = (soma - menor - maior)/4;
    printf("A media e: %f", media);
}
