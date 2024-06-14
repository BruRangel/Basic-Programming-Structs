#include <stdio.h>

int n;

int main(){
    printf("Value of n: ");
    scanf("%d", &n);

    printf("Antecessor: %d, Sucessor: %d", n-1, n+1);

    return 0;
}