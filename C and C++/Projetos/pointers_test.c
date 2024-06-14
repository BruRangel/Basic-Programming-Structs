#include <stdio.h>

void pointertest(int *x){
    printf("Type x: ");
    scanf("%d", x);
}

void main(){
    int x;
    pointertest(&x);
    printf("%d", x);
}
