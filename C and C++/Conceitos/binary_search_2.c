#include <stdio.h>

int buscaBinaria(int x, int n, int v[]) {
    int e = -1, d = n;
    while (e < d-1) {
        int m = (e + d)/2;
        if(v[m] < x) e = m;
        else d = m;
    }
    return d;   // o código retorna o elemento de valor maior ou igual a chave (maior caso a chave não esteja na lista)
}

void main() {
    int vetor[5] = {1, 3, 8, 12, 17};
    printf("%d", buscaBinaria(8, 5, vetor));
}
