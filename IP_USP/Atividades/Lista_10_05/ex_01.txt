#include <stdio.h>

int main(){
    int tamanho_vetor_a;
    printf("Digite o numero de elementos do vetor a (ate 20): ");
    scanf("%d", &tamanho_vetor_a);
    int vetor_a[20];

    for(int i = 0; i < tamanho_vetor_a; i++){
        printf("Digite o valor do elemento %d do vetor a: ", i+1);
        scanf("%d", &vetor_a[i]);
    }

    int maior, menor;
    float media, soma = 0;

    for(int i = 0; i < tamanho_vetor_a; i++){
        if (i == 0){
            maior = vetor_a[i];
            menor = vetor_a[i];
        }
        if(vetor_a[i] > maior){
            maior = vetor_a[i];
        }
        if(vetor_a[i] < menor){
            menor = vetor_a[i];
        }
        soma += vetor_a[i];
    }

    media = soma/tamanho_vetor_a;
    printf("Maior: %d, Menor: %d, Soma: %.0f, Media: %.2f\n", maior, menor, soma, media);

    int num, contador = 0, posicao[20];
    
    printf("Digite o valor do numero que deseja verificar: ");
    scanf("%d", &num);

    for(int i = 0; i < tamanho_vetor_a; i++){
        if(vetor_a[i] == num){
            posicao[contador] = i;
            contador++;
        }
    }

    if(contador == 0){
        printf("O numero nao aparece no vetor\n");
    }
    else{
        printf("O numero aparece %d vezes no vetor, nas posicoes: ", contador);
        for(int i = 0; i < contador; i++){
            if(i != contador-1){
                printf("%d, ", posicao[i]);
            }
            else{
                printf("%d.", posicao[i]);
            }
        }
    }

    return 0;
}