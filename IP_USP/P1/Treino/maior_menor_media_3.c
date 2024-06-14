#include <stdio.h>
void main(){
    int maior, menor, contador, x = 0;
    float soma = 0, media;
    int vetor[40];
    for(contador; contador < 40; contador++){
        printf("Digite o %d elemento do vetor: ", contador+1);
        scanf("%d", &x);
        if (x < 0){break;}
        vetor[contador] = x;
        if(contador == 0){
            maior = vetor[contador];
            menor = vetor[contador];
        }
        if(vetor[contador] > maior){
            maior = vetor[contador];
        }
        if(vetor[contador]<menor){
            menor = vetor[contador];
        }
        soma+=vetor[contador];
    }
    media = soma/contador;
    printf("maior: %d, menor: %d, media: %f", maior, menor, media);
}