#include <stdio.h>

int main(){
    int num;
    int aux;
    int rev = 0;

    while (1 == 1){
        printf("Digite um numero: \n");
        scanf("%d", &num);
        aux = num;
        if (num >= 10){
            break;
        }
        else{
            printf("O numero deve ser maior ou igual a 10.\n");
        }
    }

    for (aux; aux != 0; aux /= 10){
        rev = rev * 10 + aux % 10;
    }
    if (rev == num){
        printf("%d e palindromo", num);
    }
    else{
        printf("%d nao e palindromo", num);
    }

    return 0;
}