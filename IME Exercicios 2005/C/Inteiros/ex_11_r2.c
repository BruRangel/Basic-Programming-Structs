#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main(){
    int n; // candidato a número primo
    int divisor; // candidato a divisor de n
    int primo; // indica se há possibilidade de ser primo

    printf("Teste de primalidade\n");
    printf("Digite um inteiro positivo\n");
    scanf("%d", &n);
    
    if (n <= 1 || (n != 2 && n % 2 == 0)){
        primo = FALSE;
    }
    else{
        primo = TRUE;
    }

    for (divisor = 3; divisor <= (n/2); divisor += 2){
        if ((n % divisor) == 0){
            primo = FALSE;
        }
    }

    if (primo == TRUE){
        printf("O numero %d e primo\n", n);
    }
    else{
        printf("O numero %d nao e primo\n", n);        
    }

    return 0;
}
