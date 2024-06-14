#include <stdio.h>
void main(){
    int n_1, n_2;
    printf("Digite o numero de elementos do vetor 1: ");
    scanf("%d", &n_1);
    printf("Digite o numero de elementos do vetor 2: ");
    scanf("%d", &n_2);
    int vetor_1[n_1], vetor_2[n_2];
    for(int i = 0; i < n_1; i++){
        printf("Digite o elemento %d do vetor 1 (sem repeticoes): ", i+1);
        scanf("%d", &vetor_1[i]);
    }
    for(int i = 0; i < n_2; i++){
        printf("Digite o elemento %d do vetor 2: ", i+1);
        scanf("%d", &vetor_2[i]);
    }
    printf("Os elementos repetidos do vetor 1 no vetor 2 sao: ");
    for(int i = 0; i < n_1; i++){
        for (int j = 0; j < n_2; j++){
            if(vetor_1[i] == vetor_2[j]){
                printf("%d ", vetor_1[i]);
            }
        }
    }   
}