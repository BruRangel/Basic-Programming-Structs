#include <stdio.h>

int main(){
    int n;
    int primo = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 1){
        primo = 1;
    }
    else{
        for (int i=1; i < n; i++){
            for(int j=1; j < n; j++){
                if((i * j) == n){
                    primo = 1;
                }
            }
        }
    }
    
    if(primo == 1){
        printf("%d != primo.", n);
    }
    else{
        printf("%d = primo.", n);
    }

    return 0;
}
