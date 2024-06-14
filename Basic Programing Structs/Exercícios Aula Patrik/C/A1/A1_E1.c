#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Enter the first integer value: ");
    scanf("%d", &x);
    printf("Enter the second integer value: ");
    scanf("%d", &y);
    printf("%d * %d = %d", x, y, (x*y));

    return 0;
}