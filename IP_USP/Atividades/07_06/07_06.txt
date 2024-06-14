#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node* createNode() {    // função para criar um nó da lista encadeada
    node* temp;
    temp = (node*)malloc(sizeof(node));
    temp->next = NULL;
}

int countNodes(node *head) {    // contar número de nós na lista
    int count = 0;
    if (head == NULL) {
        return 0;
    }
    node *pointer = NULL;
    pointer = head;
    while (pointer != NULL) {
        count++;
        pointer = pointer->next;
    }
    return count;
}

void printList(node *head) {    // função para imprimir os elementos de uma lista encadeada
    if (head != NULL) {
        printf("%d ", head->data);
        printList (head->next);
    }
}

void addNodeBegin(node **head, int data) {  // adicionar nó no início da lista
    node* temp;
    temp = createNode();
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

void addNodeEnd(node *head, int data) {     // adicionar nó no final da lista
    node* temp; 
    node* pointer;
    pointer = head;
    temp = createNode();
    temp->data = data;
    if (head == NULL)
        head = temp;
    else {
        while (pointer->next != NULL)
            pointer = pointer->next;
        pointer->next = temp;
    }
}

void excludeNodeBegin(node **head) {  // excluir nó do início da lista
    if (*head == NULL) {
        return;
    }
    node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void excludeNodeEnd(node **head) {  // excluir nó do final da lista
    if (*head == NULL) {
        return;
    }
    node *temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}

int searchElement(node *head, int element) {  // buscar por um elemento na lista
    node *pointer = head;
    while (pointer != NULL) {
        if (pointer->data == element) {
            return 1;  // Elemento encontrado
        }
        pointer = pointer->next;
    }
    return 0;  // Elemento não encontrado
}

void sortList(node *head) {   // organizar lista em ordem crescente
    node* temp = head;
    node* pointer;
    int x;
    while (temp->next != NULL) {
        pointer = temp->next;
        while (pointer != NULL) {
            if (pointer->data < temp->data) {
                x = temp->data;
                temp->data = pointer->data;
                pointer->data = x;
                }
            pointer = pointer->next;
        }
    temp = temp->next;
    }
}

void insertElement(node **head, int data) {   // inserir elemento na lista mantendo a ordem crescente
    node* temp = createNode();
    temp->data = data;
    if (*head == NULL || (*head)->data >= data) {
        temp->next = *head;
        *head = temp;
        return;
    }
    node* pointer = *head;
    while (pointer->next != NULL && pointer->next->data < temp->data) {
            pointer = pointer->next;
    }
    temp->next = pointer->next;
    pointer->next = temp;
}

void excludeElement(node **head, int data) {  // excluir um elemento da lista
    node* pointer = *head;
    if(pointer == NULL)
        return;
    if (pointer->data == data) {
        excludeNodeBegin(head);
    }
    else {
        while (pointer->next != NULL) {
            if (pointer->next->data == data) {
                node* x = pointer->next;
                pointer->next = pointer->next->next;
                free(x);
            }
            else
                pointer = pointer->next;
        }
    }
}

int main() {
    node* head;
    head = createNode();
    head->data = 27;
    printList(head);
    printf("\n");

    addNodeEnd(head, 20);
    addNodeEnd(head, 13);
    printList(head);
    printf("\n");

    addNodeBegin(&head, 5);
    addNodeBegin(&head, 8);
    printList(head);
    printf("\n");

    excludeNodeBegin(&head);
    printList(head);
    printf("\n");

    excludeNodeEnd(&head);
    printList(head);
    printf("\n");

    sortList(head);
    printList(head);
    printf("\n");

    insertElement(&head, 24);
    printList(head);
    printf("\n");

    excludeElement(&head, 27);
    printList(head);
    printf("\n");
    
    excludeElement(&head, 20);
    printList(head);
    printf("\n");
}
