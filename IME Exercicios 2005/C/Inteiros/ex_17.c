#include <stdio.h>

int power(int base, int expoente){
    int potencia = 1;
    for (int i = 0; i < expoente; i++){
        potencia *= base;
    }
    return potencia;
}

int main(){
    int n;
    int sum = 0;
    printf("Digite o numero n em decimal: \n");
    scanf("%d", &n);
    for (int i = 0; n!=0; i++){
        sum += (n % 2) * (power(10, i));
        n = n/2;
    }
    printf("%d\n", sum);

    return 0;
}
