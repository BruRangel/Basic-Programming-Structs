#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(){
    int tamanho_vetor_a, tamanho_vetor_b;
    int vetor_a[20], vetor_b[20];
    int repetido = FALSE;

    printf("Digite quantos elementos tera o vetor a (ate 20): ");
    scanf("%d", &tamanho_vetor_a);
    printf("Digite quantos elementos tera o vetor b (ate 20): ");
    scanf("%d", &tamanho_vetor_b);

    for(int i = 0; i < tamanho_vetor_a; i++){
        printf("Digite o %d elemento do vetor a: ", i+1);
        scanf("%d", &vetor_a[i]);
    }
    for(int i = 0; i < tamanho_vetor_b; i++){
        printf("Digite o %d elemento do vetor b: ", i+1);
        scanf("%d", &vetor_b[i]);
    }

    printf("Os elementos repetidos do vetor_a no vetor_b sao: \n");

    for(int i = 0; i < tamanho_vetor_a; i++){
        repetido = FALSE;
        for(int k = i+1; k < tamanho_vetor_a; k++){
            if(vetor_a[i] == vetor_a[k]){
                repetido = TRUE;
            }
        }
        if(repetido == FALSE){
            for(int j = 0; j < tamanho_vetor_b; j++){
                if(vetor_a[i] == vetor_b[j]){
                        printf("%d ", vetor_a[i]);
                }
            }
        }
    }

    return 0;
}
