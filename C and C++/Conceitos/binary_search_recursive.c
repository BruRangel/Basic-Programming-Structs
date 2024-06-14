#include <stdio.h>

void organizaCrescenteVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i+1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]){
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int chave) {
    if(inicio <= fim) {
        int meio = inicio + (fim - inicio)/2;

        // se a chave estiver no meio do vetor
        if (vetor[meio] == chave) return meio;

        // se a chave estiver a direita do meio do vetor
        if (vetor[meio] < chave)
            return buscaBinariaRecursiva(vetor, meio + 1, fim, chave);
        
        // se a chave estiver a esquerda do meio do vetor
        if (vetor[meio] > chave)
            return buscaBinariaRecursiva(vetor, inicio, meio -1, chave);
    }
    return -1;  // se a chave não for encontrada
}

void main() {
    int vetor[20];
    int tamanho;
    int chave;

    printf("Digite qual sera o tamanho do seu vetor (ate 20): ");
    scanf("%d", &tamanho);
    printf("Digite qual elemento voce quer achar dentre os elementos do vetor: ");
    scanf("%d", &chave);

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    organizaCrescenteVetor(vetor, tamanho);

    printf("O vetor, organizado em ordem crescente: ");
    for (int i = 0; i < tamanho; i++) {
        if(i == tamanho-1)
            printf("%d\n", vetor[i]);
        else
            printf("%d ", vetor[i]);
    }

    int indice = buscaBinariaRecursiva(vetor, 0, tamanho - 1, chave);

    if (indice != -1) {
        printf("A chave %d foi encontrada na posicao %d\n", chave, indice);
    }
    else
        printf("A chave %d nao foi encontrada no vetor\n", chave);
}