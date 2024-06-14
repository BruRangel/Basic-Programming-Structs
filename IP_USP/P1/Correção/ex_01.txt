#include <stdio.h>

void main() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9.0/5.0)*celsius + 32;
    printf("Celsius: %f, Fahrenheit: %f", celsius, fahrenheit);
}
