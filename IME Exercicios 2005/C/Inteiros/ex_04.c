#include <stdio.h>

void fpow(int base, int potencia){
    int resultado = 1;
    for (int i=1; i <= potencia; i++){
        resultado *= base;
    }
    printf("%d elevado a %d is %d", base, potencia, resultado);
}

int main(){
    int x;
    int y;
    printf("Valor de x (base): ");
    scanf("%d", &x);
    printf("valor de y (potencia): ");
    scanf("%d", &y);
    fpow(x, y);

    return 0;
}
