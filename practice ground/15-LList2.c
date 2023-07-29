//in the linked list i will do
// display
//insertion also there are 3 types of insetion like insert in first 2. insertatlst 3. insert at index
//there are 3 types of deletion 1. delete at first 2. delete at last 3. delete after a index 
//along with them there are ocuple of functions but now i only do the those 

#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void display(struct node* head){
    printf("Elements of list: ");
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct node* createNode(int data){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Coudn't create node\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

struct node* insertAtFirst(struct node* head, int data){
    struct node* newNode = createNode(data);

    newNode->next = head;
    head = newNode;

    return head;
}

struct node* insertAtLast(struct node* head, int data){
    struct node* new = createNode(data);

    struct node* p = head;

    while(p->next != NULL){
        p = p->next;
    }

    p->next = new;

    return head;
}

int main()
{
    head = NULL;

    head = insertAtFirst(head, 52);
    head = insertAtLast(head, 555);

    display(head);
    return 0;
}