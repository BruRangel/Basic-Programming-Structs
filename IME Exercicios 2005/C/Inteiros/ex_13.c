#include <stdio.h>

// dizemos que n é perfeito se n é igual a soma dos seus divisores positivos diferentes de n.

int n;
int sum;

int main(){
    printf("Algoritmo para verificacao de numeros perfeitos.\n");
    printf("Digite o valor de n: \n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++){
        if ((n % i) == 0){
            sum+= i;
        }
    }

    if (sum == n){
        printf("O numero %d e perfeito", n);
    }
    else{
        printf("O numero %d nao e perfeito", n);        
    }

    return 0;
}
