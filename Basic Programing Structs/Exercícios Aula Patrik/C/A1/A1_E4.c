#include <stdio.h>

int main(){
    int horas_aulas;
    float valor_horas;
    printf("Quantas horas voce trabalhou? \n");
    scanf("%d", &horas_aulas);
    printf("Qual o valor de cada hora trabalhada? \n");
    scanf("%f", &valor_horas);
    float salario_bruto = horas_aulas * valor_horas;
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);

    float salario_liquido;

    if (salario_bruto <= 1412){
        salario_liquido = salario_bruto * 0.925;
    }
    else if (salario_bruto <= 2666.68){
        salario_liquido = salario_bruto * 0.91;
    }
    else if (salario_bruto <= 4000.03){
        salario_liquido = salario_bruto * 0.88;
    }
    else{
        salario_liquido = salario_bruto * 0.86;
    }
    
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
