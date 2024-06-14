#include <stdio.h>

int main(){
    int RA, RB, RC = 0;
    printf("Digite o dividendo: ");
    scanf("%d", &RA);
    printf("Digite o divisor: ");
    scanf("%d", &RB);

    int aux = RA;

    while(aux >= RB){
        RC += 1;
        printf("novo quociente: %d\n", RC);
        aux -= RB;
        printf("novo dividendo: %d (%d - %d)\n", aux, (aux+RB), RB);    
    }

    printf("%d/%d = %d, resto = %d", RA, RB, RC, aux);

    return 0;
}
