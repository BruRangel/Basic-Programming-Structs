#include <stdio.h>

int main(){
    int l1;
    int l2;
    int l3;
    printf("Digite os lados do triangulo: \n");
    scanf("%d %d %d", &l1, &l2, &l3);

    if (l1 == l2 == l3){
        printf("Nao e triangulo retangulo.\n");
    }
    else{
        if (l2 > l1){
            int t = l1;
            l1 = l2;
            l2 = t;
        }
        if (l3 > l1){
            int t = l1;
            l1 = l3;
            l3 = t;
        }
        if (l1 * l1 == l2 * l2 + l3 * l3){
            printf("E triangulo retangulo");
        } 
        else {
            printf("Nao e triangulo retangulo.\n");
        }
    }

    return 0;
}