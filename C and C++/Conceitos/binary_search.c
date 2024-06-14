#include <stdio.h>

int buscaBinaria(float vetor[], int tamanho, float chave) {
    int esquerda = 0;
    int direita = tamanho - 1;
    
    while (esquerda <= direita) {
        int meio = (esquerda + direita)/2;
        if(vetor[meio] == chave) {
            return meio;
        }
        if(vetor[meio] < chave) {
            esquerda = meio + 1;
        }
        else {
            direita = meio - 1;
        }
    }
}

void main() {
    float vetor_1[6] = {2.0, 5.0, 7.0, 9.0, 12.0, 15.0};
    printf("%d", buscaBinaria(vetor_1, 6, 13.0));
}
