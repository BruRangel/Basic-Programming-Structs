#include <stdio.h>

int vendas[30] = {6, 8, 4, 2, 5, 10, 7, 8, 9, 20, 2, 20, 9, 7, 4, 6, 8, 4, 2, 5, 10, 7, 8, 9, 15, 2, 15, 9, 7, 4};

int main(){
    int maior = 0;
    for (int i=0; i<30; i++){
        if(vendas[i]>maior){
            maior = vendas[i];
        }
    }
    printf("Maior valor = %d", maior);

    return 0;
}
