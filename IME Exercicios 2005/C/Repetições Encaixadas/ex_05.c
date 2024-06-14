#include <stdio.h>
/* Sabe-se que um número da forma n^3 é igual a soma de n ímpares consecutivos.
Exemplo: 1^3= 1, 2^3= 3+5, 3^3= 7+9+11,  4^3= 13+15+17+19,...
Dado m, determine os ímpares consecutivos cuja soma é igual a n^3, para n assumindo valores de 1 a m. */

int main(){
    int n, m, i, inicio, soma;
    printf("Digite o valor de m: ");
    scanf("%d", &m);

    for(int n = 1; n <= m; n ++){
        soma = 0;
        for(inicio = 1; soma != n * n * n; inicio += 2){
            soma = 0;
            for (i = 0; i < n; i++){
	            soma = soma + inicio + 2 * i;    
            }
        }
        inicio -= 2;
        printf("%d*%d*%d = %d = %d", n, n, n, n*n*n, inicio);
        for(i = 1; i < n; i++){
            printf("+%d", inicio+2*i);
        }
        printf("\n");
    }

    return 0;
}