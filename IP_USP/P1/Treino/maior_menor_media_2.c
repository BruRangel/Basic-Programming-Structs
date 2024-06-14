#include <stdio.h>
void main(){
    int n, maior, menor, x;
    float media, soma = 0;
    printf("Digite quantos elementos tera seu vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite o %d elemento do vetor: ", i+1);
        scanf("%d", &x);
        vetor[i] = x;
    }
    for(int i = 0; i < n; i++){
        if(i==0){
            maior = vetor[i];
            menor = vetor[i];
        }
        if(vetor[i]>maior){
            maior = vetor[i];
        }
        if(vetor[i]<menor){
            menor = vetor[i];
        }
        soma += vetor[i];
    }
    media = soma/n;
    printf("maior: %d, menor: %d, media: %f", maior, menor, media);
}
