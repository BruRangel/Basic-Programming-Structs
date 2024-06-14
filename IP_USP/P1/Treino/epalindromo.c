#include <stdio.h>
void main(){
    int numero, aux, reverso = 0;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    aux = numero;
    for(aux; aux != 0; aux /= 10){
        reverso = reverso * 10 + aux % 10;
    }
    if(reverso == numero){
        printf("O numero %d e palindromo", numero);
    }
    else{
        printf("O numero %d nao e palindromo", numero);
    }
}