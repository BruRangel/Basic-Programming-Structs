#include <stdio.h>

float km;
float litros;

int main(){
    printf("Entre quantos km o carro ira percorrer: ");
    scanf("%f", &km);
    litros = km/12;
    printf("Voce ira gastar %.2f litros", litros);

    return 0;
}