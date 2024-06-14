#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14159;
    double raio;
    double area;

    printf("Digite o valor do raio da circunferencia: \n");
    scanf("%lf", &raio);
    area = PI * pow(raio, 2);
    printf("area: %.2lf\n", area);

return 0;
}
