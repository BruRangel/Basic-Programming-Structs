#include <stdio.h>

int main(){
    int sequencia[30];
    int n;
    int soma_atual = 1;
    int soma_maxima = 1;
    printf("Quantos numeros tem a sequencia? \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero\n", (i+1));
        scanf("%d", &sequencia[i]);
        if (i > 0){
            if(sequencia[i] != sequencia[i-1]){
                soma_atual += 1;
            }
            else{
            soma_atual = 1;
            }
        }
        if (soma_atual > soma_maxima){
            soma_maxima = soma_atual;
        }
    }
    printf("A sequencia e formada por %d segmentos de numeros iguais.", (soma_maxima));

    return 0;
}