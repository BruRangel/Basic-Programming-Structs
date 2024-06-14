#include <stdio.h>

int main (){
    int n;
    int f_anterior = 0;
    int f_atual = 1;
    int f_proximo;

    printf("Sequencia de Fibonacci.\n");
    printf("Digite um numero n: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++){
        f_proximo = f_atual + f_anterior;
        f_anterior = f_atual;
        f_atual = f_proximo;
    }

    printf("F%d = %d", n, f_atual);

    return 0;
}
