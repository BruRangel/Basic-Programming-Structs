#include <stdio.h>

int contador = 0;
int numero;
int n;
int soma = 0;
int lista[20];

int main(){
    printf("Quantos numeros tera sua sequencia? \n");
    scanf("%d", &n);

    while(contador < n){
        printf("Digite o numero %d de %d: ", contador + 1, n);
        scanf("%d", &lista[contador]);
        if ((lista[contador] % 2) == 0){
            soma += lista[contador];
        }
        contador++;
    }
    printf("Soma dos pares: %d", soma);

    return 0;
}
