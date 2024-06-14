#include <stdio.h>

void collatz(int x)
{	
	printf("%d ", x);	
	if (1 == x)
		return;
	else if (x % 2 == 0)		
		collatz(x/2);
	else
		collatz(3*x+1);
}

void main() {
    int x;
    printf("Digite o numero de x: ");
    scanf("%d", &x);
    collatz(x);
}