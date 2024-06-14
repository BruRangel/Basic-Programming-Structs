#include <stdio.h>
// Dados n números inteiros positivos, calcular a soma dos que são primos.

#define TRUE 1
#define FALSE 0

int eprimo(int n){
    int divisor;
    int primo;

    if (n <= 1 || (n != 2 && n % 2 == 0)){
        primo = FALSE;
    }
    else{
        primo = TRUE;
    }

    for (divisor = 3; divisor <= (n/2); divisor += 2){
        if ((n % divisor) == 0){
            primo = FALSE;
        }
    }

    if (primo == TRUE){
        return 0;
    }
    else{
        return 1;        
    }
}

int main(){
    int n, num_atual, soma = 0;

    printf("Digite quantos numeros tera sua lista: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Digite o valor do %d numero: ", i);
        scanf("%d", &num_atual);
        if(eprimo(num_atual) == 0){
            soma += num_atual;
        }
    }

    printf("A soma dos numeros primos = %d", soma);

    return 0;
}