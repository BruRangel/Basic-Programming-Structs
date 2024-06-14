#include <stdio.h>
#include <stdlib.h>

void main() {
    int *y;     // ao declarar um ponteiro sem referenciar qual endereço de memória ele refere, um endereço de memória aleatório será alocado pelo computador
    y = malloc(sizeof(int));
    *y = 23;    // é possível atribuir um valor a esse endereço de memória aleatório que é referenciado pelo ponteiro
    printf("%d\n", *y);     // retorna o valor armazenado no endereço de memória
    printf("%d\n", y);      // retorna o endereço de memória
    printf("%d\n", &y);     // retorna o endereço de memória do ponteiro y
}
