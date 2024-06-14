#include <stdio.h>

short int main(){
    short int numerop1;
    short int numerop2;
    short int ndigitos_p1 = 1;
    short int count = 0;

    while (1==1){
        printf("Digite um numero inteiro positivo maior que 0 (parametro 1): \n");
        scanf("%hi", &numerop1);
        if(numerop1 >= 0){
            break;
        }
        printf("O numero nao pode ser negativo\n");
    }

    while(1==1){
        printf("Digite um numero inteiro de um unico digito (parametro 2): \n");
        scanf("%hi", &numerop2);
        if(numerop2 >= 0 && numerop2 < 10){
            break;
        }
        printf("O numero deve ser positivo e ter apenas um digito\n");
    }

    short int aux = numerop1;

    while((aux/10) != 0){
        aux = aux/10;
        ndigitos_p1++;
    }

    short int aux_2 = numerop1;

    char lista[ndigitos_p1];
    for(short int i = 0; i < ndigitos_p1; i++){
        lista[i] = aux_2%10;
        aux_2 = aux_2/10;
    }

    for(short int i = 0; i < ndigitos_p1; i++){
        if (i!=0){
            if(lista[i] == lista[i-1] && lista[i] == numerop2){
                count++;
            }
        }
    }

    printf("Numero de repeticoes de dois numeros iguais ao segundo parametro: %hi", count);

    return 0;
}
