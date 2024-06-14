#include <stdio.h>

#define FALSE 0
#define TRUE 1

short int eprimo(short int n){
    short int divisor;
    short int primo;

    if (n <= 1 || (n != 2 && n % 2 == 0)){
        primo = FALSE;
    }
    else{
        primo = TRUE;
    }

    for (divisor = 3; divisor <= (n/2); divisor += 2){
        if ((n % divisor) == 0){
            primo = FALSE;
        }
    }

    if (primo == TRUE){
        return 0;
    }
    else{
        return 1;        
    }
}

short int main(){
    short int lista[50];
    short int numeros;
    short int numero_atual;

    printf("Digite quantos numeros tera sua lista (max 50): \n");
    scanf("%hi", &numeros);

    for(short int i = 0; i < numeros; i++){
        printf("Digite o %hi numero: \n", i+1);
        scanf("%hi", &numero_atual);
        lista[i] = numero_atual;
    }

    printf("Os numeros primos presentes na lista sao: \n");

    for(short int i = 0; i < numeros; i++){
        if (eprimo(lista[i]) == 0){
            printf("%hi ", lista[i]);
        }
    }

    return 0;
}
