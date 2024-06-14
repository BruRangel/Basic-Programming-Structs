#include <stdio.h>
// Dado um número inteiro positivo n, determinar todos os inteiros entre 1 e n que são comprimento da hipotenusa de um triângulo retângulo com catetos inteiros.

#define TRUE 1;
#define FALSE 0;

int main(){
    int n, cateto1, cateto2, hipotenusa;
    int achou;

    printf("Digite o comprimento maximo da hipotenusa: ");
    scanf("%d", &n);
 
//testa todas as possíveis hipotenusas
    for(hipotenusa = 1; hipotenusa <= n; hipotenusa++){
        achou = FALSE;
        //testa todos os candidatos a catetos
        for(cateto1 = 1; cateto1 < hipotenusa && !achou; cateto1++){
            for(cateto2 = cateto1; cateto2 < hipotenusa && !achou; cateto2++){
                if((cateto1*cateto1) + (cateto2*cateto2) == (hipotenusa*hipotenusa)){
                    printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto1, cateto2);
                    achou = TRUE;
                }
            }
        }
    }

    return 0;
}
