#include <stdio.h>
#include <math.h>

int a;
int b;
int c;

int main(){
    printf("Enter the value a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum_pow = pow(a,2) + pow(b,2) + pow(c,2);
    printf("The sum of the values are: %d", sum_pow);

    return 0;
}