#include <stdio.h>

pow (int base, int expoent){
    int r = base;
    for(int i = 1; i < expoent; i++){
        r = r * base;
    }
    return printf("%d", r);
}

int x;
int y;

int main(){
    printf("Base: ");
    scanf("%d", &x);
    printf("Expoent: ");
    scanf("%d", &y);
    pow(x, y);
    
    return 0;
}
