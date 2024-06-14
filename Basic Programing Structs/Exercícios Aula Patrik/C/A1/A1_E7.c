#include <stdio.h>

float celcius;
float fahrenheit;

int main(){
    printf("Digite o valor em celcius: \n");
    scanf("%f", &celcius);
    fahrenheit = ((9.0/5.0)*celcius+32);
    printf("O valor em fahrenheit e igual a %.2f\n", fahrenheit);
    
    return 0;
}
