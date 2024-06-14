#include <stdio.h>

float celcius;
float fahrenheit;

int main(){
    printf("Digite o valor em fahrenheit: \n");
    scanf("%f", &fahrenheit);
    celcius = ((fahrenheit - 32)/(9.0/5.0));
    printf("O valor em fahrenheit e igual a %.2f\n", celcius);
    
    return 0;
}
