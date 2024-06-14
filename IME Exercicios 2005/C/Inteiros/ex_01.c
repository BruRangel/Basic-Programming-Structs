#include <stdio.h>

int main(){

    int tamanho_sequencia;

    printf("Calculo dos quadrados de uma sequencia de numeros.\n");

    printf("Qual sera o tamanho da sequencia de numeros?\n");
    scanf("%d", &tamanho_sequencia);

    int sequencia[tamanho_sequencia];
    printf("Size of sequencia: %d\n", sizeof(sequencia));

    for (int i=0; i<tamanho_sequencia; i++){
        int n;
        printf("Digite o valor do %d numero:\n", (i+1));
        scanf("%d", &n);
        sequencia[i] = n;
        printf("O quadrado de %d = %d\n", sequencia[i], sequencia[i] * sequencia[i]);
    }

    return 0;
}
