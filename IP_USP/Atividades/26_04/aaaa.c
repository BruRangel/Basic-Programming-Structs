#include <stdio.h>

int main()
{
    int numerotestado = 0;
    int numeroprocurado = 0;
    int sequencia = 0;

    printf("Qual numero que você deseja testar? (Que seja maior que 0) \n");
    scanf("%i", &numerotestado);

    printf("Qual numero que você deseja procurar? (Que seja maior que 0) \n");
    scanf("%i", &numeroprocurado);

    if(numerotestado-numeroprocurado >= 0){

        int tempnumerotestando = numerotestado;
        int a = 1;
        int b = 1;

        while(a != 0){
        a = tempnumerotestando%10;

        if(a == numeroprocurado){

            int tempnumerotestandosequencia = tempnumerotestando/10;

            b = tempnumerotestandosequencia%10;

                if(b == numeroprocurado){
                    sequencia++;
                } 
        }

        tempnumerotestando =  tempnumerotestando/10;

        }

    }

printf("%d", sequencia);
return sequencia;
}