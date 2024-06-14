#include <stdio.h>

int main(){
    /* Dados dois naturais m e n determinar, entre todos os pares de números naturais (x,y) tais que x < m e y < n, 
    um par para o qual o valor da expressão xy - x2 + y seja máximo e calcular também esse máximo. */

    int m, n;
    int x, y;
    int max = 0;
    int numeros[2];

    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(x = 0; x < m; x++){
        for(y = 0; y < n; y++){
            if((x*y - x*x + y) >= max){
                numeros[0] = x;
                numeros[1] = y;
                max = (x*y - x*x + y);
            }
        }
    }

    printf("Os numeros que garantem o maior resultado da expressao sao: %d e %d", numeros[0], numeros[1]);

    return 0;
}