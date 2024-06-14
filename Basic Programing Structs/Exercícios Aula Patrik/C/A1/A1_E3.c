#include <stdio.h>
#include <math.h>

int main(){
    int A;
    int B;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    
    int dif_pow = pow((A-B), 2);
    printf("power: %d", dif_pow);

    return 0;
}