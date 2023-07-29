#include<stdio.h>

typedef struct node Node;
struct node {
    int data;
    Node *next;
};

Node *createNode(int data);
void printNode(Node *ptr);
Node *deleteFirst(Node *head);
Node *deleteIndex(Node *head, int index);
Node *deleteEnd(Node *head);

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
    fourth->next = NULL;

    printNode(head);

    //head = deleteFirst(head);
    //head = deleteIndex(head, 1);
    head = deleteEnd(head);

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

void printNode(Node *ptr) {
    printf("Value of node: ");
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

Node *deleteFirst(Node *head) {
    Node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

Node *deleteIndex(Node *head, int index) {
    Node *p = head; //p for pointing that index

    int i =0;
    while(i != index-1) {
        p = p->next;
        i++;
    }

    Node *temp = p->next;
    p->next = temp->next;
    free(temp);

    return head;
}

Node *deleteEnd(Node *head) {
    Node *p = head;
    Node *q = head->next;

    while(q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);

    return head;
}







