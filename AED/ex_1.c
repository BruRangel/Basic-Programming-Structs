#include <stdio.h>
#include <stdlib.h>

typedef struct aux {
    int cpf;
    int idade;
    struct aux *conjuge;
} pessoa;
