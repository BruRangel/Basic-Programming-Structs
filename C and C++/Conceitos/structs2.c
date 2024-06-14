#include <stdio.h>

void main(){
    typedef struct dma{
        int dia;
        int mes;
        int ano;
    } data;

    data x, y;
    x.dia = 29; x.mes = 4; x.ano = 2024;
    y.dia = 30; y.mes = 1; y.ano = 2023;

    printf("%d\n", x.dia);
    printf("%d/%d/%d", x);
}