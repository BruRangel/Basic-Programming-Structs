#include <stdio.h>

int main(){
    int tamanho_vetor_a, tamanho_vetor_b;
    int vetor_a[20], vetor_b[20];

    printf("Digite quantos elementos tera o vetor a (ate 20): ");
    scanf("%d", &tamanho_vetor_a);
    printf("Digite quantos elementos tera o vetor b (ate 20): ");
    scanf("%d", &tamanho_vetor_b);

    for(int i = 0; i < tamanho_vetor_a; i++){
        printf("Digite o %d elemento do vetor a (sem repeticoes): ", i+1);
        scanf("%d", &vetor_a[i]);
    }
    for(int i = 0; i < tamanho_vetor_b; i++){
        printf("Digite o %d elemento do vetor b: ", i+1);
        scanf("%d", &vetor_b[i]);
    }

    printf("Os elementos repetidos do vetor_a no vetor_b sao: ");
    for(int i = 0; i < tamanho_vetor_a; i++){
        for(int j = 0; j < tamanho_vetor_b; j++){
            if(vetor_a[i] == vetor_b[j]){
                    printf("%d ", vetor_a[i]);
            }
        }
    }

    return 0;
}
