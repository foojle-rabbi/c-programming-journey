#include<stdio.h>

typedef struct node Node;
struct node {
    int data;
    Node* next;
};

void enqueue(Node **f, Node **r, int data) {
    Node *n=(Node*) malloc(sizeof(Node));
    if(n== NULL) {
        printf("Couldn’t create Node\n");
    }
    n->data = data;
    n->next = NULL;
    if(*f==NULL) {
        *f=*r=n;
    } else {
        (*r)->next=n;
        *r=n;
    }
}

void dequeue(Node **f) {
    if(*f==NULL) {
        printf("Queue is empty\n");
        return;
    }
    Node* temp = *f;
    *f = (*f)->next;
    printf("Dequeues item %d\n", temp->data);
    free(temp);
}

void display(Node *ptr) {
    printf("Elements of nodes: ");
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
int main()
{
    Node *f = NULL;
    Node *r = NULL;

    dequeue(&f);

    enqueue(&f,&r,10);
    enqueue(&f,&r,20);
    enqueue(&f,&r,30);
    display(f);

    dequeue(&f);
    dequeue(&f);

    enqueue(&f,&r,40);
    enqueue(&f,&r,50);
    display(f);

    return 0;
}