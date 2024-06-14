#include <stdio.h>
void main(){
    int x, y, temp;
    printf("Digite o valor de x, aperte enter, em seguida o valor de y, aperte enter: ");
    scanf("%d%d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d", x, y);
}