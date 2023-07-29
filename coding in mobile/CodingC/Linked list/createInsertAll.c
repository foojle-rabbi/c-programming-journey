#include<stdio.h>

typedef struct node Node;
struct node {
    int data;
    Node *next;
};

//functions prototypes
void printNode(Node *head);
Node *insertAtFirst(Node *head, int data);
Node *insertAtIndex(Node *head, int data, int index);
Node *insertAtEnd(Node * head, int data);
Node *insertPrev(Node *head, Node *prev, int data);

int main()
{
    Node *head = (Node *) malloc(sizeof(Node));
    Node *second = (Node *) malloc(sizeof(Node));
    Node *third = (Node *) malloc(sizeof(Node));
    Node *fourth = (Node *) malloc(sizeof(Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;


    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    printf("before insertion\n");
    printNode(head);
    printf("\n");

    printf("After first index insertion\n");
    head = insertAtFirst(head, 1);
    printNode(head);
    printf("\n");

    printf("After index insertion\n");
    head = insertAtIndex(head, 15, 3);
    printNode(head);
    printf("\n");

    printf("After last index insertion\n");
    head = insertAtEnd(head, 50);
    printNode(head);
    printf("\n");

    printf("After second (20) index insertion\n");
    head = insertPrev(head, third, 30);
    printNode(head);
    printf("\n");

    return 0;
}

//function definitions
void printNode(Node *head) {
    printf("Nodes value : ");
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

Node *insertAtFirst(Node *head, int data) {
    Node *newNode;
    newNode = (Node *) malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Sorry, Couldn't create Node\n");
        exit(1);
    }
    newNode->data= data;

    newNode->next = head;
    //head= newNode;

    return newNode;
}

Node *insertAtIndex(Node *head, int data, int index) {
    Node *newNode =(Node *) malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Sorry, Couldn't create Node\n");
        exit(1);
    }
    int i=0;
    Node *p = head;
    while(i != index-1) {
        p = p->next;
        i++;
    }
    newNode->data = data;

    newNode->next = p->next;
    p->next= newNode;

    return head;
}

Node *insertAtEnd(Node * head, int data) {
    Node *newNode =(Node *) malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Sorry, Couldn't create Node\n");
        exit(1);
    }

    Node *p = head;
    while(p->next != NULL) {
        p= p->next;
    }

    newNode->data = data;
    p->next = newNode;
    newNode->next = NULL;

    return head;
}

Node *insertPrev(Node *head, Node *prev, int data) {
    Node *newNode;
    newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Couldn’t create node\n");
        exit(1);
    }
    newNode->data = data;

    newNode->next = prev->next;
    prev->next = newNode;

    return head;
}




