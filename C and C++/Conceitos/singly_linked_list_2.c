#include <stdio.h>
#include <stdlib.h>

// Uma lista encadeada  (= linked list = lista ligada)  é uma sequência de células. Cada célula contém um objeto (todos os objetos são do mesmo tipo) e o endereço da célula seguinte.

typedef struct LinkedList {
    int data;
    struct LinkedList *next;
} LinkedList;

typedef LinkedList *node;   // define o nó como um ponteiro do tipo de dado LinkedList

node createNode() {
    node temp;  // declarando um nó
    temp = (node)malloc(sizeof(struct LinkedList));    // alocando memória
    temp->next = NULL;    // fazendo o ponteiro "next" apontar para NULL
    return temp;    // retornando o novo nó
}

void addNodeStart(node *head, int value) {
    node temp = createNode();  // declarando um nó
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

void addNodeFinal(node *head, int value) {
    node temp, p;   // declarando dois nós temp e p
    temp = createNode();
    temp->data = value;
    if (*head == NULL)
        *head = temp;    // quando a lista ligada está vazia
    else {
        p = *head;   // declarando p como head
        while (p->next != NULL) {
            p = p->next;    //itera pela lista enquanto p é diferente de NULL (último nó)
        }
        p->next = temp; //aponta para o nó recem criado
    }
}

void excludeNodeStart(node *head) {
    if (*head == NULL)
        return;
    node temp = *head;
    *head = (*head)->next;
    free(temp);
}


void excludeNodeFinal(node *head) {
    node temp, p;
    if (*head == NULL)
        return;
    if((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    p = *head;
    while (p->next->next != NULL) {
        p = p->next;
    }
    free(p->next);
}

void main() {
    node head = createNode();
    head->data = 0;
    addNodeFinal(&head, 1);
    addNodeFinal(&head, 3);
    addNodeFinal(&head, 5);
    addNodeStart(&head, 8);
    addNodeStart(&head, 12);
    excludeNodeStart(&head);
    excludeNodeFinal(&head);

    node p = head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}