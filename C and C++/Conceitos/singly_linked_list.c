#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));  // creating the first node of the list
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));   // creating the second node of the list
    current->data = 98;
    current->link = NULL;
    head->link = current;
    
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
}