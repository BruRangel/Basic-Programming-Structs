#include <stdio.h>

int main() {
    int n, num, maior, menor;
    int soma = 0;
    float media;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("N deve ser maior que zero.\n");
        return 1;
    }
    
    printf("Digite os %d numeros inteiros maiores ou iguais a zero:\n", n);
    scanf("%d", &num);

    maior = menor = num;
    soma += num;
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        soma += num;
        if (num > maior) {
            maior = num;
        } else if (num < menor) {
            menor = num;
        }
    }
    
    media = soma / n;
    
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);
    printf("A soma dos numeros digitados foi: %d\n", soma);
    printf("A media dos numeros digitados foi: %.2f\n", media);
    
    return 0;
}
