#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data[50];
    struct node *next;
};
struct node *inicio = NULL;
struct node *fim = NULL;
void inicializa(){
    head = (struct node*)malloc(sizeof(struct node));
    strcpy(head->data, "A");
    head->next = NULL;
    struct node *nodeB = NULL;
    struct nodeB = (struct node*)malloc(sizeof(struct node));
    strcpy(nodeB->data,"B");
    nodeB->next = NULL;
    head->next = nodeB;
    node *nodeC = NULL;
    nodeC = (node*)malloc(sizeof(node));
    strcpy(nodeC->data,"C");
    nodeC->next = NULL;
    head->next = nodeC;
    fim = (node*)malloc(sizeof(node));
    strcpy(fim->data, "D")
    fim->next = NULL;
    nodeC->next= fim;
}

int main(){
    
    return 0;
}