#include <stdio.h>

void main() {
    int N, i;
    printf("Digite N: ");
    scanf("%d", &N);
    if(N == 0){
        printf("0");
    }
    int vetor[10];
    for(i = 0; N!= 0; i++) {
        vetor[i] = N%2;
        N/=2;
    }
    for(i--; i>=0; i--) {
        printf("%d", vetor[i]);
    }
}
