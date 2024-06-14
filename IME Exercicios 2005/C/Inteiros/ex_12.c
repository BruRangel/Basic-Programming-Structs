#include <stdio.h>

int main() {
  int anterior,  
      atual,
      resto;
  
  printf("Digite os dois inteiros positivos: ");
  scanf("%d  %d" , &anterior, &atual);
  printf("MDC(%d,%d) = ", anterior, atual);
  
  resto = atual % anterior; /* Por que nao 'resto = anterior % atual;'? */
  while (resto != 0) {
    resto = anterior % atual;
    anterior = atual;
    atual = resto;
  }
  
  printf("%d\n", anterior);
  return 0;
}
