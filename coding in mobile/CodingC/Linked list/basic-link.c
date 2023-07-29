#include<stdio.h>

typedef struct node Node;
struct node {
    int data;
    Node *next;
};

Node *createNode(int item, Node *next);
void printNode(Node *ptr);
int main()
{
    Node *head;
    Node *n1;
    Node *n2;

    n2 = createNode(30, NULL);
    n1 = createNode(20,n2);
    head = createNode(10, n1);

    printNode(head);

    return 0;
}

Node *createNode(int item, Node *next) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));

    newNode->data = item;
    newNode->next = next;

    return newNode;
}

void printNode(Node *ptr) {
    while(ptr != NULL) {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}