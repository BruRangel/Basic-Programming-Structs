#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (b > a){
        int t = a;
        a = b;
        b = t;
    }
    if (c > a){
        int t = a;
        a = c;
        c = t;
    }
    if (c > b){
        int t = b;
        b = c;
        c = t;
    }
    printf("%d, %d, %d", c, b, a);

    return 0;
}