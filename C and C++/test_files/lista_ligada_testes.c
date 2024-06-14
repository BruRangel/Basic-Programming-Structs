#include <stdio.h>
#include <stdlib.h>

typedef struct reg {
    int data;
    struct reg *next;
} node;

void printList(node *le) {     // função para imprimir os elementos de uma lista encadeada
    if (le != NULL) {
        printf("%d\n", le->data);
        printList (le->next);
    }
}

node* createNode() {
    node* temp;
    temp = (node*)malloc(sizeof(node));
    temp->next = NULL;
}

int main() {
    /*celula c;
    celula *p;
    c.conteudo = 2;
    c.prox = p;
    p->conteudo = 4;
    p->prox = NULL;
    printf("Conteudo c: %d, Conteudo *p: %d\n", c.conteudo, p->conteudo);
    printf("Prox c: %d, Prox *p: %d\n", c.prox, p->prox);
    printf("p: %d\n", p);
    printf("conteudo *p: %d, prox *p: %d\n", *p);
    imprimeLista(p);
    return 1;*/
}
