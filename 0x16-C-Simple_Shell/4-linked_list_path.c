#include "main.h"


typedef struct node{
    int value; //this is the value the node stores
    struct node *next; //this is the node the current node points to. this is how the nodes link
}node;

node *createNode(int val){
    node *newNode = malloc(sizeof(node));
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}