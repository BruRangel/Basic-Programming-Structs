#include <stdio.h>

// Dados n e n seqüências de números inteiros não-nulos, cada qual seguida por um 0, calcular a soma dos números pares de cada seqüência.

int main(){
    int n_sequencias;
    int num_atual;
    int soma;
    printf("Digite o numero de sequencias desejadas. Separe cada sequencia com 0.\n");
    scanf("%d", &n_sequencias);

    for(int i = 0; i < n_sequencias; i++){
        num_atual = 1;
        soma = 0;
        for(int j = 0; num_atual != 0; j++){
            printf("Digite o %d numero da %d sequencia.\n", (j+1), (i+1));
            scanf("%d", &num_atual);
            if(num_atual != 0 && num_atual % 2 == 0){
                soma += num_atual;
            }
            if(num_atual == 0){
                printf("O valor da soma dos pares da %d sequencia = %d\n", (i+1), (soma));
            }
        }
    }

    return 0;
}