#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("De um numero inteiro positivo: \n");
    scanf("%d", &n);
    printf("A soma dos %d primeiros numeros inteiros positivos e: ", n);
    for (int i=1; i<=n; i++){
        sum += i;
    }
    printf("%d", sum);

    return 0;
}
