#include <stdio.h>

void main() {
    int vetor_1[10], vetor_2[10], vetor_3[10], vetor_4[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d elemento do vetor_1: ", i + 1);
        scanf("%d", &vetor_1[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d elemento do vetor 2: ", i + 1);
        scanf("%d", &vetor_2[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (vetor_1[i] <= vetor_2[i]){
            vetor_3[i] = vetor_1[i];
            vetor_4[i] = vetor_2[i];
        }
        else {
            vetor_3[i] = vetor_2[i];
            vetor_4[i] = vetor_1[i];
        }
    }

    printf("Os elementos do vetor_3 sao: ");
    for (int i = 0; i < 10; i++) {
        if (i == 9)
            printf("%d.", vetor_3[i]);
        else
            printf("%d, ", vetor_3[i]);
    }

    printf("\n");

    printf("Os elementos do vetor_4 sao: ");
    for (int i = 0; i < 10; i++) {
        if (i == 9)
            printf("%d.", vetor_4[i]);
        else
            printf("%d, ", vetor_4[i]);
    }
}
