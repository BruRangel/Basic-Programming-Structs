#include <stdio.h>

int a; int b; int c; int d;

int main(){
    printf("Enter the values of a, b, c and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int p = a * c;
    int s = b + d;
    printf("The value of p (a*c) = %d, and the value of s (b+d) = %d.", p, s);

    return 0;
}