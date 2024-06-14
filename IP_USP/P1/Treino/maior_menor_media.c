#include <stdio.h>
void main(){
    int n, maior, menor, x;
    float media, soma = 0;
    printf("Digite quantos elementos tera a sequencia: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Digite o %d elemento: ", i+1);
        scanf("%d", &x);
        if(i==0){
            maior = x; menor = x;
        }
        if (x>maior){
            maior = x;
        }
        if(x < menor){
            menor = x;
        }
        soma += x;
    }
    media = soma/n;
    printf("maior: %d, menor: %d, media: %f", maior, menor, media);
}
