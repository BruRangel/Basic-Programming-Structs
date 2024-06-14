#include <stdio.h>

short int epalindromo(short int n){
    short int aux = n;
    short int reverso = 0;

    if(n <= 0){
        return 0;
    }
    for (aux; aux != 0; aux /= 10){
        reverso = reverso * 10 + aux % 10;
    }
    if (reverso == n){
        return 1;
    }
    else{
        return 0;
    }
}

short int main(){
    short int numero;
    printf("Digite o numero que deseja verificar se e palindromo: ");
    scanf("%hi", &numero);
    if (epalindromo(numero) == 1){
        printf("O numero %hi e palindromo", numero);
    }
    else{
        printf("O numero %hi nao e palindromo", numero);
    }
    
    return 0;
}
