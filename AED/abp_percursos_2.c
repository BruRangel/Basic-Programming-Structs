#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int TipoChave;

typedef struct No {
    TipoChave chave;
    struct No *esq, *dir;
} No;

typedef No *Pont;

typedef struct Pilha {
    Pont topo;
} Pilha;

    