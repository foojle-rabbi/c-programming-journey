#include<stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node {
    int data;
    Node *next;
};

Node *createNode(int data);
void printNode(Node *ptr);

int main()
{
    Node *head,*second,*third,*fourth;

    //adding values using function
    head = createNode(10);
    second = createNode(20);
    third = createNode(30);
    fourth = createNode(40);

    //linking nodes manually
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;

    printNode(head);

    return 0;
}

Node *createNode(int data) {
    Node *newNode;
    newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Sorry, couldn’t create node\n");
        exit(1);
    }
    newNode->data=data;

    return newNode;
}

void printNode(Node *head) {
    Node *ptr = head;

    printf("Value of node: ");
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while(ptr!= head);
    printf("\n");
}
 




    