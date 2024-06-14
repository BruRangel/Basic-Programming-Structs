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
    printf("Digite o numero n em binario: \n");
    scanf("%d", &n);
    for (int i = 0; n!=0; i++){
        sum += (n % 10) * (power(2, i));
        n = n/10;
    }
    printf("%d\n", sum);

    return 0;
}
