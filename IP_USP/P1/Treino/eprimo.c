#include <stdio.h>
#define TRUE 1
#define FALSE 0
void main(){
    int n, eprimo = TRUE;
    printf("Digite o numero: ");
    scanf("%d", &n);
    if(n<=1 || n!= 2 && (n%2) == 0){
        eprimo = FALSE;
    }
    for(int i = 3; i <= n/2; i+=2){
        if((n%i) == 0){
            eprimo = FALSE;
        }
    }
    if(eprimo == TRUE){
        printf("%d e primo", n);
    }
    else{
        printf("%d nao e primo", n);
    }
}