#include <stdio.h>


int main(){
    int n;
    printf("De um numero inteiro positivo: \n");
    scanf("%d", &n);
    printf("Os %d primeiros numeros impares sao: \n", n);
    for (int i=1; i < n*2; i++){
        if (i%2 != 0){
            printf("%d ", i);
        }
    }
    return 0;
}
