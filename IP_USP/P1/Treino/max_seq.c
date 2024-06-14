#include <stdio.h>

void main(){
    int tamanho, numero, max;
    printf("Digite o tamanho da sequencia: ");   // quantidade de números da sequência
    scanf("%d", &tamanho);
    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numero);
        if(i==0){
            max = numero;
        }
        if(numero>max){
            max = numero;
        }
    }
    printf("O maior numero digitado foi: %d", max);
}
