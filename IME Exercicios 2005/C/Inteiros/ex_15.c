#include <stdio.h>

int main(){
    int n, j, m;
    printf("digite os valores de n, j e m\n");
    scanf("%d %d %d", &n, &j, &m);
    printf("Os %d primeiros numeros naturais congruentes a %d modulo %d sao: \n", n, j, m);
    for (int i = 1; n > 0; i++){
        if (i % m == j % m){
            printf("%d\n", i);
            n--;
        }
    }
    return 0;
}
