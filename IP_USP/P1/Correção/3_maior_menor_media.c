#include <stdio.h>

void main() {
    int n; 
    float media, soma = 0, maior, menor, x;
    printf("Digite quantos elementos tera a sequencia: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite o %d elemento: ", i+1);
        scanf("%f", &x);
        if(i==0) {
            maior = x; menor = x;
        }
        if (x > maior) {
            maior = x;
        }
        if(x < menor) {
            menor = x;
        }
        soma += x;
    }
    media = soma/n;
    printf("maior: %f, menor: %f, media: %f", maior, menor, media);
}
