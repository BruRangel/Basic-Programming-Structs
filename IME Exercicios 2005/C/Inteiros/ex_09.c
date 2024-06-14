#include <stdio.h>

void fatorial(int fatorando){
    int fatorial = 1;
    int contador = 0;
    while(contador < fatorando){
        fatorial *= (contador + 1);
        contador ++;
    }
    printf("%d! = %d", fatorando, fatorial);
}

int main(){
    int numero;
    printf("Qual numero voce deseja descobrir o fatorial? \n");
    scanf("%d", &numero);
    fatorial(numero);

    return 0;
}
